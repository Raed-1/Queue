#include<iostream>
#include"queue.h"

using namespace std;




int main()
{
	queue<string> queue1;

	queue1.equeue("C++",1);
	queue1.equeue("Python",0);
	queue1.equeue("Java",-1);
	queue1.equeue("C",-2);
	queue1.equeue("HTML",-3);

	queue1.display();

	queue1.dqueue();

	//After Removing 
	cout << "\nAfter Removing \n";
	queue1.display();

	cout << "\nFront : "<< queue1.frontt() << "\n";
	cout << "\nBack : "<< queue1.back() << "\n";
	cout << "\nSize : "<< queue1.size() << "\n";
	
	return 0;
}