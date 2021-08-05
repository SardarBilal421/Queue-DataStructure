#pragma once
#include <string>
#include "node.h"
using namespace std;
class queue
{
private: 
	node* front;
	node* rear;
	int length;
public:
	queue()
	{
		front = nullptr;
		rear = nullptr;
		length = 0;
	}
	void enqueue();
	void dequeue();
	void Front();// returns headnode without removing it
	bool isEmpty();
	void find();
	void Size();
	void display();
	void exit();
	~queue()
	{

	}
};
