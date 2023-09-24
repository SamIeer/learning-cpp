//ANSWER1; PROGRAM FOR DEMONSTRATING FUNCTION OVERLOADING
    #include <iostream>
    using namespace std;

    class Calculator{
       private:
          int a;
          int b;
       public:
       Calculator(){
        a=0;
        b=0;
       }
          Calculator(int x,int y){
              a=x;
              b=y;
          } 

          int add(int, int);   //METHOD FOR ADDITION OF INTIGER
          float add(float,float); //METHOD FOR ADDITION OF FLOAT

          int sub(int,int);       //METHOD FOR SUBTRACTION OF INTIGER
          float sub(float,float); //METHOD FOR SUBTRACTION OF FLOAT

          int mul(int,int);       //METHOD FOR MULTIPLICATION OF INTEGER
          float mul(float,float); //METHOD FOR MULTIPLICATION OF FLOAT

          int div(int,int);        //METHOD FOR DIVISION OF INTEGER
          float div(float,float);  //METHOD FOR DIVISION OF FLOAT
    };

    int main(){
        int x,y;
        float u,v;
        cout<<"ENTER THE NUMBERS FOR OPERATION :"<<endl;
        cin>>x>>y;
        cout<<"ENTER THE NUMBER FOR OPERATION FLOAT :"<<endl;
        cin>>u>>v;
        Calculator cal;
        string operation;
        cout<<"ENTER THE OPERATION :";
        cin>>operation;
        if(operation == "add"){
            cout<<cal.add(x,y)<<endl;
            cout<<cal.add(u,v);
        }else if(operation == "sub"){
            cout<<cal.sub(x,y)<<endl;
             cout<<cal.sub(u,v);
        }else if(operation == "mul"){
            cout<<cal.mul(x,y)<<endl;
             cout<<cal.mul(u,v);
        }else if(operation == "div"){
            cout<<cal.div(x,y)<<endl;
             cout<<cal.mul(u,v);
        }
        return 0;
    }

    //function working for addition
    int Calculator::add(int x,int y){
        int z;
        z=x+y;
        return z;}
    float Calculator::add(float x,float y){
        float z;
        z=x+y;
         return z;}

    //function working for subtraction
    int Calculator::sub(int x,int y){
        int z;
        z=x-y;
        return z;}
    float Calculator::sub(float x,float y){
        float z;
        z=x-y;
        return z;}

    //function working for multiplication
    int Calculator::mul(int x,int y){
        int z;
        z=x*y;
        return z;}
    float Calculator::mul(float x,float y){
        float z;
        z=x*y;
        return z;}

    //function working for division
    int Calculator::div(int x,int y){
        int z;
        z=x/y;
        return z;}
    float Calculator::div(float x,float y){
        float z;
        z=x/y;
        return z;}


//ANSWER2: PROGRAM FOR DEMONSTRATING OPERATOR OVERLOADING IN CLASS
    #include <iostream>
    using namespace std;
    class Fraction{
        private:
            int num;
            int den;
        public:
            Fraction(){
                num=0;
                den=0;}
            Fraction(int x, int y){
                num=x;
                den=y;}
            void show(){
                cout<<"THE FRACTION :"<<num<< "/"<<den<<endl;}
            Fraction operator +(const Fraction& k);
            Fraction operator -(const Fraction& k);
            friend Fraction operator *(const Fraction& p,const Fraction& q);
            friend Fraction operator /(const Fraction& p,const Fraction& q);
            friend bool operator ==(const Fraction& p,const Fraction& q);
    };
    int main(){
        int u,v;
        cout<<"ENTER THE NUMBERS"<<endl;
        cin>>u>>v;
        Fraction p(u,v);
        p.show();
        
        Fraction q(4,5);
        q.show();
        
        Fraction r,n,m,t;
        r=p+q;
        n=p-q;
        m=p*q;
        t=p/q;
        r.show();
        n.show();
        m.show();
        t.show();
        
        if(p==q){
            cout<<"equal"<<endl;
        }else{
            cout<<"not equal"<<endl;
        }
        return 0;
    }
    // METHOD FOR ADDITION OF FRACTION 
    Fraction Fraction::operator+(const Fraction& k){
        Fraction c;
        
        if(k.den==den){
            c.num=num+k.num;
            c.den=k.den;
        }else{
        c.num=num*k.den + den*k.num;
        c.den=k.den*den;
        }
        return c;
    }
    // METHOD FOR SUBTRACTION OF FRACTION
    Fraction Fraction::operator-(const Fraction& k){
        Fraction c;
        
        if(k.den==den){
            c.num=num-k.num;
            c.den=k.den;
        }else{
        c.num=num*k.den - den*k.num;
        c.den=den*k.den;
        }
        return c;
    }
    // METHOD FOR MUTIPLICATION FRACTION
    Fraction operator *(const Fraction& p,const Fraction& q){
        Fraction c;
        c.num=p.num * q.num;
        c.den=p.den * q.den;
        return c;
    }
    // METHOD FOR DIVISION OF FRACTION
    Fraction operator /(const Fraction& p,const Fraction& q){
        Fraction c;
        c.num=p.num * q.den;
        c.den=p.den * q.num;
        return c;
    }
    // METHOD FOR CHECKING THE EQUALITY OF TH FRACTION
    bool operator  ==(const Fraction& p,const Fraction& q){
        if(p.num==q.num && p.den==q.num){
            return true;
        }else{
            return false;
        }
    }