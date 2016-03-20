#include <string>
using namespace std;
class Bmi {
public:
	Bmi();
	void set(int h,int m); //設定身高值、體重值
	int geth(); //取得身高
	int getm(); //取得體重
	int getcgy(float bmi); //給予BMI值，傳回相對應結果 
private:
	int height;
	int mass;
};
