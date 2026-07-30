#include <iostream>
using namespace std;
int main() {

    int numbers[] = {10 , 15 , 3 , -4 , 12 , -10 };
    int size = 6 ;

    int smallest = INT_MAX;            //for largest. int latgest = INT_MIN;
    
    for (int i=0 ; i<size ; i++) {

           if(numbers[i] < smallest){  // or min = ( number[i] , smallest )

           smallest = numbers[i];
           
           }
           
        

    }

      cout << "smallest number = " << smallest <<endl;
      
 
return 0 ;
}