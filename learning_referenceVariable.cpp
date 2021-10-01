#include<iostream>
using namespace std;

int main(){
int x =40;       // y refers directly to variable x and not its copy
int & y =x;
cout<<x<<endl;
cout<<y<<endl;
return 0;
}