#include <iostream>
#include <string>
#include "queue.h"
#include "node.h"
using namespace std;
void queue::enqueue()
{
	node* NN = new node();
	NN->setnext(nullptr);
	int p;
	float cgpa;
	string name;
	string degree;
	cout << "Enter the Priority of Data: \n";
	cin >> p;
	NN->set(p);
	cin.ignore();
	cout << "Enter your Name: \n";
	getline(cin, name);
	NN->setname(name);
	cout << "Enter your Degree Program: \n";
	getline(cin, degree);
	NN->setdegree(degree);
	cout << "Enter your CGPA: \n";
	cin >> cgpa;
	NN->setCgpa(cgpa);
	cout << "**---Information---**" << endl;
	cout << "Priority --> " << p << endl;
	cout << "Name --> "<< name << endl;
	cout << "Degree --> "<< degree << endl;
	cout << "CGPA --> "<<cgpa << endl;
	cout << endl;
	length++;

	if (front == nullptr)
	{
		NN->setnext(front);
		front = NN;
	}
	else if (NN->get() < front->get())
	{
		NN->setnext(front);
		front = NN;
	}
	else
	{
		node* temp = front;
		while (temp->getnext() != nullptr && temp->getnext()->get() <= NN->get())
		{
			temp = temp->getnext();
		}
		NN->setnext(temp->getnext());
		temp->setnext(NN);
	}
	/*if (front == nullptr)
	{
		front = NN;
		rear = NN;
	}
	else
	{
		rear->setnext(NN);
		rear = NN;
		//length++;
	}*/
}
void queue::dequeue()
{
	if (isEmpty()==true)
	{
		cout << "--> Queue is Empty! <--" << endl;
		cout << " --> Enter Records to Dequeue! <--" << endl;
		cout << "..____________________________________________________________.." << endl;
	}
	else
	{
	node* temp;
	temp = front;
	front = front->getnext();
	cout << temp->getname() << " has been dequeued!" << endl;
	cout << "..____________________________________________________________.." << endl;
	delete temp;
	length--;
    }
}
void queue::Front()
{
	if (isEmpty() == true)
	{
		cout << "--> Queue is Empty! <--" << endl;
		cout << "--> Enter The Record First! <--" << endl;
	}
	else
	{
		cout << "Priority of Front Element: " << front->get() << endl;
		cout << "Name of Front Element: " << front->getname() << endl;
		cout << "Degree of Front Element: " << front->getdegree() << endl;
		cout << "CGPA of Front Element: " << front->getCgpa() << endl;
		cout << endl;
	}
}
void queue::exit()
{
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout << "*****ALLAH HAFIZ!*****" << endl;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
}
bool queue::isEmpty()
{
	if (front == nullptr)
	{
		return true;
		//cout << "Queue is Empty! " << endl;
	}
}
void queue::Size()
{
	if (isEmpty() == true)
	{
		cout << "--> Queue is Empty! <--" << endl;
		cout << "--> Enter Data First! <--" << endl;
	}
	else
	{
		cout <<"---> "<< length << " is the size of Queue" << endl;
    }
}
void queue::display()
{
	node* temp;
	temp = front;
	int v = 1;
	if (isEmpty() == true)
	{
		cout << "--> Queue is Empty! <--" << endl;
		cout << "--> No Data to Display <--!" << endl;
	}
	while(temp!= nullptr)
	{
		cout << "Record at " << v << " is: " << endl;
		cout << "1) Name: " << temp->getname() << endl;
		cout << "2) Degree: " << temp->getdegree() << endl;
		cout << "3) CGPA: " << temp->getCgpa() << endl;
		cout << "4) Priority: " << temp->get() << endl;
		cout << endl;
		temp = temp->getnext();
		v++;
	}
}
void queue::find()
{
	if (isEmpty() == true)
	{
		cout << "--> Empty Queue! <--" << endl;
		cout << "--> Enter Data First to Find <--" << endl;
	}
	else
	{
		node* temp;
		temp = front;
		int ch = 0;
		string a;
		cin.ignore();
		cout << "Enter The Name You Want To Find: " << endl;
		getline(cin, a);
		while (temp != nullptr)
		{
			//cout << "ghghghh" << endl;
			if ((temp->getname()) == a)
			{
				cout << "--> Data Found: " << a << " <--" << endl;
				cout <<"--> Degree: "<<temp->getdegree()<<" <--" << endl;
				cout <<"--> CGPA: "<<temp->getCgpa()<<" <--" << endl;
				cout << "--> Priority: " << temp->get()<<" <--" << endl;
				cout << endl;
				ch = 1;
				break;
			}
			temp = temp->getnext();
		}
		if(ch==0)
		{
			cout << "--> Entered Data not found!! <--" << endl;
			cout << "..____________________________________________________________.." << endl;
		}
	}
}