#include <iostream>
#include <fstream>
using namespace std;

// ANSWER1:PROGRAM TO STORE A STUDENTS DETAILS IN THE FILE
// class Student{
//       private:
//         string name;
//         int roll_no;
//         float grade;
//         static int total_student;
//       public:
//       Student(){
//             name="";roll_no=total_student;grade=0;
//             // Student::total_student++;
//             }
//         Student(string n,float g){
//             name=n;roll_no=total_student;grade=g;
//             Student::total_student++;
//         }
//       friend ofstream & operator << (ofstream &,Student &);
// };
      
// int Student::total_student=1;
// ofstream & operator << (ofstream & file,Student & s){
//           file<<s.name<<"\t";
//           file<<s.roll_no<<"\t";
//           file<<s.grade<<"\t";
//           return file;
//       }

// int main(){
//     cout<<"enter the number of student you want to set details of:"<<endl;
//     int n;
//     cin>>n;
//     //object creation
//     Student s[n];

//     string name;float grade;
//     ofstream my_file;
//     my_file.open("output.txt");
//     for (int i = 0; i < n; i++)
//     {
//       cin>>name>>grade;
//       s[i]=Student(name,grade);
//       my_file<<s[i]<<endl;
//     }
//     my_file.close();
//     return 0;
// }

// // ANSWER2:PROGRAM TO READ CONTENT FROM THE FILE AND PRINT IT
int main(){
    ifstream inFile;
    string a;
    inFile.open("output.txt");
    while(!inFile.eof()){
         inFile>>a;
         cout<<a;
    }
    return 0;
}