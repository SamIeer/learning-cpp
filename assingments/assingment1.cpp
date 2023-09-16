#include <iostream>
using namespace std;

//Answer 1
// int main(){
//     if(0){
//         cout<<"bye";
//     }
//     else
//     {
//         cout<<"hello";
//     }
// }

//Answer 2
// int main(){
//     int a;
//     cin>>a;
//     if(++a*5<=25){
//         cout<<"hello";
//     }
//     else{
//         cout<<"bbye";
//     }
// }

// Answer 3
// int main(){
//     int a=1;
//     switch (a)
//     {
//     case 1:cout<<"one";
//     case 2:cout<<"two";
//     case 3:cout<<"three";
//     default:cout<<"default";
//     }
//     return 0;
// }

//Answer 4
// int main(){
//     int x; //defining the data type
//     cout << "Enter a integer:"; 
//     cin >> x; //USer Output

//     if( x ){ //Checkeng wether number is zero or not 

//         if(x%2==0){ //Checking for the Even
//             cout<<"The number "<<x<<" is Even";}

//         else{ //checkeng for the Odd
//             cout<<"The number "<<x<<" is Odd";}
//     }

//     else{ //Output for zero
//         cout<<"THe number is nither Even nor Odd ITs:"<<x;
//     }
// }

//Answer 5
int main(){
    int x , a , b;                                          //DEFINING  THE DATA TYPE 
    cout << "Enter the number for calculation (a and b):";
    cin >> a >> b;                                          //USER INPUT
    cout << "Press 1 for Addtion" <<endl;                   //ADDITON
    cout << "Press 2 for Subtraction" <<endl;               //SUB
    cout << "Press 3 for Multiplicattion" <<endl;           //MUL
    cout << "Press 4 for Division" <<endl;                  //DIV
    cout << "ENTER THE NUMBER FOR OPERATION: ";
    cin >>x ;                                               //USER INPUT 
    switch (x)                                              //SWITCH CASES FOR THE IMPLITION OF OPERATION
    {   case 1:
            cout<<"The Addtion of a and b is: "<<a+b;
            break;
    
        case 2:
             cout<<"The Subtraction of a and b is: "<<a-b;
            break;

        case 3:
            cout<<"The Multiplicattion of a and b is: "<<a*b;
            break;

        case 4:
            cout<<"The Division of a and b is: "<<a/b;
            break;

        default:
             break;
    }}
