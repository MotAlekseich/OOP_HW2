#include "Class.hpp"



//По умолчанию
Fraction::Fraction() : Fraction(a = 1, b = 1) {}

//Параметрический
Fraction::Fraction(int a, int b) {
	this->a = a;
	this->b = b;
	if (a / b < 0) {
		isPositive = false;
	}
	сut();
}
//Конструктор копирования
Fraction::Fraction(const Fraction& other) : Fraction(other.a, other.b) {}

void Fraction::print_Fraktion(){
	std::cout << ' ' << this->a << "\n-\n" << ' ' << this->b << std::endl;
}

Fraction Fraction::sum(Fraction other){
	
	if (this->b == other.b) {
		other.a = this->a + other.a;
		
	}
	else {
		other.a = (this->a * other.b) + (other.a * this->b);
		other.b = this->b * other.b;
	}

	return other;
}

Fraction Fraction::sub(Fraction other){
	if (this->b == other.b) {
		other.a = this->a - other.a;
		
	}
	else {
		other.a = (this->a * other.b) - (other.a * this->b);
		other.b = this->b * other.b;
	}
	return other;
}

Fraction Fraction::sumInt(int num){
	Fraction newFraction;
	num = this->b * num;
	newFraction.a = this->a + num;
	newFraction.b = this->b;

	return newFraction;
}

Fraction Fraction::subInt(int num){
	Fraction newFraction;
	num = this->b * num;
	newFraction.a = this->a - num;
	newFraction.b = this->b;


	return newFraction;
}

int Fraction::gcd(int a, int b){
	while (b != 0) {
		int t = b;
		b = a % b;
		a = t;
	}
	return a;
}

void Fraction::сut() {
	int divisor = gcd(a, b);
	this->a /= divisor;
	this->b /= divisor;
}


