#include<iostream>
using namespace std;
int main()
{
    int arr1[10]={8,4,6,1,6,9,6,1,9,8};
    int num;
    cout<<"Enter a Num to Check :";
    cin>>num;

    int occurs=0;
    for(int i=0;i<10;++i)
    {
        if(arr1[i]==num)
        {
            occurs++;
        }


    }
    cout<<"The Number"<<num<<"Occurs"<<occurs<<"Times In the Array";
    return 0;
}
