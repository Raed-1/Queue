#pragma once
#include<iostream>


template<class type>

//Circular Queue 
class queue
{
private:
	  size_t _front, _rear;
	type* _arr;
	size_t _capacity;

	//Helper Functions

	bool isFull()const
	{
		return ((_rear + 1) % _capacity == _front);
	}

	bool isEmpty()const
	{
		return (_front == _rear );
	}
public:
	queue(const size_t capacity) :_capacity(capacity), _front(0), _rear(0) { _arr = new type[_capacity]; }
	
	~queue()
	{
		delete[] _arr;
	}

	void equeue(const type& value)
	{
		if (isFull())
		{
			std::cout << "The Queue is Full ! \n";
			return;
		}else
		{ 
            _arr[_rear] = value;

			_rear = (_rear + 1) % _capacity;

			

		}
	}

	void dqueue()
	{
		if (isEmpty())
		{
			std::cout << "The Queue is Empty ! \n";
		}
		else
		{
			
			_front = (_front + 1) % _capacity;
			
		}

	}

	type front()const
	{
		if (isEmpty())
		{
			std::cout << "Erorr The Queue is Empty ! \n";
			
		}
		return _arr[_front];
	}

	type back()const
	{
		if (isEmpty())
		{
			std::cout << "Erorr The Queue is Empty ! \n";
			
			
		}
		return _arr[(_rear - 1 + _capacity) % _capacity];
	}

	int length()const
	{
		// (rear - front + capacity ) % capacity = number of Elements 
		return((_rear - _front + _capacity) % _capacity);
	}

	size_t maxSize()const
	{
		return _capacity;
	}

	void display()const
	{
		std::cout << "The Elements : ";
		for (int i = 0; i <= length() -1; i++)
		{
			std::cout << _arr[(_front + i) % _capacity] << " ";
		}
		std::cout << "\n";
	}
};

