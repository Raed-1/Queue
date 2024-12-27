#include<iostream>
#include"queue.h"

using namespace std;




int main()
{
	queue<int> queue(10);

	queue.equeue(10);
	queue.equeue(20);
	queue.equeue(30);
	queue.equeue(40);
	queue.equeue(50);

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