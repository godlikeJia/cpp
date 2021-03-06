/*
 * 假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
 *
 * 每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
 *
 * 注意：给定 n 是一个正整数。
 *
 * 示例 1：
 * 输入： 2
 * 输出： 2
 * 解释： 有两种方法可以爬到楼顶。
 * 1.  1 阶 + 1 阶
 * 2.  2 阶
 *
 * 示例 2：
 * 输入： 3
 * 输出： 3
 * 解释： 有三种方法可以爬到楼顶。
 * 1.  1 阶 + 1 阶 + 1 阶
 * 2.  1 阶 + 2 阶
 * 3.  2 阶 + 1 阶
 */
#include <stdio.h>
#include <stdint.h>
#include <limits.h>
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
        int climbStairs(int n) {
            if (n ==1) {
                return 1;
            } 
            if (2 == n) {
                return 2;
            }

            return climbStairs(n - 2) + climbStairs(n-1);
        }

        int climbStairs2(int n) {
            vector<int> result(n+1, 0);
            result[1] = 1;
            result[2] = 2;

            for (int i=3; i<=n; i++) {
                result[i] = result[i-1] + result[i+2];
            }

            return result[n];
        }

};


int main(int argc, const char** argv) {
    Solution s;
}
