#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            int width = right - left; // Вычисляем ширину
            int h = min(height[left], height[right]); // Вычисляем высоту
            int area = width * h; // Вычисляем текущую площадь
            maxarea = max(maxarea, area); // Выбираем максимальную площадь

            // Сдвигаем меньший столбик
            if (height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }

        return maxarea;
    }
};
