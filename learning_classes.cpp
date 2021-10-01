#include<iostream>
using namespace std;

class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void getData(int a1,int b1,int c1);
    void setData(){
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
        cout<<"Value of c is "<<c<<endl;
        cout<<"Value of d is "<<d<<endl;
        cout<<"Value of e is "<<e<<endl;
    }
};
void employee::getData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
} 
int main(){
    employee darsh;
    darsh.a=78;
    darsh.d=29;
    darsh.e=34;
    darsh.getData(1,2,4);
    darsh.setData();      
return 0;
}