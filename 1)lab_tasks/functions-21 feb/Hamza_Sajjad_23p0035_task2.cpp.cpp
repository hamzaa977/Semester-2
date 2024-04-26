#include <iostream>
using namespace std;

void subtotal(float arr[], int size)
{
  float sum=0;
  for (int i=0;i<size;i++)
  {
    sum = sum + arr[i];
    arr[i]=sum;
  }
}

int main()
{
  cout<<"Enter the size of an array : "<<endl;
  int size;
  cin>>size;
  cout<<"Enter Your Array : "<<endl;
  float arr[size];
  for (int i=0;i<size;i++)
  {
    cin>>arr[i];
  }

  size=sizeof(arr)/sizeof(arr[0]);
  //to print out orignal array
  cout << " The Original Array: ";
  for (int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl<<endl;
//to print ot the after changing
  subtotal(arr,size);
  cout<<"After Updating Array: ";  
  for (int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}