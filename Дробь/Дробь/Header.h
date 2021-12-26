//Создал студент 2-ого курса Подкопалов Андрей

#pragma once
#include <iostream>
#include <string>

class Simpfrac  //класс обыкновенной дроби
{
private:
    float numerator, //числитель
        denominator;  //знаменатель
public:
    Simpfrac();
    Simpfrac(float new_numerator, float new_denominator);
    void set_num(float new_numerator);  //ввод числителя
    void set_den(float new_denominator); //ввод знаменателя
    void addition(const Simpfrac& term); //сложение
    void subtraction(const Simpfrac& sub); //делитель
    void multiplication(float factor);  //умножение
    void division(float divider);  //деление
    int comparison(const Simpfrac& comp);  //сравнение
    float tenfrac();  //вывод в виде десятичной дроби
    void algevklid(); //алгоритм Евклида для сокращения дроби
    void get_frac(); // отобразить дробь 
};