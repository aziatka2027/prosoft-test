#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int partitionString(string s) {
      // Множество для символов текущей подстроки
    unordered_set<char> temp{};
    int count = 1;
    for (const auto& el : s) {
      // Если символ уже есть в текущей подстроке — начинаем новую
        if (temp.count(el)) {
            ++count;
            temp.clear();            
        }  
      // Добавляем символ в текущую подстроку
        temp.insert(el);      
    }
    return count;    
}
};
