//STL : STL, or the Standard Template Library, is a powerful and essential part of the C++ Standard Library.
// It provides a collection of generic algorithms, containers, and functions that allow you to work with data structures efficiently. 
//STL plays a crucial role in simplifying many common programming tasks in C++.

//algorthms(functions)
   //merge sort ,quick sort, tree, heap......
//containers (data structure)
  //vectors ,list (linked list-doubly),forward list,tree,map
//iterators
  //.begin(), .end()
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
//VECTOR INSERTION AND DELETION 
  vector<int>arr_vec; //size - 10, (10,0)default all elements are 0
//push back-insertion
  int temp;
  arr_vec.push_back(43); //size-1,
  cin>>temp;
  arr_vec.push_back(temp); //size-2,
  arr_vec.push_back(56); //size-3,
//pop_back-deletion
  arr_vec.pop_back(); //size-2

//for the demonstration of itterator .begin() and .end()
vector <int> arr_vec{3,908,5,7,99,86};
  for(int i=0;i< arr_vec.size();i++){
    cout<<arr_vec[i] << endl;
  }
  cout<< "sorting...."<<endl;
  sort(arr_vec.begin(),arr_vec.end());//address of the first and last element
   for(int i=0;i< arr_vec.size();i++){
    cout<<arr_vec[i] << endl;}

//demonstraton of reverse in string
string s = "testing";

cout<<s<<endl;

sort(s.begin(),s.end());
cout<<s<<endl;
reverse(s.begin(),s.end());
cout<<s<<endl;

  return 0;
}