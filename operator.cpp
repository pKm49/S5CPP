
#include<iostream>
using namespace std;
class complex
{
   int real,img;
   public:
   void getdata()
   {
        cout<<"Enter the real and imaginary part\n";
        cin>>real>>img;
        cout<<real<<"+"<<img<<"i";
   }
   void display()
   {
        cout<<real<<"+"<<img<<"i";
   }
   complex operator+(complex c1)
   {
      complex c2;
      c2.real=c1.real+real;
      c2.img=c1.img+img;
      return c2;
   }
};  
int main()
{
   complex b1,b2,b3;
   cout<<"Enter first number\n";
   b1.getdata();
   cout<<"\nEnter second number\n";
   b2.getdata();
   b3=b1+b2;
   cout<<"\nSum =";
   b3.display();
   return 0;
}

      
