#include <iostream>
using namespace std;

void eliminate_duplicates(int arr[],int& size)
{
  int distinct=0;
  for (int i = 0; i < size; i++) {
    bool isDuplicate = false;
    
    for (int j = 0; j < i; j++) {
      if (arr[i] == arr[j]) {
        isDuplicate = true;
        break;
      }
    }
    
    if (!isDuplicate) {
      arr[distinct] = arr[i];
      distinct++;
    }
  }
  
  size = distinct;
}

int main()
{
  int size;
  cout<<"Enter the size of an array : "<<endl;
  cin>>size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cin>>arr[i];
  }
  cout<<endl;
  size=sizeof(arr)/sizeof(arr[0]);

  cout<<"The Original Array is: ";
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  eliminate_duplicates(arr, size);

  cout<<"The Updated Array is: "<<endl;
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  cout<<"Distinct Count is : "<<size<<endl;
  return 0;
}