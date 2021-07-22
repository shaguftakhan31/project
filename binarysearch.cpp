#include <iostream>
  using namespace std;
int binarySearch(int arr[],int size,int key)
{
   int s=0;
   int e=size;
   while(s<=e)
   {
       int mid=(s+e)/2;
       
       if(arr[mid]==key)
       {
           return mid;
       }
       else if(arr[mid]>key)
       {
           e=mid-1;
       }
       else{
           s=mid+1;
       }
   }
   return -1;
}
int main()
{
    int n;
    cout<<"enter number of elements";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<"\t elements";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int key;
    cout<<"enter element to be searched;\t";
    cin>>key;
    int s=binarySearch(arr,n,key);
    if(s==-1)
    {
        cout<<"element is not found";
    }
    else{
        cout<<"element found at "<<s +1<<"\tposition";
    }
    return 0;
}
