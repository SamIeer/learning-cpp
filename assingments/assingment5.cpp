// ANSWER 1; PROGRAM FOR TRAIN DATA BASE
    // #include <iostream>
    // using namespace std;
    // struct Railway         //structure for the train list
    // {
    //     string Name;
    //     string info;
    //     int Tno;
    //     int seat;
    //     int price;
    // };

    // int balance_check(int n,int *arr,int *arrr); //FUNCTION FOR OBTAINING TOTAL MONEY AND LEFT OUT SEATS

    // int main(){
    //     int n;
    //     cout<<"enter the number of passengers :"<<endl;
    //     cin>>n;
    //     Railway chart[n];
    //     int arr[n];
    //     int arrr[n];
    //     cout<<"Name"<<"\t"<<"info"<<"\t"<<"Tno"<<"\t"<<"seat"<<"\t"<<"price";
    //     for (int i = 0; i < n; i++){
    //         cin>>chart[i].Name>>chart[i].info>>chart[i].Tno>>chart[i].seat>>chart[i].price;
    //     }
    //     cout<<"Name"<<"\t"<<"info"<<"\t"<<"Tno"<<"\t"<<"seat"<<"\t"<<"price"<<endl;
    //     for (int i = 0; i < n; i++){
    //         cout<<chart[i].Name<<"\t"<<chart[i].info<<"\t"<<chart[i].Tno<<"\t"<<chart[i].seat<<"\t"<<chart[i].price<<endl;
    //         arr[i]=chart[i].price;
    //         arrr[i]=chart[i].Tno;
    //         }
    //     cout<<balance_check(n,arr,arrr);
    //     return 0;
    // }

    // int balance_check(int n,int *arr,int *arrr){
    //     int sum=0;
    //     int c=0,t=9;
    //     for (int i = 0; i < n; i++)
    //     {
    //     sum+=arr[i];
    //     if(arrr[i]!=0){
    //         c+=1;
    //     }
    //     }
    //     int l=t-c;
    //     cout<<"total price :"<<endl;
    //     return sum;
    //     cout<<"total seats booked :"<<endl;
    //     return l;
    // }


//ANSWER 2: REVERSING S NUMBER WITH THE USE OF CLASS
    // #include <iostream>
    // using namespace std;

    // // CLASS FOR REVERSING A GIVEN NUMBER
    // class Reverse{          
    //     public:
    //     int a;
    //     //   int n;
    //     void revese_no(){

    //         int Rev=0;
    //         int originalnum=a;
    //         // cout<<"REVERSE OF THE GIVEN NUMBER :";
    //         while (originalnum != 0)
    //         {
    //             int digit=originalnum%10; //getting last digit
    //             Rev=Rev*10+digit;         //append the digit to reverse number
    //             originalnum/=10;          //remove the last digit from the original number
    //         }
    //         cout<<"the reversed number :"<<Rev;
    //     }
    // };

    // int main(){
    //     Reverse num;      //INSTANCE OF CLASS REVERSE
    //     cout<<"enter a number :"<<endl;
    //     cin>>num.a;      //ATTRIBUTE OF  CLASS REVERSE (VARIABLE)
    //     num.revese_no(); //METHOD OF  CLASS REVERSE (FUNCTION)
    //     return 0;
    // }



//ANSWER 3: FACTORIAL OF A GIVEN NUMBER
    #include <iostream>
    using namespace std;

    // CLASS TO GET FACTORIAL OF A GIVEN NUMBER
    class Factorial{          
        public:
        int a;
        void factorial_no(void){            //method for factorial (function)
            int fact=1;
            for (int i = 1; i <= a; i++)
            {
            fact*=i;
            }
            cout<<"factorial of the number :"<<fact;

        }
    };

    int main(){
        Factorial num;                 //INSTANCE OF CLASS REVERSE
        cout<<"enter a number :"<<endl;
        cin>>num.a;                   //ATTRIBUTE OF  CLASS REVERSE (VARIABLE)
        num.factorial_no();          //METHOD OF  CLASS REVERSE (FUNCTION)
        return 0;
    }



//ITs another version of answer2 
// //ANSWER 2: REVERSING S NUMBER WITH THE USE OF CLASS
// #include <iostream>
// using namespace std;

// // CLASS FOR REVERSING A GIVEN NUMBER
// class Reverse{  
//     private:
//       int a;      
//     public:
//     Reverse(int num){
//         a=num;
//     }
//     //   int n;
//     int revese_no(){

//         int Rev=0;
//         int originalnum=a;
//         // cout<<"REVERSE OF THE GIVEN NUMBER :";
//         while (originalnum != 0)
//         {
//             int digit=originalnum%10; //getting last digit
//             Rev=Rev*10+digit;         //append the digit to reverse number
//             originalnum/=10;          //remove the last digit from the original number
//         }
//         return Rev;
//     }
// };

// int main(){
//     // Reverse Revs;      //INSTANCE OF CLASS REVERSE
//     int a;
//     cout<<"enter a number :"<<endl;
//     cin>>a;      //ATTRIBUTE OF  CLASS REVERSE (VARIABLE)
//     // Revs.revese_no(); //METHOD OF  CLASS REVERSE (FUNCTION)
//     Reverse revese_no(a);
//     int reversenum = revese_no.revese_no();
//     cout << "Reversed number: " << reversenum << std::endl;
//     return 0;
// }