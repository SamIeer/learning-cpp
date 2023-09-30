// Destructors: A destructor is a special member function in a C++ 
// class that is used to clean up resources or perform any necessary 
// cleanup when an object of the class is destroyed or goes out of scope
#include <iostream>
using namespace std;
class A{
    public:
    int x,y;
     A(){
        cout<<"A class constructure"<<endl;
     }
     ~A(){
        cout<<"A destructor called "<<endl;
     }
     void hello(){
        cout<<"hello from A"<<endl;
     }
     int hell(int x,int y){
        cout<<x+y<<endl;
     }
     
};
void fun(){
    A obj;
}

int main(){
    A a;
    a.hello();
    a.hell(2,4);
    cout<<"start now"<<endl;
    fun();
    cout<<"what happened here"<<endl;
    return 0;

}