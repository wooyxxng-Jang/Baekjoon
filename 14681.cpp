// 14681. 사분면 만들기
// x, y 좌표 입력 받아 몇 사분면에 속하는지 알려주는 프로그램
// Input. x,y
// Output. 사분면

#include <iostream>
using namespace std;

int main(void)
{
	int x, y;

	cin >> x >> y;

	if (x > 0 && y > 0)
		cout << "1";

	if (x < 0 && y > 0)
		cout << "2";

	if (x < 0 && y < 0)
		cout << "3";

	if (x > 0 && y < 0)
		cout << "4";

	return 0;
}
