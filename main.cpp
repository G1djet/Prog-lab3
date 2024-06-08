#include <iostream>

int main() {
    const int size = 15;
    int X[size];
    int K;

    std::cout << "Введите элементы массива X1, X2, ..., X15:n";
    for (int i = 0; i < size; i++) {
        std::cin >> X[i];
    }

    std::cout << "Введите число K: ";
    std::cin >> K;

    for (int i = 0; i < size - 4; i++) {
        if (X[i] + X[i+1] + X[i+2] + X[i+3] + X[i+4] == K) {
            for (int j = i; j < size - 5; j++) {
                X[j] = X[j+5];
            }
            break;
        }
    }

    std::cout << "Итоговый массив:n";
    for (int i = 0; i < size - 5; i++) {
        std::cout << X[i] << " ";
    }

    return 0;
}





/*лгоритм:
1. Ввести с клавиатуры элементы целочисленного массива X1, X2, ..., X15.
2. Ввести с клавиатуры число K.
3. Пройти по массиву и найти группу из пяти рядом стоящих элементов, сумма которых равна числу K.
4. Если такая группа найдена, исключить ее из массива, сдвинув все элементы после нее на 5 позиций влево.
5. Вывести полученный массив на экран.*/



