//������ ������� 2-��� ����� ���������� ������

#pragma once
#include <iostream>
#include <string>

class Simpfrac  //����� ������������ �����
{
private:
    float numerator, //���������
        denominator;  //�����������
public:
    Simpfrac();
    Simpfrac(float new_numerator, float new_denominator);
    void set_num(float new_numerator);  //���� ���������
    void set_den(float new_denominator); //���� �����������
    void addition(const Simpfrac& term); //��������
    void subtraction(const Simpfrac& sub); //��������
    void multiplication(float factor);  //���������
    void division(float divider);  //�������
    int comparison(const Simpfrac& comp);  //���������
    float tenfrac();  //����� � ���� ���������� �����
    void algevklid(); //�������� ������� ��� ���������� �����
    void get_frac(); // ���������� ����� 
};