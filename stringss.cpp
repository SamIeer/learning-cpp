#include <iostream>
#include <string>
using namespace std;
// main(){
//     string name = "sameer";
//     cout<<name<<'\t';
//     string lastname = "chauhan";
//     cout<<lastname<<endl;

//     string fullname = name + lastname;

//     cout<<fullname.length()<<'\t';
//     cout<<name.size()<<endl;

//     // fullname = name.append(lastname);
//     // cout<<fullname;

//     cout<<name[8]<<'  '<<name[4]<<endl;
    
//     name[0] = 'X';
//     cout<<name<<endl;

//     cout<<"fill the blanks"<<endl;
//     string place,color,song;
//     cin>>place>>color>>song;
//     cout<<"My fav place is "<<place<<", fav color is "<<color<<", fav song is "<<song;

//     return 0;
// }

int main(){
    string user_inpt;
    cout<<"please enter the string"<<endl;
    cin>>user_inpt;
    int len = user_inpt.length();
    char rev_len[len];
    for(int i=0;i<len;i++){
        rev_len[i]=user_inpt[len-1-i];
    }
    bool is_palindrome = true;
    for(int i=0;i<len;i++){
        if(rev_len[i]==user_inpt[i]){
            continue;
        }
        else{
            is_palindrome = false;
            break;
        }}

    if(is_palindrome){
        cout<<"The given string "<<user_inpt<<" is a palindrome"<<endl;
    }
    else{
         cout<<"The given string "<<user_inpt<<" isn't palindrome"<<endl;
    }
    
}




