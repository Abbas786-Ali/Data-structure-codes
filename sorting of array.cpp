#include<iostream>
using namespace std;
int main()
{ int n,tamp;  
cout<<"enter the size of your array\n";
cin>>n;
int array[n];
cout<<"enter the element in your array\n";
for(int i=0;i<n;i++)
{
	cin>>array[i];
}
for(int i=0;i<n;i++)
{ for(int j=i+1;j<n;j++)
  {
   if(array[i]>array[j])
    {
   	  tamp=array[i];
   	 array[i]=array[j];
   	 array[j]=tamp;
    }	
  }
}
cout<<"your array element after sorting ";
for(int i=0;i<n;i++)
{
	cout<<array[i]<<",";
}
return 0;
}

