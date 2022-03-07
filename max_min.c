#include<stdio.h>
#include<stdlib.h>

//for marking allocated  tasks zeros 
void  completed(int arr[][3],int allocated)
{ 

 for(int i1=0;i1<2;++i1)
 {
     for(int j=0;j<3;++j)
      {
          if(j==allocated)
              arr[i1][j]=0;
      }
    }


 }
 //for adding time time to other tasks where particular  task has been allocated 

void adding(int arr[][3],int index,int min1)
{
   
   for(int a=0;a<2;++a) 
   {
    for(int b=0;b<3;++b)
    {
        if(arr[a][b]==0)
          continue;
        else if(a==index)
          {
              int temp1=arr[a][b]+min1;
               arr[a][b]=temp1;
          }
     }
}

}

int min(int a,int b)
 {
     return a<b?a:b;
 }
 
 int max(int a,int b)
 {
     return a>b?a:b;

 }
 //for storing minimum tasks 
 void store(int arr2[],int arr[][3])
 {

 int i1=0;
    for(int j=0;j<3;++j)
    {
        if(arr[0][j]==0||arr[1][j]==0)
          continue;
        arr2[i1]=min(arr[0][j],arr[1][j]);
        printf(" %d is minimum  ",arr2[j]);
        i1+=1;
    }
     

 }


int main()
{
int arr[2][3],arr2[3];//{{140,20,60},{100,100,70}}
for(int i=0;i<2;++i)
{
    for(int j=0;j<3;++j)
      scanf("%d",&arr[i][j]);

}



int n=3,sum=INT_MIN,allocated,temp2,i1=0,min1;
while(n--)
{
    
 store(arr2,arr);    
int max1=INT_MIN,index;
for(int i=0;i<3;++i)
 {
     if(arr2[i]>max1)
      max1=arr2[i];
 }
    printf(" \n %d  is maximum  time among %d  \n ",max1,n+1);

for(int i=0;i<2;++i)
 {
      for(int j=0;j<3;++j)
       {
           if(arr[i][j]==0)
            continue;
         if(arr[i][j]==max1)
            {    min1=arr[i][j];
                index=i;
                allocated=j;
                break;
            }
            sum=max(max1,sum);
       }
 }
printf("%d task has been allocated for machine %d ",allocated,index);
 
completed(arr,allocated);
 
adding(arr,index,min1);
printf("\n");

for(int i=0;i<2;++i)
  {
    for(int j=0;j<3;++j)
     {
      
       printf(" %d ",arr[i][j]);
     }
  printf("\n");

  }
}

 

printf("\n now overall span time is %d ",sum);

return 0;

}
