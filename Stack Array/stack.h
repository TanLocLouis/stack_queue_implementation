#pragma once

template <class T>
struct Stack {
	T* item;
	int top;
	unsigned int maxSize;

	void init(unsigned int stackSize);
	void copyStack(const Stack<T>& s);
	void release();

	bool isEmpty();
	void push(T newItem);
	T pop();
	T topValue();
	
	void print();
};

#include <iostream>
using namespace std;
template <typename T>
void Stack<T>::init(unsigned int stackSize) {
	item = new T[maxSize];
	top = -1;
	maxSize = stackSize;
}

template <typename T>
void Stack<T>::release() {
	delete[] item;
}

template <typename T>
void Stack<T>::push(T newItem) {
	if (top == maxSize - 1) {
		cout << "Stack da day" << endl;
		return;
	}
	item[++top] = newItem;
}

template <typename T>
T Stack<T>::pop() {
	if (isEmpty()) {
		cout << "Stack rong" << endl;
		return T();
	}
	return item[top--];
}

template <typename T>
T Stack<T>::topValue() {
	if (isEmpty()) {
		cout << "Stack rong" << endl;
		return T();
	}
	return item[top];
}

template <typename T>
bool Stack<T>::isEmpty() {
	return top == -1;
}

template <typename T>
void Stack<T>::copyStack(const Stack<T>& s) {
	item = new T[maxSize];
	top = s.top;
	maxSize = s.maxSize;
	for (int i = 0; i <= top; i++) {
		item[i] = s.item[i];
	}
}

template <typename T>
void Stack<T>::print() {
	for (int i = 0; i <= top; i++) {
		cout << item[i] << char(32);
	}
	cout << endl;
}
