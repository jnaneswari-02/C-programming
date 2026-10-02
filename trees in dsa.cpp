
#include<stdio.h>
#include<stdlib.h>

// Node structure
struct node {
    int data;
    struct node* left;
    struct node* right;
};

// Create tree from array using level order (complete binary tree)
struct node* createTree(int arr[], int index, int size) {
    if(index >= size) {
        return NULL;
    }
    struct node* root = (struct node*)malloc(sizeof(struct node));
    root->data = arr[index];
    root->left = createTree(arr, 2*index + 1, size);
    root->right = createTree(arr, 2*index + 2, size);
    return root;
}

// Inorder traversal
void inorder(struct node* root) {
    if(root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

// Preorder traversal
void preorder(struct node* root) {
    if(root == NULL) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

// Postorder traversal
void postorder(struct node* root) {
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

// Print leaf nodes
void leafPrinting(struct node* root) {
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) {
        printf("%d ", root->data);
        return;
    }
    leafPrinting(root->left);
    leafPrinting(root->right);
}

int main() {
    int n, i;
    printf("Enter Array Size : ");
    scanf("%d", &n);
    
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    struct node* root = createTree(arr, 0, n);

    printf("Inorder    : ");
    inorder(root);
    printf("\nPreorder   : ");
    preorder(root);
    printf("\nPostorder  : ");
    postorder(root);
    printf("\nLeaf Nodes : ");
    leafPrinting(root);

    return 0;
}

/*
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node*insertNode(struct node* root,int value){
if(root==NULL){
	struct node* NN=(struct node*)malloc(sizeof (struct node));
	NN->data=value;
	NN->left=NN->right=NULL;
	return NN;
}  
if (root->data<value){
	root->right = insertNode(root ->right ,value);
}
if(root->data >value){
	root->left=insertNode(root->left,value);
}
return root;
}
void inorder (struct node*root){
	if(root==NULL){
		return ;
	}
	inorder(root->left);
	printf("%d",root->data);
	inorder(root->right);
	
}

int search (struct node* root ,int key){
  if(root==NULL)
    {
      return 0;
    }
    if(root->data==key)
    {
        return 1;
    }
	int x=0,y=0;
	if(root->data<key){
		x=search(root->right,key);
	}
	if(root->data > key){
		y=search(root->left,key);
	}
	if(x==1||y==1){
		return 1;
	}
	return 0;
}

int main(){
	int i,n;
	printf("Enter size of array:");
	scanf("%d",&n);
	 struct node*root=NULL;
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
    {
        root=insertNode(root,arr[i]);
    }
 inorder(root);
 int key;
 printf("\n Enter key: "); 
 scanf("%d",&key);
 if(search(root,key)==1){
 	printf("key is found");
 }
else{
	printf("key is not found");
}
return 0;
}
*/




























