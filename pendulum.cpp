#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Объявляем переменные для начальной и конечной амплитуды
    float initialAmplitude, finalAmplitude;
    int swings = 0;  // Счетчик колебаний

    // Ввод начальной амплитуды
    cout << "Введите начальную амплитуду (в см): ";
    cin >> initialAmplitude;

    // Ввод конечной амплитуды
    cout << "Введите конечную амплитуду (в см): ";
    cin >> finalAmplitude;

    // Проверка корректности ввода
    if (initialAmplitude <= finalAmplitude || initialAmplitude <= 0 || finalAmplitude < 0) {
        cout << "Ошибка ввода! Начальная амплитуда должна быть больше конечной и больше нуля." << endl;
        return 1; // Завершение программы с ошибкой
    }

    // Цикл для расчета количества колебаний
    while (initialAmplitude > finalAmplitude) {
        initialAmplitude -= initialAmplitude * 0.084; // Уменьшаем амплитуду на 8.4%
        swings++; // Увеличиваем счетчик колебаний
    }

    // Вывод результата
    cout << "Маятник качнется " << swings << " раз(а), прежде чем остановится." << endl;

    return 0;
}
