// ANSWER 1; PROGRAM FOR TRAIN DATA BASE
#include <iostream>
using namespace std;
struct Railway         //structure for the train list
{
    string Name;
    string info;
    int Tno;
    int seat;
    int price;
};

int balance_check(int n,int *arr,int *arrr); //FUNCTION FOR OBTAINING TOTAL MONEY AND LEFT OUT SEATS

int main(){
    int n;
    cout<<"enter the number of passengers :"<<endl;
    cin>>n;
    Railway chart[n];
    int arr[n];
    int arrr[n];
    cout<<"Name"<<"\t"<<"info"<<"\t"<<"Tno"<<"\t"<<"seat"<<"\t"<<"price";
    for (int i = 0; i < n; i++){
        cin>>chart[i].Name>>chart[i].info>>chart[i].Tno>>chart[i].seat>>chart[i].price;
    }
    cout<<"Name"<<"\t"<<"info"<<"\t"<<"Tno"<<"\t"<<"seat"<<"\t"<<"price"<<endl;
    for (int i = 0; i < n; i++){
        cout<<chart[i].Name<<"\t"<<chart[i].info<<"\t"<<chart[i].Tno<<"\t"<<chart[i].seat<<"\t"<<chart[i].price<<endl;
         arr[i]=chart[i].price;
         arrr[i]=chart[i].Tno;
        }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<endl;
    //     cout<<arrr[i]<<endl;
    // }
    cout<<balance_check(n,arr,arrr);
    
     return 0;
}

int balance_check(int n,int *arr,int *arrr){
    int sum=0;
    int c=0,t=9;
    for (int i = 0; i < n; i++)
    {
       sum+=arr[i];
       if(arrr[i]!=0){
         c+=1;
       }
    }
    int l=t-c;
    cout<<"total price :"<<endl;
    return sum;
    cout<<"total seats booked :"<<endl;
    return l;
}
