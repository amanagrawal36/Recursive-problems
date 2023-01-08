#include <iostream>
using namespace std;
int sumNumber(int num);

int main()
{

    int number;
    cout << "Enter The Number : ";
    cin >> number;
    int ans = sumNumber(number);
    cout << ans << endl;


    return 0;
}

// sum of number function -- (5) --> 5 + 4 + 3 + 2 + 1 = 15
int sumNumber(int num){
    // base case
    if(num==1) return num;
    return num + sumNumber(num-1);
}
