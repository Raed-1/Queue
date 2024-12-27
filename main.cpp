#include<iostream>
#include"queue.h"

using namespace std;




int main()
{
	queue<string> queue(10);

	queue.equeue("C++");
	queue.equeue("Python");
	queue.equeue("Java");
	queue.equeue("C");
	queue.equeue("HTML");

	queue.display();

	queue.dqueue();

	//After Removing 
	cout << "After Removing \n";
	queue.display();

	cout << "Front : "<< queue.front() << "\n";
	cout << "Back : "<< queue.back() << "\n";
	cout << "Max Size : "<< queue.maxSize() << "\n";
	cout << "Length  : " << queue.length() << "\n";
	return 0;
}