#include "vec.h"
#include<iostream>
#include<vector>

using std::cout;

using std::vector;

int main() 
{
	vector<int> nums;

	cout<<"size of nums: "<<nums.size()<<"\n";
	cout<<"capacity of nums: "<<nums.capacity()<<"\n";
	cout<<"max size of nums: "<<nums.max_size()<<"\n";
	nums.push_back(15);
	cout<<"capacity of nums: "<<nums.capacity()<<"\n\n";

	vector<int> nums2(10,5);

	for(auto n: nums)
	{
		cout<<n<<"\n";
	}

	cout<<nums[0]<<"\n";
	nums[0] = 20;
	cout<<nums[0]<<"\n";

	return 0;
}