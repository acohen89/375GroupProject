#ifndef PERSON_H
#define PERSON_H

using namespace std; 
#include <string> 
#include <vector>
#include <sstream> 
class Person{
    private: 
        string name; 
        long id; 
        string gender; 
    public: 
        Person(string); 
        friend bool operator<(const Person& p2, const Person& p); 
        friend bool operator<=(const Person& p2, const Person& p); 
        friend bool operator>=(const Person& p2, const Person& p); 
        friend bool operator>(const Person& p2, const Person& p); 
        vector<string> stringToVector(string s){
            stringstream ss(s);
            string word;
            vector<string> stringVect; 
            while (ss >> word) {
                stringVect.push_back(word);
            }
            return stringVect;
        }   
};

#endif 