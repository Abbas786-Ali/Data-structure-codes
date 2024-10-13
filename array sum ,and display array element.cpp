#include<iostream>
using namespace std;
int main()
{ int R,C;
  int sum=0;
 cout<<"enter the number of row you want to enter in array = ";
 cin>>R;
 cout<<"enter the number of columbe you want to enter in array = ";
 cin>>C;
 int array[R][C];
 cout<<"\t\tenter the elaement in your array\n";
  for(int i=0;i<R;i++)
  { 
  	for(int j=0;j<C;j++)
  	 { cout<<"enter the "<<i+1<< " row and " <<j+1<< " colume element  = ";
  	 	cin>>array[i][j];
	   }cout<<endl;
  }
  int arrayelement;
  cout<<"your array elements is here = \n";
  for(int i=0;i<R;i++)
  {
  	for(int j=0;j<C;j++)
  	 {    arrayelement=array[i][j];
  	 	cout<<arrayelement<<" ";
	   } cout<<endl;
  }
  for(int i=0;i<R;i++)
  { 
  	for(int j=0;j<C;j++)
  	{
  	 	sum+=array[i][j];
  }
	   }
	cout<<"sum of your array element is =  "<<sum<<endl; 
return 0;
}

