#pragma once
#include <iostream>
#include <string>
using namespace std;
class node
{
private:
	node* nextNode;
	float cgpa;
	string name;
	string degree;
	int pr;
	//int length;
public:
	node()
	{
		cgpa = 0.0;
		name = "na";
		degree = "na";
		pr = -1;
		
	}
	node* getnext()
	{
		return nextNode;
	}
	void setnext(node* NN)
	{
		this->nextNode = NN;
	}
	int get()
	{
		return pr;
    }
	void set(int p)
	{
		this->pr = p;
	}
	float getCgpa()
	{
		return cgpa;
	}
	void setCgpa(float c)
	{
		this->cgpa = c;
	}
	string getname()
	{
		return name;
	}
	void setname(string n1)
	{
		this->name = n1;
	}
	string getdegree()
	{
		return degree;
	}
	void setdegree(string d1)
	{
		this->degree = d1;
	}
	~node()
	{

	}
};
