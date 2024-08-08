#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s){
        int n=s.size();
        int maxlen=0;
        string maxstring="";
        // i = initial letter of te sub string
        // j = ending letter of the sub string
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=i;j--){
                
            }
        }
    }















    string longestPalindrome(string s) {
        int n=s.size();
        int max=0;
        string maxstring="";
        for(int i=0;i<n;i++){
            for(int k=n-1;k>=i;k--){
                int counter=0;
                int letters=k-i+1;
                if(letters>=max){
                    if(letters%2!=0){
                        counter=0;
                        for(int j=i;j<i+(letters+1)/2;j++){
                            if(s[j]==s[letters-j]) counter+=1;
                            else break;
                        }
                        if(counter==(letters-1)/2){
                            string maxstring="";
                            for(int j=i;j<=k;j++) maxstring+=s[j];
                        }
                    }
                    else{
                        counter=0;
                        for(int j=i;j<i+(letters/2);j++){
                            if(s[j]==s[letters-j]) counter+=1;
                            else break;
                        }
                        if(counter==(letters/2)){
                            string maxstring="";
                            for(int j=i;j<=k;j++) maxstring+=s[j];
                        }
                    }
                }
            }
        }
        return maxstring;
    }
};

int main(){
    string input;
    cin>>input;
    Solution output;
    cout<<output.longestPalindrome(input);
}