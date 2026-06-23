#include <iostream>
#include <vector>
using namespace std;

/* consider first day price as best Buy
 * run loop from 1 - n-1
 * check and update comparing bestBuy and current day price for minimum
 * check for bestBuy and current day price for difference
 * Update maxdifference i.e max Profit
 * return maxProfit
 */
int maxProfit(vector<int>& prices) {
	int n = prices.size();

	int maxProfit = 0;
	int bestBuy = prices[0];
	for(int i = 1; i < n; i++) {
		bestBuy = bestBuy > prices[i] ? prices[i] : bestBuy;
		if(prices[i] > bestBuy) {
			int diff = prices[i] - bestBuy;
			maxProfit = (maxProfit > diff)? maxProfit : diff; 
		}
	}
	return maxProfit;
}


int main()
{
	vector<int> prices = {3, 8, 1, 4, 7, 5};

	cout<<"Max Profit"<<maxProfit(prices)<<endl;
}
