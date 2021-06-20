#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>


class Span {
public:
    Span(unsigned int size);
    Span(const Span& span);
    ~Span();
    void operator=(const Span& span);

    int operator[](const int index);

    void addNumber(const int n);

    int shortestSpan();

    int longestSpan();

    unsigned int size();

    unsigned int count();
private:
    unsigned int  _size;
    unsigned int  _count;
    std::vector<int>   _nums;

    class ExceptionSpan : public std::exception {
    public:
        ExceptionSpan(const char* error);
        virtual const char* what() const throw();
    private:
        const char* _error;
    };
};

#endif
