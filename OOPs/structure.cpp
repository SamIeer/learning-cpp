// STRUCTURES IN C++ IS A USER DEFINED COMPOSITE DATA TYPE THAT GROUPS TOGETHER VARAIBLES OF 
// DIFFERENT DATA TYPES UNDER A SINGLE NAME

// BASIC FORMATION OF STRUCTURE
    #include <iostream>
    using namespace std;

    struct complex_num{
        int real;
        int imag;
    };

    complex_num com_sum(complex_num a, complex_num b);

    int main(){
        complex_num a,b,c;
        cout<<"enter the complex number"<<endl;
        cin>>a.real>>b.imag;
        cin>>b.real>>a.imag;
        cout<<"real part :"<<a.real<<"\t"<<"imaginary part :"<<b.imag<<"i"<<endl;
        // cout<<"sum the above complex number is :"<<a.real+b.real<<"\t"<<b.imag+a.imag<<"i"<<endl;
        c=com_sum(a,b);

        cout<<c.real<<"\t"<<c.imag<<"i";
    }

    complex_num com_sum(complex_num a, complex_num b){
        complex_num c;
        c.real=a.real + b.real;
        c.imag=a.imag + b.imag;
        return c;
    }

// STRUCTURE OF ARRAY FOR EMPLYOYEE
    #include <iostream>
    using namespace std;

    struct employee
    {
        string name;
        int age;
        int salary;
        float performance;
    };

    int main(){
        int n;
        cout<<"enter the number of employees ;"<<endl;
        cin>>n;
        employee record[n];
        for(int i=0;i<n;i++){
            cin>>record[i].name>>record[i].age>>record[i].salary>>record[i].performance;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<record[i].name<<"\t"<<record[i].age<<"\t"<<record[i].salary<<"\t"<<record[i].performance<<endl;
        }
        
        
    }

//STRUCTURE FOR SCHOOL STUDENT DATABASE
#include <iostream>
using namespace std;

struct students
{
    string name;
    string Fname;
    int ID;
    string standard;
    int score;
};

int main(){
    int n;
    cout<<"enter the number of students :"<<endl;
    cin>>n;
    students record[n];
    for (int i = 0; i < n; i++)
    {
        cin>>record[i].name>>record[i].Fname>>record[i].ID>>record[i].standard>>record[i].score;
    }
     cout<<"name"<<"\t"<<"Fname"<<"\t"<<"ID"<<"\t"<<"standard"<<"\t"<<"score"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<record[i].name<<"\t"<<record[i].Fname<<"\t"<<record[i].ID<<"\t"<<record[i].standard<<"\t"<<record[i].score<<endl;
    }
    
    
}