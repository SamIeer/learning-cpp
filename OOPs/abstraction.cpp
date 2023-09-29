// ABSTRACTION;abstraction in the context of classes refers to the act of hiding the
// implementation details of the user . this allows the useer to interact with the class without needing to know how it works
// VIRTUAL FUNCTIONS(run time polymorphism):
#include <iostream>
using namespace std;
class Base{
    private:
    string a;
    public:
     int x,y;
     virtual void outpt(){
        cout<<"base classs"<<endl;}
};

class Derived:public Base{
    public:
      int c,d;
      Derived(){
        c=0;d=0;}
      void outpt(){
        cout<<"Derived class"<<endl;
      }
};

class Child:public Base{
    public:
      int u,v;
      void outpt(){
        cout<<"class A"<<endl;
      }
};

int main(){
    Derived d;
    Base *e=&d;
    e->outpt();
    Child a;
    e=&a;
    e->outpt();
}


// PURE VIRTUal entity
class Base{
    public:
     virtual void outpt() = 0; //PURE VIRTUAL entity OR INTERFERENCE CLASS
};

class Child:public Base{
    public:
      int u,v;
      void outpt(){
        cout<<"class A"<<endl;
      }
};

int main(){
    Child a;
    Base *e=&a;
    e->outpt();
}


// friend function:i  this is what i learn from the friend function that we can access the private specifier of the
// base class by appointing the derived class inside the base class using friend keyword and in derived class base class should 
// treated as a object and this creat a has a relationship between the classes
class B;
class A{
    private:
     int gamma;
    public:
      int x,y;
      friend B;
};
 class B{    //HAS A RELATIONSHIP
   public:
     A e;
   void checkingval(){
    cout<<"derived class"<<endl;
    e.x=0;
    e.y=1;
    e.gamma=11;
    cout<<e.x<<" "<<e.y<<" "<<e.gamma<<endl;
   } 
   };

   int main(){
    B b;
    b.checkingval();
   }


// STATIC MEMBER AND FUNCTION IN CLASS;
// Static members are class-level variables or attributes that are shared among all instances (objects) of the class. 
// They are declared using the static keyword and exist independently of any specific object. 
// Static members are initialized only once, and their value is the same across all objects of the class.
//  They are used when you want to store data that is common to all objects of the class.
class Square{
      private:
        int side;
        int area;
       public:
         static int count;    //static member to count the number of object formed
         static int memory(){ //static to measure the quantity of the object formed
            return(count*12+4);
         }
        Square(){
            side=0;area=0;count++;}
        void putval(int s){
            side=s;area=s*s;
        }
        void display(){
            cout<<side<<" "<<area<<endl;
        }
    };
    int Square::count=0;
int main(){
    Square obj,bss;
    obj.putval(4);
    bss.putval(7);
    obj.display();
    // cout<<obj.count;

    // cout<<Square::count;

    cout<<Square::memory();
}


// NESTED CLASS
class Outer{
    private:
     int x;
   public:
    int u,v;
    void hell(){
        cout<<"outer class"<<endl;
    }
    class Inner{
        public:
         int e,f;
         Inner(){
            e=0;f=0;w=0;z=0;u=0;
         }
         void hell(){
            cout<<"inner class of class Outer class"<<endl;
           
         }
    };
    Inner w;  //we can't make the object inside the oute class of the inne class but the inner class can't access it
    static int z; //we can only access a static member in inner class that is create inside the outer class
    // we also can't access the outer class members in inner class

};