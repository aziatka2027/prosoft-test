#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //  unordered_map для хранения чисел и их индексов
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
        // вычисляем второе слагаемое для nums[i]
        int add = target - nums[i];
        // если находим в unordered_map   
        if (mp.find(add) != mp.end()) {
            // возвращаем его индекс и текущий индекс
            return { mp[add], i };
        }
        // добавляем текущее число и его индекс в unordered_map
        mp[nums[i]] = i;
    }    
    return {};
}
};
