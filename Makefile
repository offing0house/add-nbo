all: add-nbo

add-nbo: main.o
	g++ -o add-nbo main.o

main.o: main.cpp
	g++ -g -c -o main.o main.cpp

clean:
	rm -f add-nbo *.o
