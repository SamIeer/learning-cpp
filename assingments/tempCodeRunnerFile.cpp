  // #include <iostream>
    // using namespace std;
    // class Fraction{
    //     private:
    //         int num;
    //         int den;
    //     public:
    //         Fraction(){
    //             num=0;
    //             den=0;}
    //         Fraction(int x, int y){
    //             num=x;
    //             den=y;}
    //         void show(){
    //             cout<<"THE FRACTION :"<<num<< "/"<<den<<endl;}
    //         Fraction operator +(const Fraction& k);
    //         Fraction operator -(const Fraction& k);
    //         friend Fraction operator *(const Fraction& p,const Fraction& q);
    //         friend Fraction operator /(const Fraction& p,const Fraction& q);
    //         friend bool operator ==(const Fraction& p,const Fraction& q);
    // };
    // int main(){
    //     int u,v;
    //     cout<<"ENTER THE NUMBERS"<<endl;
    //     cin>>u>>v;
    //     Fraction p(u,v);
    //     p.show();
        
    //     Fraction q(4,5);
    //     q.show();
        
    //     Fraction r,n,m,t;
    //     r=p+q;
    //     n=p-q;
    //     m=p*q;
    //     t=p/q;
    //     r.show();
    //     n.show();
    //     m.show();
    //     t.show();
        
    //     if(p==q){
    //         cout<<"equal"<<endl;
    //     }else{
    //         cout<<"not equal"<<endl;
    //     }
    //     return 0;
    // }
    // // METHOD FOR ADDITION OF FRACTION 
    // Fraction Fraction::operator+(const Fraction& k){
    //     Fraction c;
        
    //     if(k.den==den){
    //         c.num=num+k.num;
    //         c.den=k.den;
    //     }else{
    //     c.num=num*k.den + den*k.num;
    //     c.den=k.den*den;
    //     }
    //     return c;
    // }
    // // METHOD FOR SUBTRACTION OF FRACTION
    // Fraction Fraction::operator-(const Fraction& k){
    //     Fraction c;
        
    //     if(k.den==den){
    //         c.num=num-k.num;
    //         c.den=k.den;
    //     }else{
    //     c.num=num*k.den - den*k.num;
    //     c.den=den*k.den;
    //     }
    //     return c;
    // }
    // // METHOD FOR MUTIPLICATION FRACTION
    // Fraction operator *(const Fraction& p,const Fraction& q){
    //     Fraction c;
    //     c.num=p.num * q.num;
    //     c.den=p.den * q.den;
    //     return c;
    // }
    // // METHOD FOR DIVISION OF FRACTION
    // Fraction operator /(const Fraction& p,const Fraction& q){
    //     Fraction c;
    //     c.num=p.num * q.den;
    //     c.den=p.den * q.num;
    //     return c;
    // }
    // // METHOD FOR CHECKING THE EQUALITY OF TH FRACTION
    // bool operator  ==(const Fraction& p,const Fraction& q){
    //     if(p.num==q.num && p.den==q.num){
    //         return true;
    //     }else{
    //         return false;
    //     }
    // }