#include<iostream>
#include<stdlib.h>
using namespace std;
//pointer:- saves address of variable
// *:- dereferencing operator
// &:- stores address operator(referencing operator)
int main(){
system("cls");
int a =6;
int* b=&a;
cout <<"Address of a ="<<b<<endl;
cout <<"Address of a ="<<&a<<endl;
// &a is same as b
cout <<"value at Address b ="<<*b<<endl;

//Pointer to Pointer
int** c;
c=&b;
cout<<"address of b(at c) ="<<c<<endl;
cout<<"value at address(value at c)="<<**c<<endl;
return 0;
}