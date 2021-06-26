#include<iostream>
using namespace std;
void reverseArray(int a [], int n)
{
  int i,j,temp;
  for(i=0,j=n-1;i<n/2;i++,j--)
  {
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;
  }
}
void printArray(int a[], int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
}
int main()
{
  int a[100],n,i;
  cout<<"Enter n value \n";
  cin>>n;
  cout<<"Enter array elements \n";
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"\n "<<"Array elements before reversing :\n";
  printArray(a,n);
  reverseArray(a,n);
  cout<<"Array elements after reversing :\n";
  printArray(a,n);
  return 0;
}
