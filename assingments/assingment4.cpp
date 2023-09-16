// FUNCTION TO CHECKH WETHER A PERSON IS ELEGIBLE FOR VOTING OR NOT
#include <iostream>
#include <string>
using namespace std;

void vote_age(string,int);

int main(){
    string name;
    int age;
    cout<<"ENTER YOUR NAME :";
    cin>>name;
    cout<<"ENTER THE AGE :";
    cin>>age;

    vote_age(name,age);
}

void vote_age(string name , int age){
    if (age>18)
    {
        cout<<name<<" IS ELEGIBLE TO GIVE VOTE"<<endl;
    }
    else{
        cout<<name<<" ISN'T ELEGIBLE TO GIVE VOTE";
    }
}