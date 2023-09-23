// OPERATOR OVERLOADING :

//     #include <iostream>
//     using namespace std;

//     class Complex_numbers{
//         private:
//         int real;
//         int imag;
//         public:
//         Complex_numbers(void){       //CONSTRUCTURE 
//             real=0;
//             imag=0;
//         }
        
//         void set_values(int , int);      //MUTATOR
//         inline void display(void);         //ACCERORS WITH INLINE 
//         Complex_numbers operator * (const Complex_numbers & k);
//         Complex_numbers operator / (const Complex_numbers & k);
//         friend Complex_numbers operator - (const Complex_numbers & x, const Complex_numbers & y);
//     };
   
//     int main(){
//         Complex_numbers a;
//         a.set_values(2,3);
//         a.display();
//         Complex_numbers b;
//         b.set_values(5,7);
//         b.display();
        
//         Complex_numbers c,d,e;
//         c=a*b;
//         d=a/b;
//         e=a-b;
//         c.display();
//         d.display();
//         e.display();
// }

// void Complex_numbers:: display(void){
//         cout<<real<<"+"<<imag<<"i"<<endl;}
// void Complex_numbers::set_values(int x,int y){
//             real=x;
//             imag=y;}


// Complex_numbers Complex_numbers:: operator* (const Complex_numbers& x){   //
//     Complex_numbers z;
//     z.real=real*x.real - imag*x.imag;
//     z.imag=imag*x.real - real*x.imag;
//     return z;
// }

// Complex_numbers Complex_numbers:: operator/ (const Complex_numbers& x){
//     Complex_numbers z;
//     z.real=(real*x.real - imag*x.imag)/(x.real)^2 - (x.imag)^2;
//     z.imag=(imag*x.real - real*x.imag)/(x.real)^2 - (x.imag)^2;
//     return z;
// }

// Complex_numbers operator - (const Complex_numbers & x, const Complex_numbers & y){
//   Complex_numbers z;
//   z.real=x.real-y.real;
//   z.imag=x.imag -y.imag;
//   return z;
// };

// PRACTICE QUESTION FOR OPERATOR OVERLOADDING 
#include <iostream>
using namespace std;

class Vectors{
    private:
        int i;
        int j;
        int k;
    public:
        Vectors(){
            i=0;
            j=0;
            k=0;
        }
        Vectors(int a,int b,int c){
         i=a;
         j=b;
         k=c;
        }

        void show(void);                        //MEMBER METHOD FOR RETRIVING THE VALUES
        bool operator==(const Vectors& x);     //OPERATOR FOR CHECKING WETHER VECTORS ARE EQUAL OR NOT 
        Vectors operator +(const Vectors& x);  //OPERATOR FOR ADDITION
        friend Vectors operator *(const Vectors& x,const Vectors& y); //OPERATOR FOR MULTIPLICATION

};
int main(){
   Vectors s(2, 3, 4);
    s.show();
    Vectors v(4, 5, 6);
    v.show();
    Vectors r , t;
    r = s + v;
    r.show();

    if(s==v){
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"not equal"<<endl;
    }
    t=s*v;
    t.show();

}


void Vectors:: show(void){
    cout<<i<<"i"<<"+"<<j<<"j"<<"+"<<k<<"k = 0"<<endl;
}

bool  Vectors ::operator == (const Vectors& x){
      return i==x.i & j==x.j & k==x.k;
}

Vectors Vectors::operator+(const Vectors& x){
    Vectors z;
    z.i= i + x.i;
    z.j=j + x.j;
    z.k =k + x.k;
    return z;
}

Vectors operator*(const Vectors& x,const Vectors& y){   //OPERATOR USING FRIEND KEYWORD
     Vectors z;
      z.i=x.i*y.i;
      z.j=x.j*y.j;
      z.k=x.k*y.k;
      return z;
}