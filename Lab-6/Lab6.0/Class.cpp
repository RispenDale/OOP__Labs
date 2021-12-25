#include <iostream>
#include "Class.h"

using namespace std;

// B1 --------------------------------------------------------------------------------------- B1

B1::B1() {
	this->b1 = 1;
}

B1::B1(int b1) {
	this->b1 = b1;
}

B1::~B1() {
	cout << "�������� ���������� B1" << endl;
}

void B1::Print() {
	cout << "�������� b1: " << this->b1 << endl;
}

// B2 ---------------------------------------------------------------------------------------- B2

B2::B2() {
	this->b2 = 2;
}

B2::B2(int b2) {
	this->b2 = b2;
}

B2::~B2() {
	cout << "�������� ���������� B2" << endl;
}

void B2::Print() {
	cout << "�������� b2: " << this->b2 << endl;
}

// D1 ---------------------------------------------------------------------------------------- D1

D1::D1() {
	this->d1 = 11;
	this->b1 = 11;
	this->b2 = 11;
}

D1::D1(int d1, int b1, int b2) {
	this->d1 = d1;
	this->b1 = b1;
	this->b2 = b2;
}

D1::~D1() {
	cout << "�������� ���������� D1" << endl;
}

void D1::Print() {
	B1::Print();
	B2::Print();

	cout << "�������� d1: " << this->d1 << endl;
}

// D2 ---------------------------------------------------------------------------------------- D2

D2::D2() {
	this->d2 = 22;
	this->d1 = 22;
	this->b2 = 22;
}

D2::D2(int d2, int d1, int b1, int b2) {
	this->d2 = d2;
	this->d1 = d1;
	this->b2 = b2;
}

D2::~D2() {
	cout << "�������� ���������� D2" << endl;
}

void D2::Print() {
	D1::Print();

	cout << "�������� d2: " << this->d2 << endl;
}

// D3 ------------------------------------------------------------------------------------- D3

D3::D3() {
	this->d3 = 33;
	this->d1 = 33;
	this->b2 = 33;
}

D3::D3(int d3, int d1, int b1, int b2) {
	this->d3 = d3;
	this->d1 = d1;
	this->b2 = b2;
}

D3::~D3() {
	cout << "�������� ���������� D3" << endl;
}

void D3::Print() {
	D1::Print();

	cout << "�������� d3: " << this->d3 << endl;
}


