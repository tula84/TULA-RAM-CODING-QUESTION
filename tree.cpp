#include<iostream>
#include<bits/stdc++.h>
#define fr(n)for(int i=0;i<n;++i)
using namespace std;

struct node1
{
  int value;
  node1 *left;
  node1 *right;
  node1(int data)
    {
        this->value= data;
        left = right = NULL;
    }
};
     
typedef struct node1  node;
 
void preorder(node *temp)
 {
     if (temp != NULL)
      {
     
      cout << " " << temp->value;
      preorder(temp->left);
      preorder(temp->right);
     
     }

 }


void postorder(node *temp)
 {
     if (temp != NULL) {
      
      postorder(temp->left);
      postorder(temp->right);
      cout<<temp->value;
      
      }

 }
//searching of the node

bool exist(node *temp,int data)
{

if(temp==NULL)
 return false;
if(temp->value==data)
 return true;
bool res1=exist(temp->left,data);
if(res1)return true;

bool res2=exist(temp->right,data);
return res2;

}

// finding maximum depth of tree
int height(node *temp)
{
    if(temp==NULL)
     return -1;
    int l=height(temp->left);
    int r=height(temp->right);
     return max(l,r)+1;
}

//for finding  left height of tree
int left_height(node *temp)
{
     if(temp==NULL)
       return -1;
      int l=left_height(temp->left);
         return l+1;
}


//for finding  right  height of tree
int right_height(node *temp)
{
     if(temp==NULL)
       return -1;
      int r=right_height(temp->right);
         return r+1;
}






//finding  diameter of node 

int diameter(node *temp,int *height)
{

int lh=0,rh=0,ld=0,rd=0;
if(temp==NULL)
 {
    *height=0;
    return 0;

 }  
ld=diameter(temp->left,&lh);
rd=diameter(temp->right,&rh);
*height=max(lh,rh)+1;

return max(lh+rh+1,max(ld,rd));

}


 
 // for left view of binary tree
 
 int max_level=-1;
 
 void  left_view(node *root,int level)
 {

     if(root==NULL)return;
    if(max_level<level)
    {  
        cout<<"  "<<root->value<<"   ";
         max_level=level;
    }

    left_view(root->left,level+1);
    left_view(root->right,level+1);
}

//for right view  tree

int max_level1=-1;

void right_view(node *root,int level)
{

if(root==NULL)return;
    if(max_level1<level)
    {  
        cout<<"  "<<root->value<<"   ";
         max_level1=level;
    }

    right_view(root->right,level+1);
    right_view(root->left,level+1);



}

void input()
{
   node *n1=(node*)malloc(sizeof(node*));
     n1=new node1(30);
//for searching  in binary tree 
 
int search;cin>>search;
preorder(n1);

  if(exist(n1,search))cout<<"\nis found";
  else cout<<"\n not found";

//for  height of tree 
cout<<" \n height of tree is "<<height(n1);

int h=0;
//cout<<"\n diameter of tree is "<<diameter(n1,&h);

cout<<"\n left view";
left_view(n1,0);

   cout<<"\n right  view";
  right_view(n1,0);


}

int main()
{
     node *n1=(node*)malloc(sizeof(node*));
     n1=new node1(30);
     n1->left=new node1(10);
     n1->right=new node1(45);
     n1->left->left=new node1(7);
     n1->left->right=new node1(8);
     n1->right->left=new node1(31);
     n1->right->right=new node1(32);
     n1->left->left->left=new node1(6);
     n1->left->left->left->right=new node1(5);
     n1->left->right->left=new node1(4);
     n1->right->right->right=new node1(32);//for balacing purpose i am adding this node 
    


//for checking balanced tree or not 
cout<<"right height of tree is "<<right_height(n1)<<endl;
if(left_height(n1)==right_height(n1))
       cout<<"is balanced";
else  cout<<"not balanced";
  

return 0;


}