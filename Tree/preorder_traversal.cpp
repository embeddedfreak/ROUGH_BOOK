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

	if(preorder[idx] == -1) {
		return NULL;
	}

	Node* root = new Node(preorder[idx]);

	//build left subtree
	root->left = buildTree(preorder);

	//build right subtree
	root->right = buildTree(preorder);

	return root;

}

void traverse_tree(Node* root) 
{
	if(root == NULL) {
		return;
	}

	cout<<root->data<<" ";

	//left Node
	traverse_tree(root->left);

	//right Node
	traverse_tree(root->right);

}

int main() 
{
	vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

	Node* root = buildTree(preorder);

	traverse_tree(root);
	return 0;
}
