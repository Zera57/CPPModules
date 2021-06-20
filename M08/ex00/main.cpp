#include "easyfind.hpp"
#include <vector>
#include <set>

int main() {
    {
        std::vector<int> vector;
        for (int i = 0; i < 5; i++) {
            vector.push_back(i + 2);
            std::cout << i + 2 << " ";
        }
        std::cout << std::endl;
        int search = 3;
        int num = easyfind(vector, search);
        std::cout << "found: " << num << std::endl;
    }
    {
        std::vector<int> vector;
        for (int i = 0; i < 5; i++) {
            vector.push_back(i + 5);
            std::cout << i + 5 << " ";
        }
        std::cout << std::endl;
        int search = 28;
        try {
            int num = easyfind(vector, search);
            std::cout << "found: " << num << std::endl;
        }
        catch (std::exception& exception) {
            std::cout << exception.what() << std::endl;
        }
    }
    {
        std::set<int> set;
        for (int i = 0; i < 5; i++) {
            set.insert(i + 5);
            std::cout << i + 5 << " ";
        }
        std::cout << std::endl;
        int search = 8;
        try {
            int num = easyfind(set, search);
            std::cout << "found: " << num << std::endl;
        }
        catch (std::exception& exception) {
            std::cout << exception.what() << std::endl;
        }
    }
    return 0;
}
