#include<bits/stdc++.h>
class TreeNode{
	public:
		//3 things
		// 1->data
		// 2->leftchild,rightchild
		int data;
		TreeNode* left;
		TreeNode* right;
		//constactor
		TreeNode(int val){
			data=val;
			left=NULL;
			right=NULL;
		}
};
     int main(){
	 TreeNode* root=new TreeNode(10);
	 TreeNode* leftchild =new TreeNode(20);
	 root->left=leftchild;
	 TreeNode* rightchild =new TreeNode(30);
	 root->right = rightchild;
    }
		