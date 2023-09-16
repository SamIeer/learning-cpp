//ANSWER1 ;PRINT ALL THE DUPICATES OF THE INPUT STRING
// #include <iostream>
// #include <string>
// #include <unordered_map>
// using namespace std;

// int main(){
//     string inpt; //initalising the string
//     cout<<"enter the string:";
//     cin>>inpt;   //TAKING THE STRING FROM THE USER

//     //CREATE AN UNORDERED MAP TO STORE AND COUNT CHARACTERS
//     unordered_map<char ,int>charcount;
//     for (char ch : inpt) //ITERATING THROUGH THE STRING
//     {   
//     charcount[ch]++;
//     }
//     bool isduplicate=false;
//     //ITERATE THROUGH THE UNORDERED MAP TO FIND AND PRINT DUPLICATE
//     for ( const auto& pair : charcount) 
//     {
//         if(pair.second > 1){
//             cout<<"duplicate char: "<<pair.first<<" ,count :"<<pair.second<<endl;
//             isduplicate=true;
//         }
//     }
//     if(!isduplicate){
//             cout<<"NO DUPLICATE CHARACTER FOUND...."<<endl;
//         }
//     return 0;
// }

// ANSWER 2 ;TO CHECK WETHER THE GIVEN CHARACTER PRESENT IN THE STRING
// #include <iostream>
// using namespace std;
//  int main(){
//     string inpt;
//     char elem;
//     cout<<"enter the string:";
//     cin>>inpt;
//     cout<<"enter the charecter :";
//     cin>>elem;
//     int n = inpt.length();      //TAKING THE LENGTH OF THE STRING
//     bool isfound=false;          //INITIALING A BOOOLEN TO CHECKH WETHER 
//     for (int i = 0; i < n; i++)  //ITERATING THE STRING TO AND COMPARING THE CHARACTER 
//     {
//         if (inpt[i]==elem)
//         {
//             cout<<"THE CHAR PRESENT IN THE STRING AT POSTION ;"<<i<<endl;
//             isfound=true;}
//     }
//     if(!isfound){
//         cout<<"ELEMENT ISN'T PRESENT IN THE STRING";}
//    return 0;
// }


 // ANSWER 3 ;TO COUNT THE VOWELS AND CONSONENT IN THE STRING;
#include <iostream>
#include <string>
using namespace std;
int main(){
    string inpt;
    int vows=0 , cons=0;
    cout<<"enter the string:";
    cin>>inpt;
    int n = inpt.length();
    cout<<"SIZE OF THE ARRAY ;"<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        if (inpt[i]=='a'||inpt[i]=='e'||inpt[i]=='i'||inpt[i]=='o'||inpt[i]=='u')//for identifing wheter the character is a vowel
        {
            vows+=1; }
            else {            //for identifing wheter the character is a consonent
            cons+=1; }
    }
    cout<<"VOWELS"<<"\t"<<"CONCONENTS"<<endl;
    cout<<vows<<"\t"<<cons<<endl;

    return 0;}