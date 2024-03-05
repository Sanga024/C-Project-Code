#include<iostream>
using namespace std;
int main()
{
    int arr_1[5]={10,20,30,40,50};
    int arr_2[8]={1,2,3,4,5,6,7,8};

    int newSize=arr_1[5]+arr_2[8];
    int newArr[newSize];

    for(int i=0;i<=5;++i)
    {
        newArr[i]=arr_1[i];
    }
    for(int i=0;i<=8;++i)
    {
        newArr[5+i]=arr_2[i];
    }
    cout<<"Reverse :";
    for(int i=newSize-1;i>=0;--i)
    {
        cout<<newArr[i]<<" ";
    }
    return 0;


}
