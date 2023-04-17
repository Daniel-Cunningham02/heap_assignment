
CC = c++ -g

CFLAGS = -c -Wall -Wextra

heap: main.o heap.o
	$(CC) -o heap main.o heap.o

heap.o: heap.h heap.cpp
	$(CC) $(CFLAGS) heap.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	$(RM) heap *.o
