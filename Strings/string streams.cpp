#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) 
{
	vector<int> ans;
    stringstream ss(str);
    char ch=',';
    int temp;
    while(ss)
    {
        ss>>temp>>ch;
        ans.push_back(temp);
    }
    return ans;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

