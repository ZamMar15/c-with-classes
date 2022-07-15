 #include <iostream>
 using namespace std;
 void volume ();
 int volume (int,int,int);
 float volume (float,float);
 int main (){
     int l,w,h;
     int r;
     volume();
     cout<<"enter the length, width and height"<<endl;
     cin>>l>>w>>h;
     cout<<"the volume of cuboid is:"<<volume(l,w,h)<<endl;
     cout<<"enter the radius and height"<<endl;
     cin>>r>>h;
     cout<<"the volume cylinder  is:"<<volume(r,h)<<endl;
     return 0;
 }
 void volume(){
     int x;
     cout<<"the edge of cube is "<<endl;
     cin>>x;
     cout<<"the volume of cube is:"<<x*x<<endl;
 }
 int volume (int c,int d,int e){
     return c*d*e;
 }
 float volume (float f,float g){
     return (3.14*f*f*g);
 }