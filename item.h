#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector> 

using namespace std;


template<class T>
class Item {
    private:
        // array
        vector<T> object;
        int size;
        int sortVal;



    public:

        Item(){
        }

/*
        Item(vector<T> obj){
            object = obj;
        }
*/
        void setVector(T tmp){
            object.push_back(tmp);
        }

       // void printItem();













};