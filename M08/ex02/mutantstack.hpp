#ifndef EX02_MUTANTSTACK_HЗЗ
#define EX02_MUTANTSTACK_HЗЗ

#include <iostream>
#include <stack>
#include <vector>

template<typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack() : std::stack<T>() { }
        MutantStack(MutantStack& mutantStack) : std::stack<T>(mutantStack) { }
        virtual ~MutantStack() { }
        MutantStack& operator=(MutantStack& mutantStack) {
            *this = mutantStack;
            return *this;
        }

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin() {
            return this->c.begin();
        }

        iterator end() {
            return this->c.end();
        }
};

#endif
