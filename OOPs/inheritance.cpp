//In C++, inheritance is a fundamental feature of object-oriented programming (OOP) that 
// allows you to create new classes (derived or child classes) based on existing classes (base or parent classes).
#include <iostream>
using namespace std;

class Parent{
      protected:
         int x;
      public:
         Parent(){
            x=0;
            cout<<"parent default constructur :"<<endl;
         }
         Parent(int i){
            x=i;
            cout<<"parent parameter constructure called"<<endl;
         }
        
};
class Child: private Parent{
    private:
       int m;
    public:
       Child(){
        m=0;
        cout<<"child default constructur :"<<endl;
       }
       Child(int a,int b):Parent(b){
        m=a;
        cout<<"child parameterized constructur"<<endl;
       }

       void printval(void){
        cout<<"m"<<m<<"& x:"<<Parent::x<<endl;
       }
};

int main(){
    Child b(2,7);
    b.printval();
}


// // CONCPET OF CONTAINING DIFFERENCE IN #IS A AND #HAS A
class A{
    private:
      int a;
    public:
      int b;
};

class B{  //CLASS B HAS A OBJ OF CLASS A
    private:
       int c;
    public:
       int d:
    A obj;
};


// CONCEPT OF POINTERS AND FUNCTION OVERLOADING
class Base{
    private:
      int a;
    public:
      int x,y;
    Base(){
        x=0;y=0;}
    int setvalues(int b,int c){
      x=b;
      y=c;
      cout<<"base class default"<<endl;
    }
};

class Derived: public Base{
      private:
         int d;
      public:
         int u,v;
         Derived(void){
            u=0;
            v=0;
         }
        int setvalues(int e,int f){
            u=e;
            v=f;
            cout<<"derived class"<<endl;
        }
        void printvals()
        {cout<<"x is ;"<<x<<" y is ;"<<" u is ;"<<u<<" v is ;"<<v<<endl;}
};

int main(){
    Derived d;
    d.setvalues(4,6);  //function overriding in class derived class 

    Derived *k;         //accessing the class method through pointers
    Derived e;
    k=&e;
    k->setvalues(4,5);
    k->printvals();
    cout<<k->x;
    cout<<k->v;

    Derived *i;   //not possible 
    Base e;
    i=&e;

    Base *s;         //we can only access base class not the derived class
    Derived d;
    s=&d;
    s->setvalues(3,5);
    return 0;
}
