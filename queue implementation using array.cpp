#include<iostream>
using namespace std;
int queue[5];
int front=0;
int rear=0;
void enqueue(int x)
{ if(rear==5)
{ cout<<"your queue  is full";
}
 else
   { 
   queue[rear]=x;
   rear++;
   }
 	
}
void dequeue()
{
	if(front==rear)
	{ cout<<"your queue is empity";
	}
	else
	{
		cout<<"your dequeo element is "<<queue[rear-1]<<endl;
		rear--;
	}
}
void display()
{
	for(int i=front;i<rear;i++)
	{ cout<<"your queue elemant is "<<queue[i]<<endl;
	}
}
int main()
{ 
enqueue(90);
enqueue(78);
enqueue(12);
enqueue(45);
enqueue(88);
//enqueue(16);
display();
dequeue();

return 0;
}

