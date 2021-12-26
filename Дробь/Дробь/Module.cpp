//Создал студент 2-ого курса Подкопалов Андрей

#include "Header.h"
#include <exception> //для использования this

Simpfrac::Simpfrac() {
	numerator = 0;
	denominator = 1;
}

void Simpfrac::set_num(float new_numerator) {  //ввести дробь
	this->numerator = new_numerator; //вводим числитель
}

void Simpfrac::set_den(float new_denominator) {  //ввести дробь
	if (new_denominator != 0) {
		this->denominator = new_denominator; //вводим числитель
	}
	else
		throw std::invalid_argument("Знаменатель не может быть равен нулю");
	if (denominator < 0) {  //знаменатель всегда должен быть положительным
		this->numerator *= -1;
		this->denominator *= -1;
	}
}

void Simpfrac::addition(const Simpfrac &term) {  //сложение
	this->numerator = numerator * term.denominator + term.numerator * denominator;
	this->denominator *= term.denominator;
	algevklid();   
}

void Simpfrac::subtraction(const Simpfrac& sub) {  //вычитание
	this->numerator = numerator * sub.denominator - sub.numerator * denominator;
	this->denominator *= sub.denominator;
	algevklid();
}

void Simpfrac::multiplication(float factor) {  //умножение
	this->numerator *= factor;
	algevklid();
}

void Simpfrac::division(float divider) {  //деление
	if (divider != 0)
		this->numerator /= divider;
	else
		throw std::invalid_argument("Делитель не может быть равен нулю");
	algevklid();
}

int Simpfrac::comparison(const Simpfrac& comp) {  //сравнение
	int s;
	if (numerator / denominator > comp.numerator / comp.denominator)
		s = 0;
	else if (numerator / denominator < comp.numerator / comp.denominator)
		s = 1;
	else if (numerator / denominator - comp.numerator / comp.denominator <= 0.0000001)
		s = 2;
	return s;
}

float Simpfrac::tenfrac() {
	return numerator / denominator;
}

void Simpfrac::algevklid() { //алгоритм Евклида для сокращения дроби
	float num = abs(numerator);
	float den = abs(denominator);
	float d = 0;
	while (num != den) {
		if (den > num)
			std::swap(den, num);
		d = num - den;
		num -= d;
		den = d;
	}
	this->numerator /= num;
	this->denominator /= den;
}

void Simpfrac::get_frac() {  // отобразить дробь
	std::cout << numerator << "/" << denominator << "\n";
}