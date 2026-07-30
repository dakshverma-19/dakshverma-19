#include <iostream> 
#include <vector>
using namespace std;
 int main(){



  
       vector <int> vec= {  1 , 2, 3 ,4, 5, 6};
      vec.push_back(10);

      vec.push_back(20);

      vec.push_back(30); // add last element

      vec.pop_back();   //remove last element 

        cout<<"size = "<< vec.size() << endl;
        
        cout << vec.front() <<endl ;  //print first element 

        cout << vec.back () << endl;  //print last element 


        for (int name  : vec){    //to print given array
         cout << name << endl;
        }
      
      }
   
    