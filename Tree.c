#include<stdio.h>
#include <memory.h>
struct node {
int data;
struct node *left,*right;
};


struct node * new_node(){
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
scanf("%d",&temp->data);
temp->left=NULL;
temp->right=NULL;
return temp;
}

void insert(struct node* root,struct node *temp){
  if(root->data <= temp->data){
    if(root->right==NULL)
        root->right=temp;

    else insert(root->right,temp);
  }
  else {
    if(root->left==NULL)
        root->left=temp;
    else insert(root->left,temp);
  }
}


void tprint(struct node *root){
if(root->data!=NULL){
    printf("%d  ",root->data);
    tprint(root->left);
    tprint(root->right);
}
}
int main(){
struct node *root, *temp;
root= NULL;
int n,i;
scanf("%d",&n);
for(i=0;i<n;i++){
  temp=new_node();
  if(root==NULL)
    root=temp;
  else{
    insert(root,temp);
  }
}
tprint(root);

}

