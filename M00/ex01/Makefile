CXX		  := clang++
CXX_FLAGS := -Wall -Wextra -std=c++98

EXECUTABLE	:= phonebook

SRC :=	main.cpp \
		contact.cpp

all: $(EXECUTABLE)

run: clean all
	./$(EXECUTABLE)

$(EXECUTABLE): $(SRC)
	$(CXX) $(CXX_FLAGS) $^ -o $@

clean:
	-rm -r $(EXECUTABLE)