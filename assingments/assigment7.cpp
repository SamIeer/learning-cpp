// ANSWER 1:DESTRUCTURE 
#include <iostream>
using namespace std;
class Derived{
    private:
     int x,y;
    public:
     Derived()
       {
        x=0;y=0;
       }     
    Derived(int a,int b){
        x=a; y =b;}
    int greater(){
        return(x>y)?x:y;
    }
    ~Derived(){
        cout<<"This is a destructure class"<<endl;
    }
};
class Base:public Derived{
      private:
        string name;
        string surname;
      public:
        Base(){
        name="";surname="";
        cout<<"hello Base"<<endl;
       }
       Base(string n,string sn){
        name=n;surname=sn;
        cout<<"this a Base class"<<endl;
       }

       string fullname(){
        return name + " " + surname;
       }
       ~Base(){
        cout<<"this a Base destructure"<<endl;
       }
    // friend Base operator +(const Base & x);
};

int main(){
    Derived s(2,4);
    cout<<s.greater()<<endl;

    cout<<"start"<<endl;
    Base b("sameer","chauhan");
    cout<<b.fullname()<<endl;
}

// Base operator +(const Base & x){
//     Base o;
//     o.name=(x.name+x.surname);
//     return o;
// }

// PROGRAM TO CALCULATE AREA OF RECTANGLE AND TRIANLE USING ABSTRACT CLASS
#include <iostream>
using namespace std;

class Shape {
protected:
    int length;
    int height;

public:
    // Parameterized constructor
    Shape(int l, int h) {
        length = l;
        height = h;
    }
};

class Rectangle : public Shape {
   private:
    int area;
   public:
    //Parameterized constructor using member initializer list
    Rectangle(int l, int h) : Shape(l, h) {
        area = length * height;}

    // Public function to get the area
    void Area() {
        cout << "The area of Rectangle is: " << area << endl;
    }
};

int main() {
    Rectangle r(4, 5);
    r.Area();

    return 0;
}
