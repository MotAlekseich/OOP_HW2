#pragma once
#include <iostream>
#include <string>

class Fraction {
private:
	int a{};
	int b{};
	bool isPositive;
	void �ut();//���������� �����
public:
	Fraction();
	Fraction(int a, int b);
	Fraction(const Fraction& other);
	void print_Fraktion();
	Fraction sum(Fraction other);
	Fraction sub(Fraction other);
	Fraction sumInt(int num);
	Fraction subInt(int num);
	int gcd(int a, int b);// ���������� ����������� ������ �����������
};