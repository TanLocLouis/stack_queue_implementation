#pragma once

template <typename T>
struct Queue {
	T* items;
	int front;
	int rear;
	unsigned int count;
	unsigned int maxSize;

	void init(unsigned int queueSize);
	void copyQueue(const Queue<T>& q);
	void release();

	bool isEmpty();
	void enqueue( T item);
	T dequeue();
	T frontValue();

	void print();
};

#include <iostream>

using namespace std;

template <typename T>
void Queue<T>::init(unsigned int queueSize) {
	items = new T[queueSize];
	front = 0;
	rear = -1;
	count = 0;
	maxSize = queueSize;
}

template <typename T>
bool Queue<T>::isEmpty() {
	return count == 0;
}

template <typename T>
void Queue<T>::enqueue(T item) {
	if (count == maxSize) {
		cout << "Hang doi da day" << endl;
		return;
	}

	rear++;
	items[rear] = item;
	count++;
}

template <typename T>
T Queue<T>::dequeue() {
	if (count == 0) {
		cout << "Hang doi rong" << endl;
		return T();
	}

	T item = items[front];
	front++;
	count--;

	return item;
}

template <typename T>
T Queue<T>::frontValue() {
	if (count == 0) {
		cout << "Hang doi rong" << endl;
		return T();
	}

	return items[front];
}

template <typename T>
void Queue<T>::copyQueue(const Queue<T>& q) {
	items = new T[q.maxSize];
	front = q.front;
	rear = q.rear;
	count = q.count;
	maxSize = q.maxSize;

	for (int i = front; i <= rear; i++) {
		items[i] = q.items[i];
	}
}

template <typename T>
void Queue<T>::release()
{
	delete[] items;
	items = nullptr;
	front = 0;
	rear = -1;
	count = 0;
	maxSize = 0;
}

template <typename T>
void Queue<T>::print() {
	for (int i = front; i <= rear; i++) {
		cout << items[i] << char(32);
	}
	cout << endl;
}
