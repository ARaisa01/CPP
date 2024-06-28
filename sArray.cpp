#include <iostream>
using namespace std;

 int main()
 {
     int n;
     cout<<"Enter your index number:";
     cin>> n;
     int arr[n];
     cout<<"Enter your array index value:";
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];
     }
     printf("Before adding 5,the array is:");
     for(int i=0;i<n;i++)
     {
        cout<<arr[i];
     }
     cout<<"\nAfter adding 5,then the array is:";
     for(int i=0;i<n;i++)
     {
      cout<< arr[i]+5;
     }
    return 0;

 }