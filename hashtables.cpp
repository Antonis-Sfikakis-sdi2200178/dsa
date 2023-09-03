#include <iostream>
#include <cstdlib>
using std::string
using namespace std ;   


#include "hashtable.h"

hash:: hash(){
  for(int i =0; i < tablesize ; i++) {
    hashtable[i] = new item; 
    hashtable[i]->name ="empty" ; 
    hashtable[i]->drink="empty" ;
    hashtable[i]->next= NULL; 

  }
   
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


void hash ::AddItem(string name , string drink){
  int index=Hash(name) ; 
  if(hashtable[index]=="empty"){
    hashtable[index]->name=name ; //the position is empty 
    hashtable[index]->drink=drink;
  }else{
    item * ptr = hashtable[index] ;  // create new position
    item * n = new item ;
    n->name  = name ;
    n->drink = drink ; //go to the end of the list 
    n->next=NULL ;
    while(ptr->next!=NULL) ptr=ptr->next;
    ptr->next=n;  
  }
} 



int hash:: NumberOfItems(int index) {
  int count =0; 
  if(hashthash(index)->name=="empty") return 0;
  else{
    count++;
    item * ptr = hashtable[index] ; 
    while (ptr->next != NULL ) {
      count++;
      ptr = ptr -> next ; 
    }
     
  }
  return count ; 
}


void hash :: Printable() {
  int number 
  for(int i=0 ; i<tablesize ; ++i) {
    cout << i << ":" ;
     if(hashtable[i]->name=="empty") continue; 
     else{
        item* ptr = hashtable[i];
        while((ptr->next)!=NULL ){
          cout<<prt->name<<" "<<prt->drink<<endl;
          prt=ptr->next ;
        }
     }
  }
}
