using namespace std; 
#include <iostream>
#include <fstream>

int main(int argc, char *argv[]){
    string line;
    ifstream file(argv[1]);
     if (file.is_open()){
        while(getline(file, line)){
            cout << line << endl; 
        }
     }
     file.close();
}