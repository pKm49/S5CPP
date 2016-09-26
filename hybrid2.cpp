#include<iostream>
using namespace std;

class shape1
{
 public:
 void circle(float r)
 {
  float c=3.14*r*r;
  cout<<"Area of given circle is "<<c;
 }
};
class shape2:public shape1
{
public:
void triangle(float b,float h)
 {
  float t=0.5*b*h;
  cout<<"Area of given triangle is "<<t;
 }
 void rect(float l,float b)
 {
  float re=l*b;
  cout<<"Area of given rectangle is "<<re;
 }
};
class shape3
{
public:
void square(float s)
 {
  float sq=s*s;
  cout<<"Area of given square is "<<sq;
 }
};
class area:public shape2,public shape3
{
public:
 void getcir()
{float r;
 cout<<"\nEnter the radius of the circle\t";
 cin>>r;
 circle(r);
}
void gettri()
{
 int b,h;
 cout<<"\nEnter the base and height of the triangle\t";
 cin>>b>>h;
 triangle(b,h);
}
void getrect()
{
 float l,b;
 cout<<"\nEnter the length and breadth of a rectangle\t";
 cin>>l>>b; 
 rect(l,b);
}
void getsq()
{float s;
 cout<<"\nEnter the side of the square\t";
 cin>>s;
 square(s); 
}
};
int main()
{
 area ob;
 ob.getcir();
 ob.gettri();
 ob.getrect();
 ob.getsq();
}
