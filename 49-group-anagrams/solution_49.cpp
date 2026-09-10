#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      // Создаем словарь: ключ — отсортированная строка,
        // значение — вектор оригинальных слов-анаграмм
    unordered_map < string, vector<string>> groups;
      // Проходим по всем словам
    for (const auto& el : strs) {
      // Создаём ключ: копируем слово и сортируем буквы
        string key = el;
        sort(key.begin(), key.end());
      // Добавляем оригинальное слово в группу с этим ключом
        groups[key].push_back(el); 
    }
      // Собираем все группы в итоговый вектор
    vector<vector<string>> result;
    for (const auto& pair : groups) {
        result.push_back(pair.second);
    }
    return result;

}
};
