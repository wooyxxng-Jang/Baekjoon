// 9498. 시험 성적
// 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램
// Input. exam_score
// Output. A, B, C, D, F

#include <iostream>
using namespace std;

int main(void)
{
	int exam_score;

	cin >> exam_score;

	if (90 <= exam_score && exam_score <= 100)
		cout << "A" << endl;
	else if (80 <= exam_score && exam_score <= 89)
		cout << "B" << endl;
	else if (70 <= exam_score && exam_score <= 79)
		cout << "C" << endl;
	else if (60 <= exam_score && exam_score <= 69)
		cout << "D" << endl;
	else
		cout << "F" << endl;

	return 0;
}
