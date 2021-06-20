#include "span.hpp"

Span::Span(unsigned int size) : _size(size), _count(0) {
    for (unsigned int i = 0; i < this->_size; ++i) {
        this->_nums.push_back(0);
    }
}

Span::Span(const Span &span) {
    *this = span;
}

Span::~Span() {

}

void Span::operator=(const Span &span) {
    this->_size = span._size;
    this->_count = span._count;
    this->_nums = span._nums;
}

void Span::addNumber(const int n) {
    if (this->_count >= this->_size)
        throw ExceptionSpan("Limit Of Array");
    this->_nums[this->_count] = n;
    ++this->_count;
}

int Span::shortestSpan() {
    if (this->_nums.size() == 0 || this->_nums.size() == 1)
        throw ExceptionSpan("Not Enough Elements In The Array");
    int result = INT_MAX - 1;
    std::vector<int>::const_iterator first = this->_nums.begin();
    while (first < this->_nums.end()) {
        std::vector<int>::const_iterator iterator = first + 1;
        while (iterator < this->_nums.end()) {
            if (result > abs(*first - *iterator))
            {
                result = abs(*first - *iterator);
            }
            iterator++;
        }
        first++;
    }



    // result = abs(*next - *first);
    // while (iterator != this->_nums.end()) {
    //     first = iterator;
    //     ++iterator;
    //     next = iterator;
    //     if (next == this->_nums.end())
    //         return result;
    //     int tmp = abs(*first - *next);
    //     if (tmp < result)
    //         result = tmp;
    // }
    return (result);
}

int Span::longestSpan() {
    if (this->_nums.size() == 0 || this->_nums.size() == 1)
        throw ExceptionSpan("Not Enough Elements In TheArray");
    int min = *std::min_element(this->_nums.begin(), this->_nums.end());
    int max = *std::max_element(this->_nums.begin(), this->_nums.end());
    return abs(max - min);
}

unsigned int Span::size() {
    return _size;
}

unsigned int Span::count() {
    return _count;
}

int Span::operator[](const int index) {
    if (index < 0 || (const unsigned int)index > this->_size)
        throw ExceptionSpan("Going Out Of The Array");
    return this->_nums[index];
}

Span::ExceptionSpan::ExceptionSpan(const char *error) : _error(error) {

}

const char *Span::ExceptionSpan::what() const throw() {
    return this->_error;
}
