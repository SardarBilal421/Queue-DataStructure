#include <iostream>
#include <string>
#include "queue.h"
#include "node.h"
using namespace std;
void main()
{
	queue p;
	int op;
	cout << "Choose Your Move \n";
	do
	{
		cout << "1. --> Enqueue: " << endl;
		cout << "2. --> Dequeue: " << endl;
		cout << "3. --> Front: " << endl;
		cout << "4. --> Size: " << endl;
		cout << "5. --> Find:" << endl;
		cout << "6. --> Display: " << endl;
		cout << "7. --> Exit: " << endl;
		cin >> op;
		switch (op)
		{
		case 1:  cout << "**--> Enqueue Operation <--**" << endl;
			p.enqueue();
			break;
		case 2:  cout << "**--> Dequeue Operation <--**" << endl;
			p.dequeue();
			break;
		case 3:  cout << "**--> Front Elements <--**" << endl;
			p.Front();
			break;
		case 4:  cout << "**--> Size of Queue <--**" << endl;
			p.Size();
			break;
		case 5:  cout << "**--> Find Operation <--**" << endl;
			p.find();
			break;
		case 6:  cout << "**--> Display Records <--**" << endl;
			p.display();
			break;
		case 7:  cout << "**--> Exiting Queue Operations <--**" << endl;
			p.exit();
			break;
		default:
			cout << "WARNING!!!  ***--Invalid Data Selection!--***" << endl;
			cout << "_____________________________________________" << endl;
			cout << "_____________________________________________" << endl;
		}
	} while (op != 7);
}