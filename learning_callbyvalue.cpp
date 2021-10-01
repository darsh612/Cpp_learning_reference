#include<iostream>
using namespace std;
void swap(int a, int b){                    //This function will not work as only formal parameters take the copy of actual parameters 
    int temp;                               // and don't make any changes to actual parameters
    temp=a;                                 
    a=b;
    b=temp;
}
void swapPointer(int &a, int &b){         // This method changes value using the concept of reference variables.           
    int temp;                             // suppose int x =40;
    temp=a;                               // int & y =x
    a=b;                                  // here the y=x, y refers to variable x and not its copy
    b=temp;
}
int main(){
int a = 4;
int b = 5;
cout<<"Value of a is "<<a<<" and Value of b is "<<b<<endl;
swap(a,b);
cout<<"Value of a is "<<a<<" and Value of b is "<<b<<endl;
swapPointer(a,b);
cout<<"Value of a is "<<a<<" and Value of b is "<<b<<endl;
return 0;
}