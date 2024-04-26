#include<iostream>
#include<string>
using namespace std;

struct employe{
string name;
int avg_rating;
int rating[3];

};

void rating(const employe& e)
{
    float user_rating;
    int tot_rating;
    user_rating=0.0;
    for(int i=1;i<=3;i++)
    {
        cout<<"enter the rating for rating(1-5) : ";
        cin>>user_rating;
        tot_rating=tot_rating+user_rating;
    }
    cout<<endl;
    cout<<"total rating is :"<<tot_rating;
}

void change_ratings(employe& employe)
{
  string aspect_name;
  int new_rating;
  cout <<"which aspect do you want to change ?? : ";
  cin >> aspect_name;
  cout << "Enter new rating: ";
  cin >> new_rating;
}

int main()
{


    return 0;
}



