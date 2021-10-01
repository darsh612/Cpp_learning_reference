#include<iostream>
using namespace std;
// Structure is a user defined data type which stores different original datatype
typedef struct employee
{
    int empId;
    char favChar;
    int salary;
}ep;

// Union is user defined datatype which can be used to define different datatype but declares only one particular datatype
union money{
    int pound;
    char car;
    float dollar;
};

int main(){
struct employee darsh;
ep harsh;  // this format is also completely valid
union money m1;
m1.pound=34;
m1.car ='a';
enum m2{ monday, tuesday, wednesday, thursday, friday};
m2 p1 =tuesday;
cout<<monday<<endl;
cout<<p1<<endl;
darsh.empId=15;
darsh.favChar='d';
darsh.salary=120000;
cout<<"Employee Id of Darsh is "<<darsh.empId<<endl;
cout<<"Favorite character of Darsh is "<<darsh.favChar<<endl;
cout<<"m1.pound is "<<m1.pound<<endl; // This doesn't work as union can take only one particular value at point.
                                      //As m1.car is declared later it will take value of m1.car. Here this it displays garbage value
cout<<"m1.car is "<<m1.car<<endl;
return 0;
}