#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3;
    float a,b,c,s,area;
    cout<<"Enter the points respectively (x and y):"<<endl;
    cin>>x1>>y1;
     cin>>x2>>y2;
      cin>>x3>>y3;

      a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
      b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
      c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
      
      s=(a+b+c)/2;
      cout<<a<<endl;
      cout<<b<<endl;
      cout<<c<<endl;
      area=sqrt(s*(s-a)*(s-b)*(s-c));
      cout<<"area of the triangle:"<<area;
      if(!area){
        cout<<"area of the triangle is invalid"<<endl;
      }
      else{
          cout<<"area of the triangle is valid"<<endl;
      }
      
    return 0;
}
