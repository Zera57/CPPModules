#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP

#include <iostream>

using std::find;

class ItemNotFoundException : public std::exception {
public:
    virtual const char* what() const throw() {
        return "Item Not Found";
    }
};


template<typename T>
int easyfind(T& array, int item) {
    typename T::const_iterator iterator = find(array.begin(), array.end(), item);
    if (iterator == array.end())
        throw ItemNotFoundException();
    return *iterator;
}

#endif
