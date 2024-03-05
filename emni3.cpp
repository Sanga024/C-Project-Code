#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter Numbers : ";
    for(int i =0;i<10;i++)
    {
        cin>>arr[i];
    }


    int oddCount=0,evenCount=0;
    int i;
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    cout<< oddCount << "Odd Numbers" <<endl;
    cout<< evenCount << "Even Numbers" <<endl;
    return 0;
}
