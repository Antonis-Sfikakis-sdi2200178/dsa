#include <iostream>
using namespace std ;


using std:: string ; 
#include <map>



int main(){
    string test ="Hello world my name is antonis ! hahahahha" ; 

    map <char , int > freq ; 
    for( int i =0 ; i < test.length() ; ++i) {
        char letter = test[i] ; 
        if(freq.find(letter) == freq.end()){ //check if the letter exist ,if not  we create a pair
            freq[letter] =0; 
        }
        freq[letter]++; 

    }
    for(map <char , int > :: iterator itr = freq.begin() ; itr!= freq.end() ; ++itr){
        cout << itr->second << ":"<< itr->first << endl ;
    }

}