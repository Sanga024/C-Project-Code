#include<iostream>
using namespace std;
class MyStack{
    int *Stack;
    int Top;
    int MaxSize;

public:
    MyStack(int size)
    {
        MaxSize=size;
        Stack=new int [MaxSize];
        Top=-1;
    }
    MyStack()
    {
        delete[]Stack;
    }
    bool isEmpty()
    {
        return(Top==-1);
    }
    bool isFull()
    {
        return(Top==MaxSize-1);
    }
    bool push(int x)
    {
        if(isFull())
        {
            cout<<"Stack Overflow"<<endl;
            return false;
        }
        Stack[++Top]=x;
        cout<<x<<endl;
        return true;
    }
    bool pop()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow"<<endl;
            return false;
        }
        cout<<Stack[Top--]<<endl;
        return true;
    }
    bool topElements()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return false;
        }
        cout<<"Top Of The element :"<<Stack[Top]<<endl;
        return true;
    }
    void show()
    {
        if(isEmpty())
        {
            cout<<"Empty"<<endl;
            return;

        }
        for(int i=0;i<=Top;i++)
        {
            cout<<Stack[i]<<" ";
        }
        cout<<endl;

    }







};
int main()
{
    MyStack stack(5);
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.show();
    stack.push(60);
    stack.pop();
    stack.pop();
    stack.show();
    return 0;

}
