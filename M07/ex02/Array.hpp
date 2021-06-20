#ifndef ARRAY
# define ARRAY

#include <iostream>

template <typename T>
class Array {
	private:
		unsigned int	_size;
		T				*_a;
	public:
		Array() { _size = 0, _a = NULL; }
		Array(unsigned int size) {
			T *temp =  new T();
			_size = size;
			_a = new T[size];
			for (size_t i = 0; i < size; i++)
			{
				_a[i] = *temp;
			}
			delete (temp);
		}
		Array(Array const & a) {
			this = a;
		}
		~Array() {
			if (_a)
				delete (_a);
		}
		void operator=(Array const & op) {
			_size = op._size;
			_a = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_a[i] = op._a[i];
		}
		class OutOfRangeException : public std::exception {
			virtual const char* what() const throw() {
				return "OutOfRangeException";
			}
		};
		T&	operator[](unsigned int i) {
			if (i >= _size)
				throw OutOfRangeException();
			return _a[i];
		}
		unsigned int	size() {
			return _size;
		}

};

#endif