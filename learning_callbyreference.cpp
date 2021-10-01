#include<iostream>
using namespace std;

void swap(int* a,int* b){          //This function works because the address of actual parameters is being changed instead of actual
    int temp =*a;                  //parameters
    *a=*b;
    *b=temp;
}

int main(){
int a = 4;
int b = 5;
cout<<"Value of a is "<<a<<" and Value of b is "<<b<<endl;
swap(&a,&b);
cout<<"Value of a is "<<a<<" and Value of b is "<<b<<endl;
return 0;
}