CC = g++
FLAGS = -std=c++14 -Wall

all: hw13

hw10: queue.o hw13.cpp
	$(CC) $(FLAGS) hw13.cpp -o hw13 queue.o

queue.o: queue.hpp
	$(CC) $(FLAGS) -c queue.hpp

clean:
	rm hw13 *.o

tar:
	tar cf hw13p2.tar hw13p2.scr Makefile hw13p2.cpp queuep2.hpp
