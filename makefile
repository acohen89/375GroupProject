data: main.o BST.o 
	g++ -g -O0 -o data main.o BST.o

main.o: main.cpp
	g++ -g -O0 -c main.cpp

BST.o: BST.cpp
	g++ -g -O0 -c BST.cpp

clean: 
	rm -f core *.o 
	rm data.exe