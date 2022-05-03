#ifndef ITEM_H
#define ITEM_H

#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector> 
#include <sstream>

using namespace std;

class Item {
    private:
        // array
        vector<int> vals; 
        int size;

    public:
        Item(){}
        void print(); 
        // const double getAVG(); 
        Item(string);
        friend bool operator<(const Item& i2, const Item& i); 
        friend bool operator<=(const Item& i2, const Item& i); 
        friend bool operator>=(const Item& i2, const Item& i); 
        friend bool operator>(const Item& i2, const Item& i); 
};

#endif