data: main.o BST.o item.o
	g++ -g -O0 -o data main.o BST.o item.o

main.o: main.cpp
	g++ -g -O0 -c main.cpp

BST.o: BST.cpp
	g++ -g -O0 -c BST.cpp

Item.o: item.cpp
	g++ -g -O0 -c item.cpp

clean: 
	rm -f core *.o 
	rm data