#include <iostream>
using namespace std;

int main(void)
{
    int num;

    cin >> num;

    int i = 0;

    if (num == 1)
        i = 1;

    if (num != 1)
    {
        for (int sum = 2; sum <= num; i++)
            sum += 6 * i;
    }

    cout << i;

    return 0;
}
