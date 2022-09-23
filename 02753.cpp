// 2753. 윤년
// 연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램
// Input. year
// Output. 1, 0

#include <iostream>
using namespace std;

int main(void)
{
	int year;
    
	cin >> year;
    
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		cout << "1";
    
	else
		cout << "0";

	return 0;
}
