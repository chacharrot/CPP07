#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>


template <typename T>
class Array {
private:
	T	*_ptr;
	int _len;
public:
	Array() : _ptr(NULL), _len(0) {}

	Array(int const num)
	{
		if (num < 1)
			throw OutOfArrayExeption();
		else
		{
			this->_ptr = new T[num];
			this->_len = num;
		}
	}

	Array(Array const &other) : _ptr(new T[other._len]), _len(other._len)
	{
		for (int i = 0; i < other._len; i++)
			this->_ptr[i] = other._ptr[i];
	}

	~Array()
	{
		if (this->_ptr)
			delete [] this->_ptr;
	}

	class OutOfArrayExeption: public std::exception
	{
		public:
			const char *what() const throw()
			{
				return "Out of array!";
			}
	};

	Array & operator = (Array const &other)
	{
		if (this->_ptr)
			delete [] this->_ptr;
		this->_ptr = new T[other._len];
		this->_len = other._len;
		for (int i = 0; i < other._len; i++)
			this->_ptr[i] = other._ptr[i];
		return *this;
	}

	T & operator [] (int const num)
	{
		if (num < 0 || num > this->_len - 1)
			throw OutOfArrayExeption();
		return _ptr[num];
	}

	int size()
	{
		return this->_len;
	}

	T* getArray()
	{
		return this->_ptr;
	}
};

#endif