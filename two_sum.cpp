// LeetCode 1

#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
	map<int, int> map;
	vector<int> pairs;
	for (int i = 0; i < nums.size(); i++)
	{
		int complement = target - nums[i];
		if (map.find(complement) != map.end())
		{
			  pairs.push_back(map.find(complement)->second);
			  pairs.push_back(i);
			  break;
		}
		map.insert(pair<int, int>(nums[i], i));
	}
	return pairs;
};

int main()
{
	vector<int> nums = {3, 4, 5, 6, 7, 8};
	vector<int> pair = twoSum(nums, 9);
	cout << pair[0] << " " << pair[1] << endl;
	return 0;
}
