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

void preorder_traverse(Node* root) {
	//Base condition
	if(root==NULL) {
		return;
	}


	preorder_traverse(root->left);
	
	
	preorder_traverse(root->right);
	//preoerder so print first
	cout<<root->data<<" ";

}

int main()
{
	vector<int> preorder = {1, 2, -1, -1, 3, 4, -1 , -1, 5, -1, -1};

	Node* root = buildTree(preorder);

	preorder_traverse(root);

	return 0;
}
