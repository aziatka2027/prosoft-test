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
        // Идём по символам первой строки
for (int i = 0; i < strs[0].size(); ++i){
    // Проверяем этот символ во всех остальных строках
    for (int j = 1; j < strs.size(); ++j){
        // Если строка короче или символ не совпадает - выходим
        if (i >= strs[j].size() || strs[j][i] != strs[0][i]){
            return pref;
        }
        
    }
    // Все строки прошли проверку — добавляем символ
    pref += strs[0][i];
}
       return pref; 
    }
};
