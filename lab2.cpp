#include <iostream>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include "bmi.h"
using namespace std;
int main() {
	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	int height,weight;
	while(inFile>>height>>weight){
		cout<<"data: "<<height<<"\t"<<weight<<endl;
	}
	return 0;
}
