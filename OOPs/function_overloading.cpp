//FUNCTION OVERLOADING ; MORE THAN ONE FUNCTION OF SAME NAME BUR THEY SHOULD HAVE DIFFERENT ARGUMENTS
// Function overloading is a feature in C++ that allows you to define multiple functions in the 
// same scope with the same name but different parameters.

    // #include <iostream>
    // using namespace std;
    // int find_greatest(int a ,int b);
    // float find_greatest(float a ,float b);

    // int main(){
    //  int a=4,b=23;
    //  int x=3.4 , y=6.8;
    //  cout<<find_greatest(a,b);
    //  cout<<find_greatest(x,y);
    // }
    // int find_greatest(int a ,int b){
    //     if (a>b){
    //         return a;
    //     }
    //     else{
    //         return b;
    //     }
    // }

    // float find_greatest(float a ,float b){
    //     if (a>b){
    //         return a;
    //     }
    //     else{
    //         return b;
    //     }
    // }

// function oveloading in class
    // #include <iostream>
    // using namespace std;

    // class Complex_numbers{
    //     private:
    //     int real;
    //     int imag;
    //     public:
    //     Complex_numbers(void){
    //         real=0;
    //         imag=0;
    //     }
    //     Complex_numbers(int x,int y){
    //         real=x;
    //         imag=y;}
    //     Complex_numbers(Complex_numbers & z){
    //         real=z.real;
    //         imag=z.imag;
    //     }
    //     void display(void);
    // };
    // void Complex_numbers:: display(void){
    //     cout<<real<<"+"<<imag<<"i"<<endl;}

    // int main(){
    //     Complex_numbers a;
    //     a.display();
    //     Complex_numbers b(4,5);
    //     b.display();
    //     Complex_numbers c(b);
    //     c.display();
// }

// PRACTICE QUESTION
// Write a C++ code snippet to demonstrate the creation of Shape objects representing a circle and a rectangle.
//  Calculate and display their areas.
#include <iostream>
using namespace std;
class Shape{
    private:
    enum ShapeType{circle,rectangle};
      ShapeType shape;
      int dimension;
    public:
      Shape(){
        shape=circle; //default to circle
        dimension=0;
        }
      Shape(ShapeType type,int b){
           shape=type;
           dimension=b;
      }
      void calcualtion();
};
void Shape::calcualtion(){
    int area;
    if(shape==circle){
         area==(2*3.14)*dimension^2;
    }
    else{
        area==dimension^2;
    }
    cout<<"aera of the shape"<<area<<endl;
}

int main() {
    string shapeName;
    cout << "Enter the shape (circle/rectangle): ";
    cin >> shapeName;
    
    Shape::ShapeType type;
    if (shapeName == "circle") {
        type = circle;
    } else if (shapeName == "rectangle") {
        type = rectangle;
    } else {
        cout << "Invalid shape entered." << endl;
        return 1; // Exit with an error code
    }

    int dimension;
    cout << "Enter the dimension: ";
    cin >> dimension;

    Shape x(type, dimension);
    x.calculation();

    return 0;
}