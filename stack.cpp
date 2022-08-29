#include<iostream>
using namespace std;

template<class T> class stackADT{

    int top,max;
    T stack [10];
  public:
    stackADT();
    int isFull();
    int isEmpty();
    void push(T data);
    int pop();
    void showstack();

};

template <class T> stackADT <T> :: stackADT(){

    max=5;
    top=0;
}

template<class T> int stackADT <T> :: isFull(){

    if (top==max)
    {
        cout<<"stack is full\n";
        return 1;

    }else{

        cout<<"stack is not full\n";
        return 0;
    }
    
}

template <class T> int stackADT <T> :: isEmpty(){

    if (top==0)
    {
        cout<<"stack is empty\n";
        return 1;
    }else{

        cout<<"stack is not empty\n";
        return 0;

    }
    
}


template <class T> void stackADT <T> ::push(T data){

    if(isFull()){

        cout<<"stack is full -----push\n";
    }else{

        top=top+1;
        stack[top]=data;

    }
}

template <class T> int stackADT <T> :: pop(){

    int data;

    if (isEmpty())
    {
        cout<<"stack is empty ---------pop\n";

    }else{

        data=stack[top];
        top=top-1;
    }
    return data;
    
}

template <class T> void stackADT<T> :: showstack(){

    if (isEmpty())
    {
        cout<<"stack is empty ---show\n";
    }else{

        for(int i=top;i>0;--i){

            cout<<"===="<<stack[i]<<endl;
        }
    }
    
}


int main(){


    int ch;
    stackADT <int> st;

    int x,t;

    do{

        cout<<"1 for push \n 2 for pop \n 3 showstack \n 4 exti" <<endl;
        cout<<"enter the option\n";
        cin>>ch;

        switch (ch)
        {
        case 1:
            cout<<"enter the data \n";
            cin>>x;
            st.push(x);
            break;
        case 2:
            t=st.pop();
            cout<<"data poped = "<<t;
            break;

        case 3:
            st.showstack();
            break;

        case 4:
            exit(0);
            break;
       
        }


    }while (ch!=4);
   
    
}