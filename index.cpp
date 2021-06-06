#include<iostream>
using namespace std;
#include<conio.h>
class Volume
{
 float V;
public:
 void cylinder()
 {
  float r,h;
  cout<<"Enter radius & height of cylinder"<<endl;
  cin>>r>>h;
  V=3.14*r*r*h;
 }
 void sphere()
 {
  float r;
  cout<<"Enter radius of sphere"<<endl;
  cin>>r;
  V=(4*3.14*r*r*r)/3;
 }
 void cone()
 {
  float r,h;
  cout<<"Enter radius & height of cone"<<endl;
  cin>>r>>h;
  V=(3.14*r*r*h)/3;
 }
 void display()
 {
  cout<<"Volume is = "<<V<<endl;
 }
};
int main()
{
 while(1){
  int ch,q;
  Volume ob;
  cout<<"Select the shape for calculate volume"<<endl<<endl;
  cout<<"Press 1 for select CYLINDER"<<endl;
  cout<<"Press 2 for select SPHERE"<<endl;
  cout<<"Press 3 for select CONE"<<endl<<endl;
  cin>>ch;
  cout<<endl;
   switch(ch)
     {
         case 1: ob.cylinder();break;
         case 2: ob.sphere();break;
         case 3: ob.cone();break;
         default: cout<<"Wrong input";
          
     }
  if(ch>=1 && ch<=3)
   ob.display();
	cout<<"press any key to countinue... / press 0 to EXIT"<<endl<<endl;
   q=getch();
  
  if(q==48){
   return 0;
  }
  
 }   
}