#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string>lang;

    lang.push("Python");
    lang.push("java");
    lang.push("C++");

    int size=lang.size();
    cout<<"The Length Of the Queue :"<<size;
    return 0;
}
