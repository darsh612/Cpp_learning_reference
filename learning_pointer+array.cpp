#include<iostream>
#include<stdlib.h>
using namespace std;
//Pointer arithmatic
// address(new)=address(old)+(i*size of data type) 
//    (p+i)    =    p       +  i*size   
int main(){
system("cls");    
int marks[] ={23,55,36,78,95,12,67};
int* p;
p=marks; // address of marks referenced to p
cout<<"Value of marks[0]="<<*p<<endl;
cout<<"Value of marks[1]="<<*(p+1)<<endl;

cout<<*(p++)<<endl;
cout<<*p<<endl;
cout<<*(++p)<<endl;

return 0;
}
