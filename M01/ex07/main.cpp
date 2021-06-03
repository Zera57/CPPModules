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
    if (argc < 4) {
        std::cout << "Invalid input" << std::endl;
        std::cout << "\tchange <old_word> <new_word> <file_list>";
    }

    std::fstream fs;
    std::fstream new_file;
    std::string str = argv[3];
    str += ".replace";
    new_file.open(str, std::ios::out);  

    std::string tmp;
    std::string oldw = argv[1];
    std::string neww = argv[2];

    for (int i = 3; i < argc; i++) {
        fs.open(argv[i] , std::ios::in);

        while (!fs.eof()) {
            getline(fs, tmp);
            replace(tmp, oldw, neww);
            new_file << tmp << std::endl;
        }
    }

    fs.close();
    return 0;   
}
