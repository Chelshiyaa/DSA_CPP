#include <iostream>
#include <cmath>
using namespace std;
int maxProfit(int price[], int n)
{
	int profit = 0;
	for(int i = 1; i < n; i++)
	{
		if(price[i] > price[i - 1])
			profit += price[i] - price[i -1];
	}
	return profit;
}
int main() {	
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int price[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    int profit=maxProfit(price,n);
    cout<<"Max profit is: "<<profit;
    
}
