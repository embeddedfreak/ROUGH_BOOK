#include<iostream>
#include<vector>

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

	if(preorder[idx] == -1)
		return NULL;

	Node* root = new Node(preorder[idx]);

	root->left = buildTree(preorder);
	root->right = buildTree(preorder);

	return root;
}

void preorder_traverse(Node* root)
{
	if(root == NULL)
		return;

	cout<<root->data<<" ";

	preorder_traverse(root->left);
	preorder_traverse(root->right);
}

int count_leaf(Node* root)
{
	if(root== NULL)
		return 0;

	if(root->left == NULL && root->right == NULL) {
		cout<<root->data<<" "<<endl;
		return 1;
	}

	int left_leaf = count_leaf(root->left); 
		
	int right_leaf = count_leaf(root->right);

	return left_leaf + right_leaf;
}

int main()
{
	vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

	Node* root = buildTree(preorder);

	preorder_traverse(root);

	cout<<"Total leaf nodes in Tree are: "<<count_leaf(root)<<endl;	
	return 0;
}
