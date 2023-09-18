// A CLASS IS A USER DEFINED DATA TYPE THAT SERVES AS A BLUE-PRINT FOR CREATING OBJECTS
// A CLASS DEFINES THE STRUCTURE AND THE BEHAVIOUR OF THE OBJECTS OF THAT TYPES
// IT ENCAPSULATES DATA(attributes or properties) AND FUNCTIONS(methods) THAT OPERATES ON DATA
#include <iostream>
using namespace std;
class Testing{
    private:
      int a;
      float b;
    public:
       int c;
       float d;
};

int main(){
    Testing test;
    // test.a=4;
    test.c=45;
    test.d=43;
    cout<<test.c<<endl;
}