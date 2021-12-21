# TULA-RAM-CODING-QUESTION
This contains coding questions that i have practised over my  campus life
//this is for peak finding problem  in sorted array uisng binary search

void search(int *arr,int low,int high)
{
int mid=(low+high)/2;
 if(arr[mid]<arr[mid-1])
     search(arr,low,mid-1);
else if(arr[mid]<arr[mid+1]&&mid<high)
       search(arr,mid+1,high);
else 
{
cout<<"peak is "<<arr[mid]<<" ";
exit(1);
}
}

int main()
{
  int n;cin>>n;
  int arr[n];for(int i=0;i<n;++i)cin>>arr[i];
  search(arr,0,n);
  return 0;
}
