#include<stdio.h>
#include<stdlib.h>

int task,min_time,span_time;


int min(int a,int b)
 {
     return a<b?a:b;
 }


int max(int a,int b)
 {
     return a>b?a:b;

 }

//for marking  allocated  tasks to  zeros 
void  completed(int arr[][3])
{ 

 for(int i1=0;i1<2;++i1)
 {
     for(int j=0;j<3;++j)
      {
          if(j==task)
              arr[i1][j]=0;
      }
    }


 }


 //for adding time time to other tasks where particular  task has been allocated 

void adding(int arr[][3],int  machine )
{
   
   for(int a=0;a<2;++a) 
   {
    for(int b=0;b<3;++b)
    {
        if(arr[a][b]==0)
          continue;
        else if(a==machine)
          {
              int temp1=arr[a][b]+min_time;
               arr[a][b]=temp1;
          }
     }
   }

}


void store(int arr2[],int arr[][3])
 {

 int i1=0;
    for(int j=0;j<3;++j)
    {
        if(arr[0][j]==0||arr[1][j]==0)
          continue;
        arr2[i1]=abs(arr[0][j]-arr[1][j]);
        i1+=1;
    }
     

 }

//for finding which task has maximum difference  
 int find(int *arr2,int arr[][3])
 {
  int max1=INT_MIN;
  for(int i=0;i<3;++i)
    {
        if(arr[0][i]==0||arr[1][i]==0)
          continue;
       if(arr2[i]>max1)
        {max1=arr2[i];
         task=i;
         
        }

    }
    return max1;
 }

//for determining which  machine 
int  check(int arr[][3])
{
  int machine,min1=9999,min2=99999;

for(int i=0;i<2;++i)
{
    for(int j=0;j<3;++j)
    {
        if(arr[i][j]==0)
           continue;

       if(j==task )
        {   
            if(arr[i][j]<min1)
               {
                 min1=arr[i][j];
                 machine=i;
                 min_time=min1;
                 printf(" minimum :  %d  ",min_time);
                  
                 printf("\n");
               }
            
        }


    }
          
  }
  printf("%d task has been allocated to machine %d \n ",task,machine);
   span_time=max(span_time,min_time);
  return machine;

}



int main()
{
int arr[2][3],arr2[3];//{{140,20,60},{100,100,70}}
for(int i=0;i<2;++i)
{
    for(int j=0;j<3;++j)
      scanf("%d",&arr[i][j]);

}

int n=3,max1,machine;
while(n--)
{
store(arr2,arr);
max1=find(arr2,arr);
printf(" \n maximum : %d   ",max1);
 printf("now checking \n");
machine=check(arr);
printf(" machine : %d  ",machine);
printf("\n");
//
completed(arr);
adding(arr,machine);
printf(" now after allocating \n");
for(int i=0;i<2;++i)
  {
    for(int j=0;j<3;++j)
     {
      
       printf(" %d ",arr[i][j]);
     }
  printf("\n");

  }
}




printf(" \n span time  is %d ",span_time);
return 0;


}

