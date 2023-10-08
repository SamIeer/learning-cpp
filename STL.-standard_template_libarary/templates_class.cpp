// Templates,function and classes

// Templates in C++ are a powerful feature that allow you to write generic code to work with different data types. 
// They enable you to create functions and classes that can operate on a variety of 
// data types without the need to write separate code for each type.
//  Templates are a form of compile-time polymorphism
#include <iostream>
using namespace std;

template <class T>
T num_max(T a, T b) {
    return (a > b) ? a : b;
}

template <class i,class f>
f mul(i a,f b){
    return a*b;
}
int main() {
    int a = 4, b = 6;
    cout << num_max<int>(a, b) << endl;
    cout<< num_max<float>(3.5,5.7)<<endl;
    cout<< mul<int,float>(49,6.7)<<endl;
    return 0;
}



