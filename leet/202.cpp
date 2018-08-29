/*
 * 编写一个算法来判断一个数是不是“快乐数”。
 * 一个“快乐数”定义为：对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和，然后重复这个过程直到这个数变为 1，也可能是无限循环但始终变不到 1。
 * 如果可以变为 1，那么这个数就是快乐数。
 * 示例: 
 * 输入: 19
 * 输出: true
 * 解释: 
 * 1^2 + 9^2 = 82
 * 8^2 + 2^2 = 68
 * 6^2 + 8^2 = 100
 * 1^2 + 0^2 + 0^2 = 1
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
        bool isHappy(int n) {
            set<int> s;
            while(n){
                int t = 0;
                while(n){
                    t += (n%10) * (n%10);
                    n = n/10;
                }
                n = t;
                if (s.count(t)) {
                    break;
                } else {
                    s.insert(n);
                }
            }
            return n == 1;
        }
};

int main(int argc, const char** argv) {
    Solution s;

    cout << s.isHappy(19) << endl;
    //    cout << s.isHappy(18) << endl;
    Solution s2;
    cout << s2.isHappy(7) << endl;
    //   cout << s.isHappy(16) << endl;
}
