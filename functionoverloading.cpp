
#include<iostream>
using namespace std;
class find_volume
{
    public:
    float ar;
    void volume(float a)
    {
        ar=a*a*a;
        cout<<"volume="<<ar;
    }
    void volume(float a,float b)
    {
        ar=0.3333*3.14*b*a*a;
        cout<<"volume="<<ar;
    }
    void volume(float a,float b,float c)
    {
        ar=a*b*c;
        cout<<"volume="<<ar;
    }
}ob;



int main()
{
  float c,l,b,r,h;
  int ch;
  do
  {  
    
    cout<<"\nEnter your choice :\n";
     cout<<"1.Operations \t2.Exit\n";
     cin>>c;
     if(c==1)
     {
          cout<<"\n1.Cube ";
          cout<<"\n2.Cone";
          cout<<"\n3.Cuboid";
          
          cout<<"\nEnter your choice\n";
          cin>>ch;
          switch(ch)
          {
                case 1:cout<<"Enter the side of cube:\n";
                       cin>>l;
                       ob.volume(l);
                         break;
                case 2:cout<<"Enter the radius and height of cone\n";
                       cin>>r>>h;
                       ob.volume(r,h);
                         break;
                case 3:cout<<"Enter the length breadth height of the cuboid\n";
                       cin>>l>>b>>h;
                       ob.volume(l,b,h);
                         break;
                default:cout<<"Invalid choice\n";
                         break;
           }
    }
  }
  while(c!=2);
  return 0;
}











/*Output
Enter your choice :
1.Operations 	2.Exit
1

1.Cube 
2.Cone
3.Cuboid
Enter your choice
1
Enter the side of cube:
6
volume=216
Enter your choice :
1.Operations 	2.Exit
1

1.Cube 
2.Cone
3.Cuboid
Enter your choice
2
Enter the radius and height of cone
3
4
volume=37.6762
Enter your choice :
1.Operations 	2.Exit
1

1.Cube 
2.Cone
3.Cuboid
Enter your choice
3
Enter the length breadth height of the cuboid
2
3
4
volume=24
Enter your choice :
1.Operations 	2.Exit
2
*/

