#pragma once
#include<iostream>


template<class type>
struct Node
{
	type data;
	int priority;
	Node<type>* next;
	Node(const type& _data, const int _priority) :data(_data), priority(_priority), next(nullptr) {}
};


template<class type>
//Priority Queue using linked list 
class queue
{
private:
	

	Node<type>* front;

	//Helper Functions

	bool isEmpty()const
	{
		return (!front);
	}

public:
	queue(): front(nullptr){}
	
	~queue()
	{
		
		while (front)
		{
			Node<type>* temp = front;

			front = front->next;
			delete temp;
		}
	}

	void equeue(const type& value,int _priority)
	{
		Node<type>* newNode = new Node<type>(value, _priority);

		if (!front || front->priority < _priority)
		{
			newNode->next = front;
			front = newNode;
		}
		else
		{
			Node<type>* temp = front;
			while (temp->next && temp->next->priority >= _priority)
			{
				temp = temp->next;
			}
			newNode->next = temp->next;
			temp->next = newNode;
		}
	}

	void dqueue()
	{
		if (isEmpty())
		{
			std::cout << "The Queue is Empty ! \n";
			return;
		}
		else
		{
			Node<type>* temp = front;

			front = front->next;

			delete temp;

			
		}

	}

	type frontt()const
	{
		if (isEmpty())
		{
			std::cout << "Erorr The Queue is Empty ! \n";
			
		}
		return front->data;
	}

	type back()const
	{
		if (isEmpty())
		{
			std::cout << "Erorr The Queue is Empty ! \n";
			
			
		}

		Node<type>* current = front;
		while (current && current->next->next)
		{
			current = current->next;
		}
		return current->data;
	}

	

	size_t size()const
	{
		size_t num = 0;
		Node<type>* temp = front;

		while (temp)
		{
			num++;
			temp = temp->next;
		}
		return num;
	}

	void display()const
	{
		Node<type>* temp = front;

		std::cout << "The Elements : \n ";
		while (temp)
		{
			std::cout << temp->data << " ";
			temp = temp->next;
		}
		std::cout << "\n";
	}
};

