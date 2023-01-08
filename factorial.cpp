#include <iostream>
using namespace std;
int factorial_Number(int num);

int main()
{

    int number;
    cout << "Enter The Number : ";
    cin >> number;
    int ans = factorial_Number(number);
    cout << ans << endl;

    return 0;
}

// factorial function -- (5) --> 5 * 4 * 3 * 2 * 1 = 120


int factorial_Number(int num)
{
    // base case
    if (num == 1)
        return num;
    return num * factorial_Number(num - 1);
}