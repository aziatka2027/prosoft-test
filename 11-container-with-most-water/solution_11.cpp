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
        int width = right - left; //считаем ширину
        int h = min(height[left], height[right]);// Считаем длину
        int area = width * h;// Считаем текущую площадь
        maxarea = max(maxarea, area); //Выбираем максимальную площадь
            //Сдвигаем меньший столбик
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
