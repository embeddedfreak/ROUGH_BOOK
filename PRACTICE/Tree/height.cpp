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
Node* buildTree(vector<int> preorder)
{
	idx++;
	//base condition
	if(preorder[idx] == -1) {
		return NULL;
	}
	
	Node* newNode = new Node(preorder[idx]);

	newNode->left = buildTree(preorder);

	newNode->right = buildTree(preorder);	

	return newNode;
}

void preorder_traverse(Node* root)
{

	if(root == NULL) {
		return;
	}

	cout<<root->data<<" ";

	preorder_traverse(root->left);
	preorder_traverse(root->right);
}

int height(Node* root)
{
	if(root == NULL)
		return 0;

	return max(height(root->left), height(root->right)) + 1;
}

int main()
{
	vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1,  5, -1, -1};

	Node* root = buildTree(preorder);

	preorder_traverse(root);

	cout<<endl;
	cout<<"Height of Tree is: "<<height(root)<<endl;
	return 0;
}

