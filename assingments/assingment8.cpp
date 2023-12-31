// ERROR HANDLING:::: PREVENTING OR RECOVERING FROM ERRORS THAT CAN OCCUR DURING THE EXECUTION OF A PROGRAM 
//AND IT ALSO INVOLVES DESIGNING APPROPRIATE ERROR HANDLING STRATEGIES TO BE USED BY YOUR CODE.
//  to ensure that a program behaves ROBUSTLY and GRACEFULLY in the face of unexpected conditions.
#include <iostream>
#include <math.h>
#include <stdexcept>
#include <cctype>
using namespace std;

//ANSWER1:PROGRAM FOR EXCEPTION HANDLING OF DIVSION BY ZERO
int div_fun(float a,float b){
    return a/b;
}
int main(){
    float a,b;
   cout<<"ENTER THE NUMBER :"<<endl;
   cin>>a>>b;
   try
   {
    if(b==0){
        throw 1;//throwing error when b is 0
    }
    cout<<div_fun(a,b);
   }
   catch(int e)
   {
    cout<<"DIVISION BY ZERO IS NOT POSSIBLE"<<e<<endl;
   }
   }

//ANSWER2: PROGRAM TO DEMONSTRATE INTEGER EXCEPTION AND CHARACTER EXCEPTION

int main() {
    try {
        int num;
        char ch;

        cout << "Enter an integer: ";
        cin >> num;

        if (cin.fail()) {
            cin.clear();           // Clear the error flag
            cin.ignore(100, '\n'); // Ignore up to 100 characters until a newline character
            throw runtime_error("Invalid integer input."); // Throw a runtime_error for invalid integer input
        }

        cout << "Enter a character: ";
        cin >> ch;

        if (!isalpha(ch)) {
            throw runtime_error("Invalid character input."); // Throw a runtime_error for invalid character input
        }

        // Display the entered values
        cout << "Integer: " << num << endl;
        cout << "Character: " << ch << endl;
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
        return 1; // Exit with an error code
    }
    return 0;
}



//ASSINGMENT QUESTION : FINDING THE ROOTS OF QUARDIC EQUATION AND HANDLING THE ERROR WHEN A=0
    int find_roots(int a,int b,int c){
        int d=(b*b)-(4*a*c);
        float x,y;
        if((d==0)){
            cout<<"ROOTS ARE REAL BUT NOT EQUAL"<<endl;
            x= -b /(2*a); 
            x=y;
            cout<<"roots are"<<x<<"and"<<y <<endl;
        }
        else if(d>0){
        cout<<"ROOTS ARE REAL BUT UNEQUAL :"<<endl;
        x=(-b+sqrt(d))/(2.0*a);
        y=(-b-sqrt(d))/(2.0*a);
            cout<<"roots are"<<x<<"and"<<y <<endl;
        }
        else{
            cout<<"ROOTS ARE IMAGINARY"<<endl;
        }
        return 0;
    }
    int main(){
        int a,b,c;
        cout<<"ENTER THE VLAUE OF a , b  AND c respectivily :"<<endl;
        cin >> a >> b >> c;
        cout<<"THE QUADRIC EQUATION :"<<a<<"x^2 +"<<b<<"x +"<<c<<endl;
        try{
            if(a==0){
                throw 1;
            }
            find_roots(a,b,c);
        
        } catch(int e){
            cout<<"DIVISION WITH ZERO IS NOT POSSIBLE ,a=0"<<endl;
        }
    }