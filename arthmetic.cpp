#include <iostream>
using namespace std;
int main(){
    int age,salary,anual_salary;
    char response,name,company;//A char contain only 1byt thats is it contain only 1 letter
    float total_salary;

    cout <<"Wellcome all,please SUBMIT carefully "<<endl;
    cout <<"give the response in yess/no"<<endl;
    cin>>response;

    cout << "What's your name: ";
    cin >> name;
    cout << "Company name: ";
    cin >> company;
    cout << "Your salary:";
    cin >> salary;
    cout << "anual salary:"<<salary*12;
    cout << "Monthly expense:"<<salary/2;
    cout << "savings:"<<salary/4;
    return 0;

}