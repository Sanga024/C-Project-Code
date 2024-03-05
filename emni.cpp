#include<iostream>
using namespace std;

int main()
{

    int mimo[10]={32,6,3,6,7,1,6,4,8,9};

    int n;
    cout<<"Enter The Number u Wanna Search : "<<endl;
    cin>>n;
    int i;
    for( i=0;i<10;i++)
    {
        if(n==mimo[i])
        {
            break;
        }
    }

   if(i<10)
   {
       cout<< n << "was found in index" << i <<"Of the array"<<endl;
   }
   else
   {
       cout<<n<<"was not found"<<endl;
   }
   return 0;
}


