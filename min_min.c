#include<stdio.h>
#include<stdlib.h>

//for marking allocating tasks zeros 
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
int main()
{
int arr[2][3];//{{140,20,60},{100,100,70}}
for(int i=0;i<2;++i)
{
    for(int j=0;j<3;++j)
      scanf("%d",&arr[i][j]);

}


int n=3,sum=0,index,allocated,temp2;
while(n--)
{
    int min1=999999;
    for(int i=0;i<2;++i)
    {
        for(int j=0;j<3;++j)
        {
            if(arr[i][j]==0)
             continue;
            if(arr[i][j]<min1)
              {
                  min1=arr[i][j];
                  index=i;
                   allocated=j;
                 
              }
        }
    }
    sum=min1;
  printf(" %d  task has been allocated %d machine \n ",allocated,index);
completed(arr,allocated);

adding(arr,index,min1);

 for(int i=0;i<2;++i)
  {
    for(int j=0;j<3;++j)
     {
      
       printf(" %d ",arr[i][j]);
     }
  printf("\n");

  }

 }

printf("now overall span time is %d \n ",sum);

return 0;

}