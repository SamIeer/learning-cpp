// GETTING START WITH ARRAY
#include <iostream>
using namespace std;

// int main(){
    // float arrs[3]={34.6,45.6,12.4};
    // cout<<arrs[2]<<endl;
    // arrs[1]=56.4;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<arrs[i]<<"\t"<<endl;
    // }

    // int n;
    // cout<<"enter the size of arry;"<<endl;
    // cin>>n;
    // float arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<"\t";
    // }

// return 0;
// }

// SUM OF THE ARRAY
    // void sum(int n, int*arr){
    //     int sum=0;
    //     for(int i=0;i<n;i++){
    //         sum += arr[i];
    //     }
    //     cout<<"sum of the array;"<<"\t"<<sum;
    // }

//FIND THE LARGEST NUMBER
// void largest(int n,float*arr){
//     float max=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i] > max){
//             max=arr[i];
//         }
//     }
//     cout<<max;
// }

// SEARCH THE USER INPUT NUMBER
// int find(int*arr,int targ){
//     for (int i = 0; i < sizeof(arr); i++)
//     {
//         if(arr[i]==targ){
//             return i;
//         }
//     }
//     return -1;
//     }

// REVERSING THE ARRAY
    // void reverse_arr(int n,int*arr){
    //     int rev_arr[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         rev_arr[i]=arr[n-1-i];
    //     }
    //     cout<<"the reverse array "<<endl;
    //      for (int i = 0; i < n; i++)
    //     {
    //        cout<<rev_arr[i]<<"\t";
    //     }
    // }

// ROTATING THE ARRAY TO RIGHT BY A SPECIFIED POSTION
int rotate_right(int n,int*arr,int pst){
    int rotate_arr[n];
    for (int i = 0; i < n; i++)
    {
        int new_i =(i+pst)%n;
        rotate_arr[new_i]=arr[i];
    }

    for (int i = 0; i < n; i++)
    {
       arr[i]=rotate_arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<rotate_arr[i]<<"\t";
    }
}

int main(){
    int n;
    cout<<"enter the size of the arry;"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pst;
    cout<<"enter the postion "<<endl;
    cin>>pst;
    // int targ;
    // cout<<"enter the number which you want to find :"<<endl;
    // cin>>targ;

    // sum(n,arr);
    // largest(n,arr);
    // cout<<find(arr,targ);
    // reverse_arr(n,arr);

    rotate_right(n,arr,pst);
    return 0;
}
