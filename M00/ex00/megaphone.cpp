#include <iostream>

int     main(int arg, char **argc) {
    
    if (arg < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (size_t i = 1; argc[i]; i++)
        {
            for (size_t j = 0; argc[i][j]; j++)
                std::cout << (char)toupper(argc[i][j]);
        }
    }
    std::cout << std::endl;
    return 0;
}