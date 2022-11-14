
#include <iostream>

class Calculator {
private:
    double num1;
    double num2;
public:
    bool set_num1(double value) {
        if (value != 0) {
            num1 = value;
            return true;
        }
        else {
            return false;
        }
    }
    bool set_num2(double value) {
        if (value != 0) {
            num2 = value;
            return true;
        }
        else {
            return false;
        }
    }
    double add() {
        return (num1 + num2);
    }

    double multiply() {
        return num1 * num2;
    }

    double subtract_1_2() {
        return num1 - num2;
    }

    double subtract_2_1() {
        return num2 - num1;
    }

    double divide_1_2() {
        return num1 / num2;
    }

    double divide_2_1() {
        return num2 / num1;
    }
};

int main()
{
    std::setlocale(LC_ALL, "Russian");
    Calculator calculator;
    double num1 = 0;
    double num2 = 0;
    bool flag = true;
    while (true) {
        flag = true;
        while (flag) {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            flag = !calculator.set_num1(num1);
            if (flag) std::cout << "Неверный ввод!\n";
        }
        flag = true;
        while (flag) {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            flag = !calculator.set_num2(num2);
            if (flag) std::cout << "Неверный ввод!\n";
        }
        std::cout << "num1 + num2 " << calculator.add() << "\n";
        std::cout << "num1 * num2 " << calculator.multiply() << "\n";
        std::cout << "num1 - num2 " << calculator.subtract_1_2() << "\n";
        std::cout << "num2 - num1 " << calculator.subtract_2_1() << "\n";
        std::cout << "num1 / num2 " << calculator.divide_1_2() << "\n";
        std::cout << "num2 / num1 " << calculator.divide_2_1() << "\n";
    }
}

