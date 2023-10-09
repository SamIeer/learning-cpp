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

template <class R>
class Matrix{
    public:
    R mtr[3][3]; // A MATRIX TYPE R
    // CONSTRUCTOR TO  INITLIAZE THE MATRIX ELEMENTS
    Matrix(){
        for(int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                mtr[i][j]=R();//INITIALIZE WITH DEFAULT VALUES (0 FOR NUMERIC TYPES)
            }
        }
    }

    //FUNCTION TO TO INSERT ELEMENTS INTO THE MATRIX
    void insert(int row,int col,R value){
        if(row>=0 && row <3 && col >= 0 && col < 3){
            mtr[row][col] = value;
        } else {
            cout << "invalid row or column " << endl;
        }
    }
    
    //FUNCTION TO PRINT THE MATRIX
    void print(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<mtr[i][j]<<"\t";
            }
            cout << endl ;
        }
    }
};

int main(){
    Matrix<int> x;//CREATE A MATRIX OF INTERGERS
    Matrix<float> y;
    
    //INSERTING ELEMENTS INTO THE MATRIX
    x.insert(0,0,1); //INSERT 1 AT (0,0)
    x.insert(0,1,2); //INSERT 2 AT (0,1)
    x.insert(0,2,4); //Insert 4 AT (0,2)
    x.insert(1,0,3); //INSERT 3 AT (1,0)
    // x.insert(1,1,4);
    
    //PRINT THE MATRIX
    x.print();
    cout << x.mtr[0][0] << " " << x.mtr[0][1] << endl;
    cout << x.mtr[1][0] << " " << x.mtr[1][1] << endl;
    return 0; 
}



