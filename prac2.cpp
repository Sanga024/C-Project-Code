#include<iostream>
#include<queue>
using namespace std;

class Queue{
private:
    queue<int>q;
public:
    void enqueue(int x){
    q.push(x);
    }
    int dequeue()
    {
        if(!q.empty())
        {
            int front=q.front();
            q.pop();
            return front;
        }
        else
        {
            cout<<"Queue Is Empty"<<endl;
            return -1;
        }
    }
    int peek()
    {
        if(!q.empty())
        {
            return q.front();
        }
        else{
            return -1;
        }
    }
    int size()
    {
        return q.size();
    }
    bool isEmpty()
    {
        return q.empty();
    }





};



int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<"Queue : ";
    while(!q.isEmpty())
          {
                cout<<q.dequeue()<<"  ";

          }
    cout<<endl;
    q.enqueue(4);
    q.enqueue(5);
    cout<<"Front Of The Queue : "<<q.peek()<<endl;
    cout<<"Size Of Yhe Queue : "<<q.size()<<endl;
    return 0;

}

