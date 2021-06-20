#include "span.hpp"

using std::cout;
using std::endl;

int main() {
    srand(time(NULL));
    std::cout << "-----" << std::endl;
    std::cout << "TEST1" << std::endl;
    std::cout << "-----" << std::endl;
    {
        Span sp(1000);
        for (int i = 0; i < 1000; ++i) {
            sp.addNumber(i + rand() % 10);
        }
        cout << "short: " << sp.shortestSpan() << endl;
        cout << "longest: " << sp.longestSpan() << endl;
    }
    std::cout << "-----" << std::endl;
    std::cout << "TEST2" << std::endl;
    std::cout << "-----" << std::endl;
    {
        Span sp(5);
        for (int i = 0; i < 5; ++i) {
            sp.addNumber(i + rand() % 10);
            cout << sp[i] << " ";
        }
        cout << endl;
        cout << "short: " << sp.shortestSpan() << endl;
        cout << "longest: " << sp.longestSpan() << endl;
    }
    std::cout << "-------" << std::endl;
    std::cout << "Subject" << std::endl;
    std::cout << "-------" << std::endl;
    {
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        for (size_t i = 0; i < sp.count(); i++)
        {
            std::cout << sp[i] << " ";
        }
        
        cout << endl << sp.shortestSpan() << endl;
        cout << sp.longestSpan() << endl;
    }
    return 0;
}
