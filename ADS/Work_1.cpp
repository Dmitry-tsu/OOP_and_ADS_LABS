#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
using std::swap;
using std::reverse;
const int MAX_CITIES = 10; // Максимальное количество городов

// Функция для заполнения матрицы стоимостей случайными значениями
void generateRandomCosts(int costs[MAX_CITIES][MAX_CITIES], int numCities) {
    srand(time(nullptr)); // Инициализация генератора случайных чисел
    for (int i = 0; i < numCities; i++) {
        for (int j = 0; j < numCities; j++) {
            if (i == j) {
                costs[i][j] = 0; // Стоимость пути к самому себе равна 0
            } else {
                costs[i][j] = rand() % 9 + 1; // Стоимость пути от i до j - случайное число от 1 до 100
            }
        }
    }
}

// Функция для расчета стоимости маршрута
int calculateRouteCost(int route[MAX_CITIES], int costs[MAX_CITIES][MAX_CITIES], int numCities) {
    int totalCost = 0;
    for (int i = 0; i < numCities - 1; i++) {
        totalCost += costs[route[i]][route[i+1]];
    }
    totalCost += costs[route[numCities - 1]][route[0]]; // Добавляем стоимость возврата в начальный город
    return totalCost;
}
int main() {
    int numCities = 5; // Количество городов
    int initialCity = 1; // Начальный город

    return 0;
}