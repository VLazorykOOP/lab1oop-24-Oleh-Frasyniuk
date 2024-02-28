#include <iostream>

int main() {

    int N; // Розмір масиву
    int A[N];

    //розмір масиву
    std::cout << "Enter the size of the array (N): ";
    std::cin >> N;

    //елементи масиву
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "A[" << i << "]: ";
        std::cin >> A[i];
    }

    int T1, T2;
    //значення T1 та T2
    std::cout << "Enter the value of T1: ";
    std::cin >> T1;
    std::cout << "Enter the value of T2: ";
    std::cin >> T2;

    int minIndex = -1; // Індекс останнього мінімального елемента
    int firstT2Index = -1; // Індекс першого елемента, рівного T2

    // Знаходимо індекс першого елемента, рівного T2
    for (int i = 0; i < N; ++i) {
        if (A[i] == T2) {
            firstT2Index = i;
            break;
        }
    }

    // Знаходимо останній мінімальний елемент, менший T1, та лежачий правіше першого елемента, рівного T2
    for (int i = firstT2Index + 1; i < N; ++i) {
        if (A[i] < T1 && (minIndex == -1 || A[i] <= A[minIndex])) {
            minIndex = i;
        }
    }

    // Виведення результату
    if (minIndex != -1) {
        std::cout << "Номер останнього мінімального елемента: " << minIndex << std::endl;
    }
    else {
        std::cout << "Мінімальний елемент не знайдено." << std::endl;
    }

    return 0;
}
