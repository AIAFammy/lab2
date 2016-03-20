#include <iostream>
#include "bmi.h"
Bmi::Bmi() { height = 0; mass = 0; }
void Bmi::set(int h,int m) {
	height = h;
	mass = m;
	return;
}
int Bmi::geth() {
	return height;
}
int Bmi::getm() {
	return mass;
}
int Bmi::getcgy(float bmi) {
	if(bmi<15) return 1;
	else if(bmi<16) return 2;
    else if(bmi<18.5) return 3;
	else if(bmi<25) return 4;
    else if(bmi<30) return 5;
    else if(bmi<35) return 6;
    else if(bmi<40) return 7;
    else return 8;	
}
