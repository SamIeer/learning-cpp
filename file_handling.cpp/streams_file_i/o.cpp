//
#include <iostream>
#include <fstream>
using namespace std;

// FOR INSERITNG DATA INTO THE FILE
// int main(){
//     ofstream my_file;
//     my_file.open("output.txt",ios::app);
//     my_file<<"hello file"<<endl;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         my_file<<i*i<<endl;
//     }
//     my_file.close();
//     return 0;
// }

// FOR READING FROM A FILE
// int main(){
//     ifstream my_file;
//     my_file.open("output.txt");
//     int a;
//     while(!my_file.eof()){
//         my_file>>a;
//         cout<<a;
//     }
//     cout<<"heleeo";
//     my_file.close();
//     return 0;
// }

// STUDENT DETAILS
class Student{
      private:
        string name;
        int roll_no;
        float grade;
        static int total_student;
      public:
        Student(string n,int roll_no,float g){
            name=n;roll_no=total_student;grade=g;
            Student::total_student++;
        }
      friend ofstream & operator << (ofstream &,Student &);
};
      
int Student::total_student=1;
ofstream & operator << (ofstream & file,Student & s){
          file<<s.name<<"\t";
          file<<s.roll_no<<"\t";
          file<<s.grade<<"\t";
          return file;
      }

int main(){
    Student S1("sameer",90.5);
    Student s2("mohit",45.6);
    ofstream my_file;
    my_file.open("output.txt");
    my_file<<S1;
    my_file<<s2;
    my_file.close();
    return 0;

}

