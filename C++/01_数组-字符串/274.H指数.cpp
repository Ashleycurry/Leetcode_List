#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hIndex(vector<int>& cs) {
        //降序排序
        sort(cs.begin(), cs.end(), [](const int &a, const int &b){ return a > b; });
        int h = 0;
        for(int i = 0; i < cs.size(); i++){
            if(cs[i] >= i + 1){
                h = i + 1;
            } else {
                break;
            }
        }
        return h;
    }
};