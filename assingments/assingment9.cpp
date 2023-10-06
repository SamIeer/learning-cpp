#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ANSWER1:PROGRAM TO STORE A STUDENTS DETAILS IN THE FILE
class Student{     //creating a class student for storing student details
      private:
        string name;
        int roll_no;
        float grade;
        static int total_student; //static member for counting total number of students
      public:
      Student(){
            name="";roll_no=total_student;grade=0;
            // Student::total_student++;
            }
        Student(string n,float g){
            name=n;roll_no=total_student;grade=g;
            Student::total_student++;
        }
      friend ofstream & operator << (ofstream &,Student &); //operator 
};
int Student::total_student=1;
ofstream & operator << (ofstream & file,Student & s){
          file<<s.name<<"\t";
          file<<s.roll_no<<"\t";
          file<<s.grade<<"\t";
          return file;
      }
int main(){
    cout<<"enter the number of student you want to set details of:"<<endl;
    int n;
    cin>>n;
    //object creation
    Student s[n];
    string name;float grade;
    ofstream my_file;
    my_file.open("output.txt");
    for (int i = 0; i < n; i++)
    {
      cin>>name>>grade;
      s[i]=Student(name,grade);
      my_file<<s[i]<<endl;
    }
    my_file.close();
    return 0;
}

// // ANSWER2:PROGRAM TO READ CONTENT FROM THE FILE AND PRINT IT
int main() {
    ifstream inFile;
    string line;

    inFile.open("output.txt");
    
    // checking wether file is open or not
    if (!inFile.is_open()) {
        cout << "Error opening the file." << endl;
        return 1; // Exit with an error code
    }
    
    //printing the content of file
    while (getline(inFile, line)) {
        cout << line << "\t";
    }

    inFile.close();
    return 0;
}


// question from recording
class CollegeStudent{
       private:
        string name;
        float gpa;
        int roll_no;
        string department;
        static int total;
       public:
        CollegeStudent(){
            name="";gpa=0;roll_no=total;department="";
        }
        CollegeStudent(string n,float g,string d){
            name=n;gpa=g;department=d;roll_no=total;
            CollegeStudent::total++;
        }

        friend ofstream & operator << (ofstream &,CollegeStudent &);
};
int CollegeStudent::total=1;
int main(){
    CollegeStudent c1("tanny",8,"mechs");
    CollegeStudent c6("sameer",10,"Cse");
    CollegeStudent c7("rohit",7,"mtech");
    ofstream my_file;
    my_file.open("output.txt",ios::app);
    my_file<<c6<<c7;
    my_file.close();
    return 0;
}
ofstream & operator << (ofstream & out,CollegeStudent & s){
         out<<"----------------"<<endl;
         out<<"name :"<<s.name<<endl;
         out<<"Roll_no :"<<s.roll_no<<endl;
         out<<"department :"<<s.department<<endl;
         out<<"GPA :"<<s.gpa<<endl;
         return out;
}

