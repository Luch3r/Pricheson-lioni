#include <iostream>
using namespace std;

int main() {
    int age;

    do {
        cout << "Введите ваш возраст: ";
        cin >> age;

        if (age < 1 || age > 120) {
            cout << "Ошибка! Возраст должен быть от 1 до 120. Попробуйте снова." << endl;
        }

    } while (age < 1 || age > 120);

    cout << "Отлично! Вам " << age << " лет. Добро пожаловать!" << endl;

    return 0;
}
