#pragma once
#include<iostream>


template<class type>

//Simple Queue 
class queue
{
private:
	  int _front, _rear;
	type* _arr;
	size_t _capacity;

	//Helper Functions

	bool isFull()const
	{
		return (_rear  == _capacity - 1);
	}

	bool isEmpty()const
	{
		return (_front == -1 && _rear == -1 || _front > _rear);
	}
public:
	queue(const size_t capacity) :_capacity(capacity), _front(-1), _rear(-1) { _arr = new type[_capacity]; }
	
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
			if(_front = -1 && _rear == -1 )
			{
				_front++;
				_rear++;
				_arr[_rear] = value;
			}else
			{
				_arr[++_rear] = value;
			}
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
			_front++;

			//Reset the quere if all elements are dequeued 
			if (_front > _rear)
			{
				_front = _rear = -1;
			}
		}

	}

	type front()const
	{
		if (isEmpty())
		{
			std::cout << "Erorr The Queue is Empty ! \n";
			return -1;
		}
		return _arr[_front];
	}

	type back()const
	{
		if (isEmpty())
		{
			std::cout << "Erorr The Queue is Empty ! \n";
			return -1;
			
		}
		return _arr[_rear];
	}

	int length()const
	{
		return(_rear - _front) +1;
	}

	size_t maxSize()const
	{
		return _capacity;
	}

	void display()const
	{
		std::cout << "The Elements : ";
		for (int i = _front; i <= _rear ; i++)
		{
			std::cout << _arr[i] << " ";
		}
		std::cout << "\n";
	}
};

