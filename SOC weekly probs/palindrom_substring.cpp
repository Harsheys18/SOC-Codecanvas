#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int max=0;
        string maxstring="";
        for(int i=0;i<n;i++){
            for(int k=n-1;k>=i;k--){
                if((k-i)>=max){
                    string subs="";
                    for(int j=i;j<=k;j++){
                        subs+=s[j];
                    }
                    if(flipflap(subs)){
                        if(subs.size()>max){
                            max=subs.size();
                            maxstring=subs;
                        }
                    }
                }
            }
        }
        return maxstring;
    }
private:
    bool flipflap(string subs){
        string newst=subs;
        reverse(subs.begin(), subs.end());
        if(newst==subs) return 1;
        else return 0;
    }
};

int main(){
    string input;
    cin>>input;
    Solution output;
    string answer=output.longestPalindrome(input);
    cout<<answer;
}