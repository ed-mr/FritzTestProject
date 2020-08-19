all: main

main.o:	src/main.cc
	g++ -c src/main.cc

main:	main.o
	g++ -o main main.o

test:
	./main
