#include "iostream"

struct Data {
	std::string *str1;
	int i;
	std::string *str2;
};

void * serialize(void) {
	srand(time(0));
	Data *data = new Data();
	std::string randStr[] = {
		"Random string 1",
		"Random string 2",
		"Random string 3",
		"Random string 4",
		"Random string 5"
	};
	data->str1 = new std::string(randStr[rand() % 5]);
	data->i = rand() % 100 + 1;
	data->str2 = new std::string(randStr[rand() % 5]);
	return (data);
}
Data * deserialize(void * raw) {
	try {
		return (reinterpret_cast<Data*>(raw));
	}
	catch (std::exception e) {
		std::cerr << e.what() << std::endl;
	}
	return (nullptr);
}

int main() {
	std::cout << *deserialize(serialize())->str1;
}