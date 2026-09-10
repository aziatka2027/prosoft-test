#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    // Сортируем — после этого пересекаться могут только соседние интервалы
      sort(intervals.begin(), intervals.end());
    vector<vector<int>> result;
    for (int i = 0; i < intervals.size(); ++i)
    {
        if (result.empty() || intervals[i][0] > result.back()[1]) {
            // Если не пересекается с последним — добавляем как новый
            result.push_back(intervals[i]);
        }
        else {
            // если пересекаются, расширяем конец последнего     
            result.back()[1] = max(result.back()[1], intervals[i][1]);
        }
    }
    return result;

}
};
