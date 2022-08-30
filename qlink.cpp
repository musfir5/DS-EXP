#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
class Queue{
	public:
	Node *front,*rear;
	Queue()
	{
		front=rear=NULL;
	}
	void insert(int n);
	void deleteitem();
	void display();
	~Queue();
};
void Queue::insert(int n)
{
	Node *temp=new Node;
	if(temp==NULL)
	{
		cout<<"Overflow"<<endl;
		return;
	}
	temp->data=n;
	temp->next=NULL;
	if(front==NULL)
	{
		front=rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=temp;
	}
	cout<<n<<" has been inserted successfully."<<endl;
}
void Queue::display()
{
	if(front==NULL)
	{
		cout<<"Underflow."<<endl;
		return;
	}
	Node *temp=front;
	while(temp)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void Queue :: deleteitem()
{
	if (front==NULL)
	{
		cout<<"underflow"<<endl;
		return;
	}
	cout<<front->data<<" is being deleted "<<endl;
	if(front==rear)
	front=rear=NULL;
	else
	front=front->next;
}
Queue ::~Queue()
{
	while(front!=NULL)
	{
		Node *temp=front;
		front=front->next;
		delete temp;
	}
	rear=NULL;
}
int main(){

int ch,  value;
Queue s;
	do
	{
		cout<<"\n1.insert \n2.delete \n3.display \n4.exit\n\n\nenter choice\n";
		cin>>ch;
		switch (ch)
		{
			case 1: cout<<"Enter Value:\n";
				cin>>value;
				s.insert(value);
				break;
			case 2:s.deleteitem();
				break;
			case 3: s.display();
				break;
			
			case 4: exit(0) ;
				break;
		}
	
		
	}while(ch!=4);
	return 0;
}



