//������ ������� 2-��� ����� ���������� ������

#include "Header.h"
#include <exception> //��� ������������� this

Simpfrac::Simpfrac() {
	numerator = 0;
	denominator = 1;
}

void Simpfrac::set_num(float new_numerator) {  //������ �����
	this->numerator = new_numerator; //������ ���������
}

void Simpfrac::set_den(float new_denominator) {  //������ �����
	if (new_denominator != 0) {
		this->denominator = new_denominator; //������ ���������
	}
	else
		throw std::invalid_argument("����������� �� ����� ���� ����� ����");
	if (denominator < 0) {  //����������� ������ ������ ���� �������������
		this->numerator *= -1;
		this->denominator *= -1;
	}
}

void Simpfrac::addition(const Simpfrac &term) {  //��������
	this->numerator = numerator * term.denominator + term.numerator * denominator;
	this->denominator *= term.denominator;
	algevklid();   
}

void Simpfrac::subtraction(const Simpfrac& sub) {  //���������
	this->numerator = numerator * sub.denominator - sub.numerator * denominator;
	this->denominator *= sub.denominator;
	algevklid();
}

void Simpfrac::multiplication(float factor) {  //���������
	this->numerator *= factor;
	algevklid();
}

void Simpfrac::division(float divider) {  //�������
	if (divider != 0)
		this->numerator /= divider;
	else
		throw std::invalid_argument("�������� �� ����� ���� ����� ����");
	algevklid();
}

int Simpfrac::comparison(const Simpfrac& comp) {  //���������
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

void Simpfrac::algevklid() { //�������� ������� ��� ���������� �����
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

void Simpfrac::get_frac() {  // ���������� �����
	std::cout << numerator << "/" << denominator << "\n";
}