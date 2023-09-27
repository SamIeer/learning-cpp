// ANSWER 1:
#include <iostream>
using namespace std;

class Base
{

};

class Derived:public Base{

};

int main(){
    Base *bp=new Derived;
    Derived *dp=new Base;
}

// ANSWEER 2;
#include <iostream>
using namespace std;

class Base{
    private:
     int data1,data2;
    public:
     Base(int a=0,int b=0):data1(a),data2(b){

     }
};
class Derived:public Base{
    public:
      void show(){
        cout<<"data1 ="<<data1<<"data2 ="<<data2;
      }
};
int main(){
   Derived d;
   d.show();
   return 0;}

// PRACTICE QUESTION FROM RECORDINFG
#include  <iostream>
using namespace std;

class Students{
    protected:
      string name;
      int age;
      char grade;                      //USE SINGLE COTS FOR CHAR TYPES
    public:
      Students(string n,int a ,char g){
        name=n;age=a;grade=g;
      }
};

class High_school_student:public Students{    //DERIVED CLASS FOR THE CLASS STUDENT 
    private:
     string school_name;
    public:
      High_school_student(string n,int a,char g,string school):Students(n,a,g){
        school_name =school;
      }
    void printInfo(){
        cout<<"Name of student:"<<name<<endl;
        cout<<"age of the student:"<<age<<endl;
        cout<<"grade of the student:"<<grade<<endl;
        cout<<"school name of the student:"<<school_name<<endl;
    }      
};

int main(){
   High_school_student v("sameer",20,'A',"KV Pragati vihar");
   v.printInfo();
   return 0;
}