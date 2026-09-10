#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
    // Если домов нет — грабить нечего
    if (nums.empty()) return 0;

    // Если один дом — берём его
    if (nums.size() == 1) return nums[0];

    // Два первых значения:
    int prev2 = nums[0];                // максимум до позапрошлого дома
    int prev1 = max(nums[0], nums[1]);  // максимум до прошлого дома

    // Идём с третьего дома
    for (int i = 2; i < nums.size(); ++i) {
        // Либо берём текущий дом + prev2, либо пропускаем и берём prev1
        int current = max(prev1, prev2 + nums[i]);

        // Сдвигаем окно
        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}
};
