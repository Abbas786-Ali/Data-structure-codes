#include<iostream>
using namespace std;
int main()
{ int R,C;
  int sum=0;
 cout<<"enter the number of row you want to enter in square array = ";
 cin>>R;
 cout<<"enter the number of columbe same row number in square array = ";
 cin>>C;
 int array[R][C];
 cout<<"\t\tenter the elaement in your square array array\n";
  for(int i=0;i<R;i++)
  { 
  	for(int j=0;j<C;j++)
  	 { cout<<"enter the "<<i+1<< " row and " <<j+1<< " colume element  = ";
  	 	cin>>array[i][j];
	   }cout<<endl;
  }
  cout<<"your square array elements is here = \n";
  for(int i=0;i<R;i++)
  {
  	for(int j=0;j<C;j++)
  	 {    cout<<array[i][j]<<" ";
	   } cout<<endl;
  }
 
	int first_diagonal_sum=0;
	int second_diagonal_sum=0;
for(int i=0;i<R;i++)
  { 
  	first_diagonal_sum+=array[i][i];
  	second_diagonal_sum+=array[i][R-i-1];
  	   }
	cout<<"sum of left diagonal is = "<<first_diagonal_sum<<endl;
	cout<<"sum of right diagonal is = "<<second_diagonal_sum;
return 0;
}

