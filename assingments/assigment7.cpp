#include <iostream>
using namespace std;

// ANSWER 1:DESTRUCTURE 
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
        cout<<"This is a destructure class"<<endl;}
};
class Base:public Derived{
      private:
        string name;
        string surname;
      public:
        Base(){
        name="";surname="";
        cout<<"hello Base"<<endl;}

       Base(string n,string sn){
        name=n;surname=sn;
        cout<<"this a Base class"<<endl;}

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

class Shape {
public:
    // Parameterized constructor
    virtual void calculatedarea()=0;
};
class Rectangle : public Shape {
   private:
    int length;
    int height;
   public:
    //Parameterized constructor using member initializer list
    Rectangle(int l, int h) {
         length=l;height=h;}

    // Public function to get the area
    void calculatedarea() {
        cout << "The area of Rectangle is: " << length*height << endl;
    }
};
class Triangle : public Shape{
        private:
          int base;
          int height;
        public:
         Triangle(int b,int h){
            base=b;height=h;
         }
         void calculatedarea(){
            cout<<"area of triangle:"<<0.5*base*height<<endl;
         }  
};
int main() {
    //OBJECT FOR RECTANGLE
    Rectangle r(10,4);
    r.calculatedarea();
    //OBJECT FOR TRIANGLE
    Triangle t(90,2);
    t.calculatedarea();
    return 0;
}


// RECOEDED QUESTION
class Collegestudent{
       private:
         string name;
         int roll_no;
         int age;
         string department;
         static int total;
        public:
          Collegestudent(){
            name="";age=0;roll_no=0;department="";total++;
          }
          Collegestudent(string n,int a ,string d){
            name=n;age=a;department=d;total++;
          }

          ~Collegestudent(){
            total--;
          }
          void printdata(){
            cout<<"STUNDENT RECORD--------"<<endl;
            cout<<"name :"<<name<<"\t"<<"age :"<<age<<"\t"<<"roll_no :"<<roll_no<<"\t"<<"department :"<<department<<endl;
          }
};
int Collegestudent :: total = 0;
int main(){
    Collegestudent c("ram",3,"cse");
    c.printdata();

    c.~Collegestudent();
    return 0;
}