#include<iostream>
#include<string>
using namespace std;
int main()
{
    int days;
    int a;                          //for exit in while loop
    const int floor=4;
    const int room=5;
    char arr[floor][room];
    int floor1;
    
for(int i=0;i<4;i++)
       {
        for(int j=0;j<5;j++)
        {
            arr[i][j]='-';
        }
    cout<<endl;
       }

    do{
    cout<<endl<<endl<<endl<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"HOTEL ROOM BOOKING SYSTEM"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"1.   BOOK A ROOM"<<endl;
    cout<<"2.   SHOW AVAILABLE ROOMS"<<endl;
    cout<<"3.   EXIT"<<endl;
    cout<<"   ENTER YOUR CHOICE :"<<endl;
    int choice1;
    cin>>choice1;
    
    // for choices 1 
    if(choice1==1)
    {
        a=0;
        cout<<"(: ---  BOOKING A ROOM  --- :)"<<endl<<endl;
        cout<<"ENTER THE FLOOR NUMBER (1-4) :"<<endl;
        cin>>floor1;

        int floor_price;  
        //if statements are for floor prices :0

        if(floor1==1 || floor1==2)
        {
            floor_price=10000;
        }
        else if(floor1==3 || floor1==4)
        {
            floor_price=6000;
        }


        //rooom
        cout<<"ENTER THE ROOM NUMBER (1-5) : "<<endl;
        int room;
        cin>>room;

        //days 
        cout<<"ENTER THE NUMBER OF DAYS : "<<endl;
        cin>>days;

        //for user output/results
        cout<<"FLOOR :"<<floor<<",  "<<"ROOM :"<<room<<endl;

        //for total cost

        int tot_cost;
        tot_cost=floor_price*days;
        cout<<"YOUR TOTAL COST FOR "<<days<<"DAYS IS : "<<tot_cost<<endl;
        arr[floor1-1][room-1]='*';
    }
    else if(choice1==2)
    {
        
       for(int i=0;i<4;i++)
       {
        for(int j=0;j<5;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
       }
       a=0;
    }
    
    else if(choice1==3)
    {
        cout<<endl<<endl;
        cout<<"EXITING TH EPROGRAM "<<endl;
        a=1;
    }
    }
    while(a<1);
}