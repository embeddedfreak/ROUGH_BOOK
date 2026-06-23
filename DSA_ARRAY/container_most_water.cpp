#include <iostream>
#include <vector>

using namespace std;

/* Take 2 pointers i and j
 * i at begining and j at the end
 * to find area formula is l * b
 * to find l we need to substract last index with first
 * to find height of water the minimum height, cus
 * above which water will spill out
 * Move i and j comparing which height is minimum
 * calculate the max_area possible
 */
 
int maxArea(vector<int>& height) {
	int n = height.size();

	int i = 0;
	int j = n-1;

	int max_area = 0;
	while (i < j) {
		int l = j - i;
		int b = min(height[i], height[j]);

		max_area = max_area < (l * b)? (l*b): max_area;

		if(height[i] <= height[j])
			i++;
		else
			j--;
	}
	return max_area;
}

int main()
{
	vector<int> height = {1,8,6,2,5,4,8,3,7};

	cout<<"Max Area = "<<maxArea(height)<<endl;
	return 0;
}
