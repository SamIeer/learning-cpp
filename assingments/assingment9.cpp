#include <iostream>
using namespace std;

// ANSWER1:PROGRAM TO STORE A STUDENTS DETAILS IN THE FILE
class Student{
      private:
        string name;
        int roll_no;
        float grade;
        static int total_student;
      public:
        Student(string n,float g){
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

// ANSWER2:PROGRAM TO READ CONTENT FROM THE FILE AND PRINT IT
int main(){
    ifstream inFile;
    infile.open("output.txt");
    while(!inFile.eof()){
        

    }
}