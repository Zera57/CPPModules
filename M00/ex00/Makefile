CXX		  := clang++
CXX_FLAGS := -Wall -Wextra -Werror -std=c++98

EXECUTABLE	:= megaphone

SRC := megaphone.cpp

all: $(EXECUTABLE)

run: clean all
	./$(EXECUTABLE)

$(EXECUTABLE): $(SRC)
	$(CXX) $(CXX_FLAGS) $^ -o $@

clean:
	-rm -r $(EXECUTABLE)