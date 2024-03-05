#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int evenC=0,oddC=0;

    cout<<"Enter The Elements :";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;


    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            evenC++;
        }
        else
        {
            oddC++;
        }
    }
    cout<<"Even Numbers :"<<evenC++<<endl;
    cout<<"ODD Numbers : "<<oddC++;
    return 0;


}
