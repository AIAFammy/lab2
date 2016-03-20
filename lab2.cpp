#include <iostream>
#include <iomanip> //控制小數點輸出用
#include <fstream>
#include <cstdlib>
#include "bmi.h"
using namespace std;
int main() {
	Bmi bmi;
	ifstream inFile("file.in",ios::in);
	ofstream outFile("file.out",ios::out);
	float a,b,bmivalue;
	int hei,mas,bmicgy;
	while(inFile>>hei>>mas){
		if(hei==0) break;
		bmi.set(hei,mas);
	    a = bmi.geth();
		b = bmi.getm();
		bmivalue = ((b/a)/a)*10000;
		outFile<<fixed<<setprecision(2)<<bmivalue<<"\t";
		bmicgy = bmi.getcgy(bmivalue);
		switch(bmicgy){
			case(1):{outFile<<"Very severely underweight";break;}
			case(2):{outFile<<"Severely underweight";break;}
			case(3):{outFile<<"Underweight";break;}
			case(4):{outFile<<"Normal";break;}
			case(5):{outFile<<"Overweight";break;}
			case(6):{outFile<<"Obese Class I (Moderately obese)";break;}
			case(7):{outFile<<"Obese Class II (Severely obese)";break;}
			case(8):{outFile<<"Obese Class III (Very severely obese)";break;}
		}
		outFile<<endl;
	}
	return 0;
}
