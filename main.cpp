using namespace std; 
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <time.h>
#include <array>
#include "item.h"
#include "Node.h"
#include "BST.h"

int main(int argc, char *argv[]){
    string line;
    BST<int> bst; 
    BST<int> bstR; 
    ifstream file(argv[1]);
    if (file.is_open()){
        while(getline(file, line))
        {
            time_t now = time(nullptr); //Init time variable
            time_t milliTime = now * 1000; //Convert to milliseconds

            bst.insert(stoi(line));

            time_t later = time(nullptr); //Init later variable
            later = later * 1000; //Convert to milliseconds
            now = later - now; //Get the difference between the times
            cout << "Iterative Runtime: " << now << endl; //Print the difference

            now = time(nullptr); //Reset the time varaible
            bstR.insertRecursively(stoi(line));
            later = time(nullptr);

            now = later - now;
            cout << "Recursive Runtime: " << now << endl; //Output the difference
        }
    }
    file.close();
    bst.print();
    //  cout << bst.findRecursively(27);
    //  bstR.print();
}