// A CLASS IS A USER DEFINED DATA TYPE THAT SERVES AS A BLUE-PRINT FOR CREATING OBJECTS
// A CLASS DEFINES THE STRUCTURE AND THE BEHAVIOUR OF THE OBJECTS OF THAT TYPES
// IT ENCAPSULATES DATA(attributes or properties) AND FUNCTIONS(methods) THAT OPERATES ON DATA
#include <iostream>
using namespace std;
class Testing{
    private:                     //access specifiers :private only assecible within the class
      int a;                     //members or variables (attributes)
      float b;
    public:                      //access specifiers :publice assecible outside the class
       int c;                    //members or variables (attributes)
       float d;
    void set_default(void){      //function of the class (methods)
      a=0;
      b=0;
    } 
    void print_values(void){     //function of the class  (methods)
       cout<<"a:"<<a<<endl;
       cout<<"b:"<<b<<endl;
       cout<<"c:"<<c<<endl;
       cout<<"d:"<<d<<endl;
    }
  Testing(){                    //constructor is a function of class which initialize objects of the class
      a=0;b=0;c=0;d=0;
    }
};

int main(){
    Testing test;              //creating an instance of class Testing
    // test.a=4;
    // test.c=45;
    // test.d=43;
    // cout<<test.c<<endl;
    test.set_default();
    test.print_values();

    return 0;

}