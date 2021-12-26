//Создал студент 2-ого курса Подкопалов Андрей

#include "Header.h"

using namespace std;
int main()
{
    setlocale(0, "ru");
    int c = 10;
    float num, den;
    float x;
    cout << "Введите числитель и знаменатель:\n";
    cin >> num >> den;
    cout << "\nВыберите функцию:\n0. Выход\n1. Сложение\n2. Вычитание\n3. Умножение\n4. Деление\n5. Сравнение\n6. Перевести в десятичную\n";
    Simpfrac dig;
    Simpfrac objSimpfrac;
    objSimpfrac.set_num(num);
    objSimpfrac.set_den(den);
    while (c != 0) {
        cin >> c;
        if (c == 1) {
            cout << "\nВведите числитель и знаменатель слагаемого\n";
            cin >> num >> den;
            dig.set_num(num);
            dig.set_den(den);
            objSimpfrac.addition(dig);
        }
        else if (c == 2) {
            cout << "\nВведите числитель и знаменатель вычитаемого\n";
            cin >> num >> den;
            dig.set_num(num);
            dig.set_den(den);
            objSimpfrac.subtraction(dig);
        }
        else if (c == 3) {
            cout << "\nВведите множитель\n";
            cin >> x;
            objSimpfrac.multiplication(x);
        }
        else if (c == 4) {
            cout << "\nВведите делитель\n";
            cin >> x;
            objSimpfrac.division(x);
        }
        else if (c == 5) {
            cout << "\nВведите числитель и знаменатель числа\n";
            cin >> num >> den;
            dig.set_num(num);
            dig.set_den(den);
            if (objSimpfrac.comparison(dig) == 0) 
                cout << "\nИзначальная дробь больше\n";
            if (objSimpfrac.comparison(dig) == 1)
                cout << "\nВведённая дробь больше\n";
            if (objSimpfrac.comparison(dig) == 2)
                cout << "\nДроби равны\n";
        }
        else if (c == 6) {
            cout << objSimpfrac.tenfrac() << "\n";
        }
        if (c!=5 and c!=6)
            objSimpfrac.get_frac();
        cout << "Выберите функцию\n";
    }
}