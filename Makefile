CC = g++
FLAGS = -std=c++14 -Wall

all: hw12

hw10: queue.o hw12.cpp
	$(CC) $(FLAGS) hw12.cpp -o hw12 queue.o

queue.o: queue.hpp
	$(CC) $(FLAGS) -c queue.hpp

clean:
	rm hw12 *.o

tar:
	tar cf hw12.tar hw12.scr Makefile hw12.cpp queue.hpp
