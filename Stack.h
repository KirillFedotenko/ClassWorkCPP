#pragma once
#include <iostream>
#include "List.h"
using namespace std;
template <typename BIBA>
struct Node {
	BIBA value;
	Node* next;
	Node(BIBA value) : value(value), next(nullptr) {};
};
template <typename BIBA>
class Stack
{
private:
	List<BIBA> first;
public:
	Stack() {};
	Stack(BIBA arr, int size) {};
	void push_back(BIBA value);
	void pop_back(BIBA value);
	bool empty();
	BIBA top();
	~Stack();
};

template<typename BIBA>
inline void Stack<BIBA>::push_back(BIBA value)
{
	first.pushBack(value);
}

template<typename BIBA>
inline void Stack<BIBA>::pop_back(BIBA value)
{
	first.pop_back(BIBA value);
}

template<typename BIBA>
inline bool Stack<BIBA>::empty()
{
	return (first == nullptr) ? true : false;
}

template<typename BIBA>
inline BIBA Stack<BIBA>::top()
{
	
}
