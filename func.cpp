#include <iostream>
using namespace std;

// function for finding aera and circumfrence of the circle
    // void circle_details(int r){
    //     float area, c;
    //     area = 3.14*r*r;
    //     c=2*3.14*r;
    //     cout<<"area ;"<<area<<"\t"<<"circumfreance ;"<<c<<endl;
    // }

    // int main(){
    //     int r;
    //     cout<<"please enter the radius ;"<<endl;
    //     cin>>r;
    //     circle_details(r);
    //     circle_details(5);
    //     circle_details(9);
    //     return 0;}


// function for finding the greatest nummber between three numbers
    // int greatest(int x, int y, int z){
    //     if(x>=y){
    //         if(x>=z){
    //             return x;
    //         }
    //         else{return z;}
    //     }
    //     else{
    //         if(y>=z){
    //             return y;
    //         }
    //         else{
    //             return z;
    //         }
    //     }
    // }

// int main(){
    // int a,b,c,g;
    // cout<<"enter the numbers ;"<<endl;
    // cin>>a>>b>>c;
    // g=greatest(a,b,c);
    // cout<<g<<endl;
    // return 0;
    // }

// function for obtaining the power of the number upto the given number
    // int pow(int a, int b){
    //     int oupt=1;
    //     for (int i = 0; i < b; i++)
    //     {
    //         oupt*=a;
    //     }
    //     return oupt;
    // }

    // int main(){
    //     int a,b;
    //     cout<<"Please enter the numbers ;"<<endl;
    //     cin>>a>>b;
    //     cout<<"power of the given number ;"<<pow(a,b);
    //     return 0;
    // }

// function to swap two numbers

// void swap_by_temp(int a , int b){
//     int temp;
//     temp=b;
//     a=b;
//     a=temp;
//     cout<<"insidr the funciton a :"<<a<<"\t"<<"value of b ;"<<b<<endl;
//     }

// int main(){
//     int a , b;
//     cout<<"please enter the number"<<endl;
//     cin>>a>>b;
//     cout<<"the swaped numbers are;";
//     swap_by_temp(a,b);
//     cout<<a<<b;
//     return 0;
// }

// void swap_m(int*a,int*b){
//     int temp;
//     temp=*b;
//     *b=*a;
//     *a=temp;
//     cout<<"a:"<<*a<<"b:"<<*b<<endl;
// }

// int main(){
//         int a,b;
//         cout<<"enter the integers"<<endl;
//         cin>>a>>b;
//         swap_m(&a,&b);
//         cout<<a<<b;
//         }


// write a program uing functions to sort an array
#include <iostream>
using namespace std; 
void swap(int*,int*);
void sort_array(int*,int);

int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sorting "<<endl;
    sort_array(arr,n);
    cout<<"array is sorted"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}

void sort_array(int*arr,int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]<=arr[j]){
                continue;
            }
            else{
                swap(arr+i,arr+j);
            }
        }
    }
}

void swap(int*a,int*b){
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
    return;
}
