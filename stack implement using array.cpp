#include<iostream>
using namespace std;
    int stack[5];
	int top=0;
 void push(int x)
{  
   if(top==5)
    {
	cout<<"your stack is full";
    }
	else
    { 
	stack[top]=x;
	cout<<"your posh element is "<<stack[top];
	top++;
    }
}
  void pop()
{
  if(top>=0)
  {
  	cout<<"the pop elemen is "<<stack[top];
  	top--;
  }
  else
  {
  	cout<<"your stack is empity";
  }
}
 void peak()
{    top--;
	cout<<"\nyour peak element is "<<stack[top];
}
 void display()
{
	for(int i=top;i>=0;i--)
	{
		cout<<stack[i]<<endl;
	}
}
int main()
{ 
push(70);
push(90);
push(44);
peak();
pop();
display();
}

