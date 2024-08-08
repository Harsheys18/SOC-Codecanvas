#include<iostream>
#include<cstdlib>
#include<map>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;

struct Cities
{
    string cityName;
    long int cityPin;
    Cities(string name,long int number){
        cityName=name;
        cityPin=number;
    }
};

int main(){
    vector<Cities> cityList;
    Cities city1("Belgium",122345);
    cityList.push_back(city1);
    cout<<cityList[0].cityPin;
    cout<<"Now by using maps"<<endl;

    map<string,int> cityList2;
    cityList2["Belgium"]=122345;
    cityList2["Mumbai"]=400076;

    
}