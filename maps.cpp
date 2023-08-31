#include <iostream>
using namespace std ;
#include <map>


int main() {
    map <char , int > mp{
        {'T', 7}
    } ;
    cout << mp['T'] << endl ; 
}