//ANSWER1: FUNCTION TO CHECKH WETHER A PERSON IS ELEGIBLE FOR VOTING OR NOT
    #include <iostream>
    #include <string>
    using namespace std;
    void vote_age(string,int);

    int main(){
        string name;
        int age;
        cout<<"ENTER YOUR NAME :";   //TAKING THE NAME OF THE PERSON
        cin>>name;
        cout<<"ENTER THE AGE :";    //TAKING THE AGE OF THE PERSON 
        cin>>age;
        vote_age(name,age);
        return 0;}

    // FUNCTION FOR CHECKING THE ELEGIBLITY
    void vote_age(string name , int age){
        if (age>18)
        {
            cout<<name<<" IS ELEGIBLE TO GIVE VOTE"<<endl;}
        else{
            cout<<name<<" ISN'T ELEGIBLE TO GIVE VOTE";}}


//ANSWER2 : FZUNCTION FOR CREATING CALCULATOR
    #include <iostream>
    using namespace std;

    int basic_cal(int a,char ops, int b);

    int main(){
        int a,b;
        char ops;
        cout<<"enter the numbers for the opperation :"<<endl;
        cin>>a>>b;
        cout<<"enter the operator :";
        cin>>ops;
        float c=basic_cal(a,ops,b);
        cout<<c;
      return 0;}

    int basic_cal(int a,char ops, int b){
        if(ops=='+'){           //FOR ADDITION
            return a+b;
        }
        else if(ops=='-'){      //FOR SUBTRACTION
            return a-b;
        }
        else if(ops=='*'){      //FOR MULTIPLICATION
            return a*b;
        }
        else if(ops=='/'){      //FOR DIVISION
            return a/b;
        }
        else if(ops=='^'){      //DOR POWWER
            return a^b;
        }
    return 0;
    }
    

// ANSWER3:FUNCTIONS FOR COMPARING TWO NUMBERS
    #include <iostream>
    using namespace std;

    // double max_two(double a, double b) {
    //     return (a > b) ? a : b;
    // } 
    // FUNCTION TO FIND MAX BETWEEN TWO NUMBERS
    int max_two(double a,double b){
        if(a>b){
            return a;
        }
        else if(a==b){
            return -1;
        }
        else{
            return b;
        }
    }

    int main(){
        double a,b;
        cout<<"ENTER THE NUMBERS :"<<endl;
        cin>>a>>b;
        cout<<max_two(a,b)<<" is the maximum number";

        return 0;}