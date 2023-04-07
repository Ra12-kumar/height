// height of binery tree
#include<iostream>
using namespace std;
struct Node{
  int data;
  struct Node* left;
  struct Node* right;
  Node(int x){
    data=x;
    left=NULL;
    right=NULL;
  }
};
int height(struct Node* root){
  if(root==NULL){
    return 0;
  }
  else{
    return max(height(root->left),height(root->right))+1;
  }
}
int main(){
  Node *root=new Node(10);
  root->left=new Node(20);
  root->right=new Node(30);
  root->left->left=new Node(60);
  cout<<height(root);
}