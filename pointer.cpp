#include<iostream>
using namespace std;
int main()
{

   struct student
   {
       int roll;
       string name;
       int age;
   };
   struct student stu[5];
   for(int i=0;i<5;i++)
   {
       cout<< "Student" << i+1 <<endl;
       stu[i].roll=i+1;
       cout<<"Enter Name : "<<endl;
       cin>>stu[i].name;
       cout<<"Enter Age : "<<endl;
       cin>>stu[i].age;
   }
   for(int i=0;i<5;i++)
   {
       if(stu[i].roll==2)
       {
           cout<<"Student"<<i+1<<endl;
           cout<<"ROll : "<<stu[i].roll<<endl;
           cout<<"Name : "<<stu[i].name<<endl;
       }
   }









    return 0;
}
