#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.empty()){
    return "";
}
if (strs.size() == 1){
    return strs[0];
}
string pref = "";
for (int i = 0; i < strs[0].size(); ++i){
    for (int j = 1; j < strs.size(); ++j){
        if (i >= strs[j].size() || strs[j][i] != strs[0][i]){
            return pref;
        }
        
    }
    pref += strs[0][i];
}
       return pref; 
    }
};
