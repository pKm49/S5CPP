#include<iostream>
using namespace std;
template<class bbl>
void buble(bbl a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				bbl tmp;
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}	
	}
}
int main(){
	int nm[100],a,i;
	cout<<"Enter the number of elements";
	cin>>a;
	cout<<"Eneter the elements";
		for(i=0;i<a;i++){
			cin>>nm[i];
		}
	buble (nm,a);
	cout<<"The sorted array is";
	for(i=0;i<a;i++){
		cout<<nm[i]<<"\n";
	}
}	
