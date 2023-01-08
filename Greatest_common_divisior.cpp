#include <iostream>
using namespace std;
int GCD_Number(int first, int second);

int main()
{

    int firstNumber, secondNumber;
    cout << " Enter The First and Second Number : " << endl;
    cin >> firstNumber >> secondNumber;
    int ans = GCD_Number(firstNumber, secondNumber);
    cout << ans << endl;

    return 0;
}

int GCD_Number(int first, int second)
{
    if (second == 0)
        return first;
    return GCD_Number(second, first % second);
}
