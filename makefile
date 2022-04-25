data: main.o 
	g++ -g -O0 -o data main.o

main.o: main.cpp
	g++ -g -O0 -c main.cpp



clean: 
	rm -f core *.o 
	rm data.exe