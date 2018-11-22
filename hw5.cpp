#include <iostream>
using namespace std;

struct node
{
  int d;
  struct node* left;
  struct node* right;
};

struct node* newNode(int data)
{
  struct node* node = new struct node;
  node -> d = data;
  node -> left = NULL;
  node -> right = NULL;

  return node;
}

void pOrder(struct node *node);

int main()
{
struct node* root = newNode(2);

//first level
root->left = newNode(7);
root->right = newNode(5);

//second level
root->left->left = newNode(2);
root->left->right = newNode(6);
root->right->right = newNode(9);

//third level
root->left->right->left = newNode(5);
root->left->right->right = newNode(11);



pOrder(root);





return 0;
}


void pOrder(struct node *node)
{
  if(node==NULL) return;


cout << node->d << endl;
 pOrder(node->left);
//cout << node->d << endl;

 pOrder(node->right);
}
