#include<iostream>
using namespace std;
int main()
{
   int mark,total;
   int sum=0;
   cout<<"Enter the toal numbers : ";
   cin>>total;
   for(int i=1; i<=6; i++)
   {
    cout<<"Enter the marks you got in subject "<<i<<" :";
    cin>>mark;
    sum=sum+mark;
    cout<<endl;
   }

   int result;
   result=(sum*100)/total;
   cout<<endl<<"THE PERCENTAGE YOU GOT IS :"<<result;
   cout<<endl<<endl;
   cout<<"-----------------------------------------"<<endl;

   if(result<=100 && result>=90)
   {
    cout<<"A GRADE"<<endl;
   }
   else if(result<90 && result>=70)
   {
    cout<<"B GRADE"<<endl;
   }
   else if(result<70 && result>=60)
   {
    cout<<"C GRADE"<<endl;
   }
   else if(result<60 && result>=40)
   {
    cout<<"D GRADE"<<endl;
   }
   else if(result<40 && result>0)
   {
    cout<<"F GRADE"<<endl;
   }
   else
   {
    cout<<"RETRY :O )"<<endl;
   }


    return 0;
}



//Write a program to take numbers of 6 subjects and take out their percentage. Print the students grade based on the percentage.