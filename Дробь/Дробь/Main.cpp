//������ ������� 2-��� ����� ���������� ������

#include "Header.h"

using namespace std;
int main()
{
    setlocale(0, "ru");
    int c = 10;
    float num, den;
    float x;
    cout << "������� ��������� � �����������:\n";
    cin >> num >> den;
    cout << "\n�������� �������:\n0. �����\n1. ��������\n2. ���������\n3. ���������\n4. �������\n5. ���������\n6. ��������� � ����������\n";
    Simpfrac dig;
    Simpfrac objSimpfrac;
    objSimpfrac.set_num(num);
    objSimpfrac.set_den(den);
    while (c != 0) {
        cin >> c;
        if (c == 1) {
            cout << "\n������� ��������� � ����������� ����������\n";
            cin >> num >> den;
            dig.set_num(num);
            dig.set_den(den);
            objSimpfrac.addition(dig);
        }
        else if (c == 2) {
            cout << "\n������� ��������� � ����������� �����������\n";
            cin >> num >> den;
            dig.set_num(num);
            dig.set_den(den);
            objSimpfrac.subtraction(dig);
        }
        else if (c == 3) {
            cout << "\n������� ���������\n";
            cin >> x;
            objSimpfrac.multiplication(x);
        }
        else if (c == 4) {
            cout << "\n������� ��������\n";
            cin >> x;
            objSimpfrac.division(x);
        }
        else if (c == 5) {
            cout << "\n������� ��������� � ����������� �����\n";
            cin >> num >> den;
            dig.set_num(num);
            dig.set_den(den);
            if (objSimpfrac.comparison(dig) == 0) 
                cout << "\n����������� ����� ������\n";
            if (objSimpfrac.comparison(dig) == 1)
                cout << "\n�������� ����� ������\n";
            if (objSimpfrac.comparison(dig) == 2)
                cout << "\n����� �����\n";
        }
        else if (c == 6) {
            cout << objSimpfrac.tenfrac() << "\n";
        }
        if (c!=5 and c!=6)
            objSimpfrac.get_frac();
        cout << "�������� �������\n";
    }
}