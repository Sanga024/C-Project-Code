#include<iostream>
using namespace std;
int main()
{

    int arr[10]={12,32,43,1,54,53,15,64,3,13};
    cout<<"Array in Normal Order";
    int i;
    for(i=0;i<10;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;

    cout<<"Array in reverse Order : ";
    for (i=9;i>=0;i--)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}
