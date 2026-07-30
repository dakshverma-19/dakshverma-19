#include <iostream>
using namespace std;
int main (){
int n;

cout<<"enter your number = " ;
cin>>n;
string r;
 
while(n>0){
   int d=n%2;  
   
   r=r+to_string(d);
   n=n/2;
}
reverse(r.begin(),r.end());
cout<<r;
cout<<endl;
 return 0;
}