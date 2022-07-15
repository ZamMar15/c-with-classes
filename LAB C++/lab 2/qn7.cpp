 #include <iostream>
 using namespace std;
 void area ();
 int area (int,int);
 float area (float);
 int main (){
     int l,b;
     int r;
     area();
     cout<<"enter the length and breadth"<<endl;
     cin>>l>>b;
     cout<<"the area of rectangle is:"<<area(l,b)<<endl;
     cout<<"enter the radius"<<endl;
     cin>>r;
     cout<<"the area of circle is:"<<area(r)<<endl;
     return 0;
 }
 void area(){
     int x;
     cout<<"the length of square is "<<endl;
     cin>>x;
     cout<<"the area of square is:"<<x*x<<endl;
 }
 int area (int c,int d){
     return c*d;
 }
 float area (float e){
     return (3.14*e*e);
 }