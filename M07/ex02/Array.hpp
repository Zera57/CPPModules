#ifndef ARRAY
# define ARRAY

#include <iostream>

template <typename T>
class Array {
	private:
		unsigned int	_size;
		T				*_a;
	public:
		Array() { _size = 0, _a = nullptr; }
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
		class OutOfRangeExeption : public std::exception {
			virtual const char* what() const throw() {
				return "OutOfRangeExeption";
			}
		};
		T&	operator[](unsigned int i) {
			if (i >= _size)
				throw OutOfRangeExeption();
			return _a[i];
		}
		unsigned int	size() {
			return _size;
		}

};

#endif