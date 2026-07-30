#include <iostream>
using namespace std;
int main (){
 
 cout << sizeof  ( int ) << endl ;      // 4 byte = 32 bits

 cout << sizeof ( long int ) << endl ;     // 8 bytes = 48 bits 

 cout <<sizeof ( short int )  << endl ;     // 2 byte = 12 bits 

 cout << sizeof (long long int ) << endl ;    // 8 byte = 48 bits 


unsigned int k = 10 ;      // only store positive values 
 
cout << k << endl;


signed int j = -15 ;      // store both positive and negative values

 cout << j << endl; 


 return 0;
}