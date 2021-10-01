#include<iostream>
using namespace std;

int volume(double r,int h){
    return(3.14*r*r*h);
}
int volume(double a){
    return(a*a*a);
}
int volume(double l,double b, double h){
    return(l*b*h);
}
int main(){

cout<<"Volume of cylinder with radius 4 and height 5 is "<<volume(4,5)<<endl;
cout<<"Volume of cube with side 6 is "<<volume(6)<<endl;
cout<<"Volume of cuboid with length 4, breadth 5 and height 6 is "<<volume(4,5,6)<<endl;
return 0;
}