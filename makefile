data: main.o Node.o item.o BST.o Person.o
	g++ -g -O0 -o data main.o Node.o item.o BST.o Person.o

main.o: main.cpp
	g++ -g -O0 -c main.cpp

Node.o: Node.cpp
	g++ -g -O0 -c Node.cpp

Item.o: item.cpp
	g++ -g -O0 -c item.cpp

BST.o: BST.cpp
	g++ -g -O0 -c BST.cpp

Person.o: Person.cpp
	g++ -g -O0 -c Person.cpp

clean: 
	rm -f core *.o 
	rm data