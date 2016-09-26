#include<iostream>
using namespace std;

class shape
{
 public:
 void circle(float r)
 {
  float c=3.14*r*r;
  cout<<"Area of given circle is "<<c;
 }
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
 void square(float s)
 {
  float sq=s*s;
  cout<<"Area of given square is "<<sq;
 }
};

class a1:public shape
{
 public:
 void getcir()
{float r;
 cout<<"\nEnter the radius of the circle\t";
 cin>>r;
 circle(r);
}
};
class a2:public shape
{
public:
void gettri()
{
 int b,h;
 cout<<"\nEnter the base and height of the triangle\t";
 cin>>b>>h;
 triangle(b,h);
}
};

class a3:public shape
{
public:
void getrect()
{
 float l,b;
 cout<<"\nEnter the length and breadth of a rectangle\t";
 cin>>l>>b; 
 rect(l,b);
}
};

class a4:public shape
{
public:
void getsq()
{float s;
 cout<<"\nEnter the side of the square\t";
 cin>>s;
 square(s); 
}
};

int main()
{
 a1 ob1;
 ob1.getcir();
 a2 ob2;
 ob2.gettri();
 a3 ob3;
 ob3.getrect();
 a4 ob4;
 ob4.getsq();
}
