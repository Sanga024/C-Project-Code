#include<iostream>
using namespace std;

class MyStack{
    int *Stack;
    int top;
    int MaxSize;

public:
    MyStack(int size)
    {
        MaxSize=size;
        Stack= new int[MaxSize];
        top=-1;
    }


bool isEmpty()
{
    return(top==-1);

}
bool isFull()
{
    return(top==MaxSize-1);
}
bool push(int x)
{
    if(isFull())
    {
        cout<<"Stack OverFlow";
        return false;
    }
    Stack[++top]=x;
    cout<<x<<" "<<endl;
    return true;
}
bool pop(){


    if(isEmpty())
    {
        cout<<"UnderFlow";
        return false;

    }
    cout<<Stack[top--];
    return true;
}
bool TopElement()
{
    if(isEmpty())
    {
        cout<<"Stack Empty"<<endl;
        return false;
    }
    cout<<Stack[top]<<endl;
}
void show()
{
    if(isEmpty())
    {
        cout<<"Stack Empty";
        return ;
    }
    cout<<"Elements";
    for(int i=0;i<=top;i++)
    {
        cout<<Stack[i]<<" ";
    }
    cout<<endl;
}







};
int main()
{
    MyStack stack(5);

    stack.push(12);
    stack.push(13);
    stack.push(14);
    stack.push(15);
    stack.push(16);
    stack.show();
    stack.push(60);

    stack.pop();
    stack.pop();
    stack.show();
    stack.TopElement();
    return 0;



}
