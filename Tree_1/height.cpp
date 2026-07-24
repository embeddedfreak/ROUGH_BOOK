#include <iostream>
#include <vector>

using namespace std;

class Node {
public: 
	int data;
	Node* left;
	Node* right;

	Node(int val) {
		data = val;
		left = NULL;
		right = NULL;
	}
};

static int idx = -1;

Node* buildTree(vector<int> preorder)
{
	idx++;

	//Base Condition
	if(preorder[idx] == -1) {
		return NULL;
	}

	//Created root node
	Node* root = new Node(preorder[idx]);

	//Create left sub tree
	root->left = buildTree(preorder);

	//Create right sub tree
	root->right = buildTree(preorder);

	return root;
}

int height(Node* root)
{
	//base condition
	if(root == NULL) {
		return 0;
	}

	int left_height = height(root->left);
	int right_height = height(root->right);

	return max(left_height,right_height) + 1;
}

void preorder_traverse(Node* root) {
	//Base condition
	if(root==NULL) {
		return;
	}

	//preoerder so print first
	cout<<root->data<<" ";

	preorder_traverse(root->left);
	
	preorder_traverse(root->right);

}

int main()
{
	vector<int> preorder = {1, 2, -1, -1, 3, 4, -1 , -1, 5, -1, -1};

	Node* root = buildTree(preorder);

	preorder_traverse(root);

	cout<<"Total height is : "<<height(root)<<endl;

	return 0;
}
