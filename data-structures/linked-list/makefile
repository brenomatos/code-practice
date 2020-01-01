all: list


list: main.cpp list.cpp
			g++ -std=c++11 -g main.cpp list.cpp -o list

clean:
			rm list

run:
	./list

leak:
	valgrind --leak-check=yes ./list
