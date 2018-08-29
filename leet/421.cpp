/*
 * 给定一个非空数组，数组中元素为 a0, a1, a2, … , an-1，其中 0 ≤ ai < 2^31 。
 * 找到 ai 和aj 最大的异或 (XOR) 运算结果，其中0 ≤ i,  j < n 。
 * 你能在O(n)的时间解决这个问题吗？
 *
 * 示例:
 * 输入: [3, 10, 5, 25, 2, 8]
 * 输出: 28
 * 解释: 最大的结果是 5 ^ 25 = 28.
 */
#include <vector>
#include <string>
#include <set>
#include <map>
#include <list>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        int findMaximumXOR(vector<int>& nums) {
            int max = 0;
            for (int i=0; i<nums.size(); i++) {
                for (int j=i+1; j<nums.size(); j++) {
                    if (max < (nums[i] ^ nums[j])) {
                        max = (nums[i] ^ nums[j]);
                    }
                }
            }
            
            return max;
        }

};


int main(int argc, const char** argv) {
    Solution s;
    
    vector<int> nums = {3, 10, 5, 25, 2, 8};
    cout << s.findMaximumXOR(nums) << endl;
}
