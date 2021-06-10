#include <iostream>
#include <fstream>

bool replace(std::string& str, const std::string& from, const std::string& to) {
    size_t start_pos = str.find(from);
    if(start_pos == std::string::npos)
        return false;
    str.replace(start_pos, from.length(), to);
    return true;
}

int main(int argc, char **argv) {
    if (argc != 4 || ((std::string)argv[2]).length() == 0) {
        std::cout << "Invalid input" << std::endl;
        std::cout << "<old_word> <new_word> <file_list>" << std::endl;
        return -1;
    }

    std::fstream fs;
    fs.open(argv[1] , std::ios::in);
    if (fs.fail()) {
        std::cout << "Fail reading file" << std::endl;
        fs.close();
        return -1;
    }
    std::fstream new_file;
    new_file.open((std::string)argv[1] + ".replace", std::ios::out);  
    if (new_file.fail()) {
        std::cout << "Fail creating" << (std::string)argv[1] << "file" << std::endl;
        fs.close();
        new_file.close();
        return -1;
    }
    std::string tmp;
    std::string oldw = argv[2];
    std::string neww = argv[3];

    while (!fs.eof()) {
        getline(fs, tmp);
        replace(tmp, oldw, neww);
        new_file << tmp << std::endl;
    }

    fs.close();
    new_file.close();
    return 0;   
}
