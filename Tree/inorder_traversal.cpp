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
		left = right = NULL;
	}
};

static int idx = -1;

void inorder_traverse(Node* root)
{
	//base condition
	if(root == NULL) {
		return;
	}
	
	inorder_traverse(root->left);

	cout<<root->data<<" ";

        inorder_traverse(root->right);
}

Node* buildTree(vector<int> &preorder)
{
	idx++;

	if(preorder[idx] == -1) {
		return NULL;
	}

	Node* root = new Node(preorder[idx]);

	//left subtree
	root->left = buildTree(preorder);

	//right subtree
	root->right = buildTree(preorder);

	return root;
}

int main()
{
	vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

	Node* root = buildTree(preorder);

	inorder_traverse(root);

	return 0;

}
