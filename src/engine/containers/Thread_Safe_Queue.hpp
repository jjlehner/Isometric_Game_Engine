
//A mutex free Queue based off of Anthony William's Design in 'C++ Concurrency in Action' 2nd edition
//pg 236
#ifndef GUARD_THREAD_SAFE_QUEUE_HPP
#define GUARD_THREAD_SAFE_QUEUE_HPP

#include <memory>
#include <atomic>
template <typename T>
class Thread_Safe_Queue{
private:
	struct node{
		std::shared_ptr<T> data;
		node * next;
		node() : next(nullptr){}
	};

	std::atomic<node*> head;
	std::atomic<node*> tail;

	node* popHead(){
		node* const old_head = head.load();
		if(old_head == tail.load())
		{
			return nullptr;
		}
		head.store(old_head->next);
		return old_head;
	}
public:
	Thread_Safe_Queue() : head(new node), tail(head.load()){}
	Thread_Safe_Queue(const Thread_Safe_Queue& other)=delete;
	Thread_Safe_Queue& operator=(const Thread_Safe_Queue& other)=delete;

	~Thread_Safe_Queue(){
		while(node * const old_head = head.load()){
			head.store(old_head->next);
			delete old_head;
		}
	}

	std::shared_ptr<T> pop(){
		node * old_head = popHead();
		if(!old_head){
			return std::shared_ptr<T>();
		}
		std::shared_ptr<T> const res(old_head->data);
		delete old_head;
		return res;
	}
	void push(T new_value){
		std::shared_ptr<T> new_data(std::make_shared<T>(new_value));
		node* p = new node;
		node * const old_tail = tail.load();
		old_tail->data.swap(new_data);
		old_tail->next = p;
		tail.store(p);
	}
};
#endif
