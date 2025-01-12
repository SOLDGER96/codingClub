#include<iostream>
#include<vector>
using namespace std;
int maxWater(vector<int> &height){
    int maxWater = 0;
    int lp = 0, rp = height.size() - 1;
    while(lp < rp){
        int ht = min(height[lp],height[rp]);
        int w = rp - lp;
        int currWater = ht * w;
        maxWater = max(maxWater,currWater);
        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWater;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7}; // maxWater = 49
    cout << maxWater(height) << endl;
}