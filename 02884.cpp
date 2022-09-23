// 2884. 알람 시계
// 입력된 시간보다 45분 전 시간을 출력한다
// Input. 현재 시간
// Output. 45분 전 시간

#include <iostream>
using namespace std;

int main(void)
{
	int h, m;
	cin >> h >> m;

	if (m < 45)
	{
		if (h == 0)
		{
			cout << h + 23 <<" "<< 60 + m - 45;
		}
		else
			cout << h - 1 <<" "<< 60 + m - 45;
	}
	if (45 <= m)
		cout << h <<" "<< m - 45;

	return 0;
}
