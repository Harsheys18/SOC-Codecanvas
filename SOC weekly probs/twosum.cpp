#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> twonums({-1,-1});
        for(int i=0;i<size(nums);i++){
            for(int j=i+1;j<size(nums);j++){
                if((nums[i]+nums[j])==target){
                    twonums={i,j};
                }
            }
        }
        return twonums;
    }
};

int main(){
    vector<int> nums;
    int target;
    cin>>target;
}