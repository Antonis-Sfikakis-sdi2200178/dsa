#ifndef HASHTABLES_H

#define HASHTABLES_H



#include <iostream>
#include <cstdlib>
using std::string
using namespace std ; 

class  hash
{
    private:        
        static const int  tablesize=10;//static const means that we can define and use inside the class 
        struct item{ //list
            string name ; 
            string drink ;
            item *next ;
        }
        item * hashtable[tablesize] ; //hash is array with list pointers 
    

    public:
        hash();
        int Hash(string key); 
};

