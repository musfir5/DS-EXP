#include<iostream>
using namespace std;



template <class T> class QueueADT
{
int size, front, rear;
T queue[10];
public:
QueueADT();
void isFull();
void isEmpty();
void Insert(T data);
T Delete();
};

template <class T> QueueADT <T> :: QueueADT()
{
size=5;
front=rear=0;
}

template <class T> void QueueADT  <T> :: isEmpty(){

    if(rear==front){

        cout<<"que is empty\n";
    }else 
    {
        cout<<"not empty\n";
    }
    
}


template <class T> void QueueADT <T>:: isFull(){

    if (rear==size)
    {
        cout<<"que is full\n";

    }else{

        cout<<"is not full\n";
    }
    

}

template <class T> void QueueADT <T> :: Insert(T data)
{
if(rear==size)
{
cout << "..........Queue FULL..!! MSG from Insert(T data)";

}
else
{
rear=rear+1;
queue[rear]=data;
}
}

template <class T> T QueueADT <T> :: Delete()
{
int data;
if(rear==front)
{
cout << "..........Queue EMPTY..!! MSG from Delete()";
}
else
{
front=front+1;
data=queue[front];
}
return(data);
}

main()
{
int ch;
int t;
int y;
QueueADT <int> que;
do
{
cout <<"\n 1 isfull \n 2 isempty \n 3.Insert \n 4.Delete \n 5.Exit \n Enter Choice ? ";
cin >> ch;
switch(ch)
{

 case 1:
            que.isFull();
            break;
        case 2:
            que.isEmpty();
            break;



case 3:
cout <<"Enter Data ? ";
cin >> y;
que.Insert(y);
break;
case 4:
t=que.Delete();



cout << "Deleted Data = " << t;
break;
case 5:
exit(0);
}
} while (ch!=5);
return (0);
}