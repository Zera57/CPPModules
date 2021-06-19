#include "iostream"
#include "iomanip"

void checkValue(std::string const &value) {
	bool hasNum = false;
	bool hasAlpha = false;
	for (size_t i = 0; i < value.length(); i++)
	{
		if (isdigit(value[i]))
			hasNum = true;
		if (isalpha(value[i]))
			hasAlpha = true;
		if ((isalpha(value[i]) && hasNum) || (isdigit(value[i]) && hasAlpha))
			if (value.length() - 1 != i && value[i] != 'f')
				throw std::invalid_argument("invalid arg");
	}
}

void parseChar(std::string const & value) {
	try {
		std::cout << "char: ";
		checkValue(value);
		int number = std::stoi(value);
		if (number >= -128 && number <= 127) {
			if (isprint(number))
				std::cout << (char)number;
			else
				std::cout << "Non displayable";
		}
		else
			std::cout << "impossible";
	}
	catch (std::exception &e) {
		std::cout << "impossible";
	}
	std::cout << std::endl;
}

void parseInt(std::string const & value) {
	try {
		std::cout << "int: ";
		checkValue(value);
		int number = std::stoi(value);
		std::cout << number;
	}
	catch (std::exception &e) {
		std::cout << "impossible";
	}
	std::cout << std::endl;
}

void parseFloat(std::string const & value) {
	try {
		std::cout << "float: ";
		checkValue(value);
		float number = std::stof(value);
		std::cout << std::fixed << std::setprecision(1) << number << "f";
	}
	catch (std::exception &e) {
		std::cout << "impossible";
	}
	std::cout << std::endl;
}

void parseDouble(std::string const & value) {
	try {
		std::cout << "double: ";
		checkValue(value);
		double number = std::stod(value);
		std::cout << std::fixed << std::setprecision(1) << number;
	}
	catch (std::exception &e) {
		std::cout << "impossible";
	}
	std::cout << std::endl;
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	std::string value = argv[1];
	parseChar(value);
	parseInt(value);
	parseFloat(value);
	parseDouble(value);
	return 0;
}