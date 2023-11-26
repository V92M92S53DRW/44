#include <iostream>
using namespace std;
// Декларація функції
void proc6();
void DigitCountSum(int K, int& C, int& S);
void boolean18();
void Integer13();
bool isValidInput(int a, int b, int c);
bool checkPairEquality(int a, int b, int c);
int getInput();
int calculateResult(int input);
void displayResult(int result);
int main()
{

    cout << "Enter task number:" << endl;
    int menu;
    cin >> menu;
   
        switch (menu)
        {
        case 1:
            proc6();
            break;
        case 2:
            boolean18();
            break;
        case 3:
            Integer13();
            break;
        default:
            cout << "Only 1,2 and 3" << endl;
            break;
        }
   
    system("pause");
    return 0;
}
void DigitCountSum(int K, int& C, int& S) {
    // Ініціалізація змінних перед обчисленнями
    C = 0;
    S = 0;

    // Обчислення кількості і суми цифр
    while (K > 0) {
        int digit = K % 10; // Отримання останньої цифри
        C++;                // Збільшення кількості цифр
        S += digit;         // Додавання цифри до суми
        K /= 10;            // Вилучення останньої цифри
    }
}
void proc6() {
    int K1 = 0, K2 = 0, K3 = 0, K4 = 0, K5 = 0,C=0,S=0;
    cout << "Enter K1:" << endl;
    cin >> K1;
    cout << "Enter K2:" << endl;
    cin >> K2;
    cout << "Enter K3:" << endl;
    cin >> K3; 
    cout << "Enter K4:" << endl;
    cin >> K4;
    cout << "Enter K5:" << endl;
    cin >> K5;
    DigitCountSum(K1, C, S);
    cout <<"K1:"<<K1 <<" C = " << C << " S = " << S << endl;
    DigitCountSum(K2, C, S);
    cout << "K2:" << K2 << " C = " << C << " S = " << S << endl;
    DigitCountSum(K3, C, S);
    cout << "K3:" << K3 << " C = " << C << " S = " << S << endl;
    DigitCountSum(K4, C, S);
    cout << "K4:" << K4 << " C = " << C << " S = " << S << endl;
    DigitCountSum(K5, C, S);
    cout << "K5:" << K5 << " C = " << C << " S = " << S << endl;
}
// Функція перевірки вхідних даних на коректність
bool isValidInput(int a, int b, int c) {
    // Умова перевірки коректності вхідних даних
    return (a >-100 && a <100 && b>-100 && b<100&& c> -100 && c<100);
}

// Функція розрахунку результату на підставі коректних вхідних даних
bool checkPairEquality(int a, int b, int c) {
    // Перевірка істинності висловлювання
    return (a == b  a == c  b == c);
}
void boolean18() {
    // Вхідні дані : три цілих числа
        int num1, num2, num3;

    // Введення вхідних даних
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    // Перевірка коректності вхідних даних
    if (isValidInput(num1, num2, num3)) {
        // Розрахунок і виведення результату
        bool result = checkPairEquality(num1, num2, num3);
       cout << "Check result: " << (result ? "There is at least one matching pair." : "There are no matching pairs") << endl;
    }
    else {
        // Виведення повідомлення про некоректні вхідні дані
       cout << "Invalid input data. Please enter non-negative integers." << endl;
    }

}
int getInput() {
    int number;
    cout << "Enter a three-digit number: ";
    cin >> number;

    // Перевірка коректності введеного числа
    if (number >= 100 && number <= 999) {
        return number;
    }
    else {
       cout << "The entered number is incorrect. Please enter a three-digit number." << endl;
        // Якщо число некоректне, повертаємо -1 як ознаку помилки
        return -1;
    }
}

// Функція підрахунку результату
int calculateResult(int input) {
    // Закреслюємо першу цифру зліва і приписуємо її справа
    int result = (input % 100) * 10 + input / 100;
    return result;
}

// Функція виведення результату в консоль
void displayResult(int result) {
    cout << "The resulting number: " << result << endl;
}
void Integer13() {
    // Виклик функції введення
    int input = getInput();

    // Перевірка на коректність введення
    if (input != -1) {
        // Виклик функції підрахунку результату
        int result = calculateResult(input);

        // Виклик функції виведення результату
        displayResult(result);
    }
}