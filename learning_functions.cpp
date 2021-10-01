#include<iostream>
using namespace std;
int sum(int a, int b){
    // a and b are formal parameters
    int c =a + b;
    return c;
}
int main(){
int num1;
int num2;
//num1 and num2 are actual parameters
cout<<"Enter num1 ="<<endl;
cin>> num1;
cout<<"Enter num2 ="<<endl;
cin>>num2;
cout<<"Sum of 2 numbers is ="<<sum(num1,num2)<<endl;
return 0;
}