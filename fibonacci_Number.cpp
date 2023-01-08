#include <iostream>
using namespace std;
int fibonacciNumber(int number);

int main()
{

    // for loop

    for (int i = 0; i <= 10; i++)
    {
        cout << "Fib ( " << i << " ) = " << fibonacciNumber(i) << endl;
    }

    // normal print

    int number;
    cout << "Enter The Number : ";
    cin >> number;
    int ans = fibonacciNumber(number);
    cout << ans << endl;

    return 0;
}

int fibonacciNumber(int number)
{
    if (number == 1 || number == 0)
        return 1;
    return fibonacciNumber(number - 1) + fibonacciNumber(number - 2);
}