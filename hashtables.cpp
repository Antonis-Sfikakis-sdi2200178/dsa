#include <iostream>
#include <cstdlib>
using std::string
using namespace std ;   


#include "hashtable.h"

hash:: hash(){
   
}

int hash:: Hash(string key ){
    int hash=0;
    int index = key.length() ;
    for(int i=0 ; i < key.length() ; ++i)//adding up the the key values 
    //we are going to mod with the table size to find the spot of the key
      hash+= key.at(i) ; 
    index=hash % tablesize ; 
    return index ;  
}  