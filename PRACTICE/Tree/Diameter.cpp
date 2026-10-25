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

int diameter(Node* root)
{
	if(root == NULL) 
		return 0;

	int LeftDiameter = diameter(root->left);
	int RightDiameter = diameter(root->right);

	int CurrDiameter = height(root->left) + height(root->right);

	return max(LeftDiameter, max(RightDiameter, CurrDiameter));
}

int main()
{
	vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1,  5, -1, -1};

	Node* root = buildTree(preorder);

	preorder_traverse(root);

	cout<<endl;
	cout<<"Height of Tree is: "<<height(root)<<endl;
	cout<<"Diameter of Tree is: "<<diameter(root)<<endl;
	return 0;
}

