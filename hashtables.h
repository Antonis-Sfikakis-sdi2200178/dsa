#ifndef HASHTABLES_H
#define HASHTABLES_H
#include <iostream>
using namespace std ;   
using std::string;
#include <cstdlib>
class  hash
{
    private:        
        static const int  tablesize=10;//static const means that we can define and use inside the class 
        struct item{ //list
            string name ; 
            string drink ;
            item *next ;
        } ; 
        item * hashtable[tablesize] ; //hash is array with list pointers 
    

    public:
        hash();
        int Hash(string key); 
        void AddItem(string name , string drink) ; 
        int NumberOfItems(int index) ; 
        void PrintTable() ; 
};

#endif
