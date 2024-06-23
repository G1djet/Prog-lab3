/**
 * @file main.cpp
 * @brief Программа для обработки массива целых чисел и удаления подпоследовательности, сумма элементов которой равна заданному числу.
 */

#include <iostream>

int main() {
    const int size = 15; /**< Размер массива */
    int X[size]; /**< Массив целых чисел */
    int K; /**< Число для сравнения */

    std::cout << "Enter the array elements X1, X2, ..., X15: ";
    for (int i = 0; i < size; i++) {
        std::cin >> X[i];
    }

    std::cout << "Enter the number K: ";
    std::cin >> K;

    for (int i = 0; i < size - 4; i++) {
        if (X[i] + X[i+1] + X[i+2] + X[i+3] + X[i+4] == K) {
            for (int j = i; j < size - 5; j++) {
                X[j] = X[j+5];
            }
            break;
        }
    }

    std::cout << "The resulting array: ";
    for (int i = 0; i < size - 5; i++) {
        std::cout << X[i] << " ";
    }

    return 0;
    }