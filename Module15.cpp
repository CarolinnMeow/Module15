#include <iostream>

using namespace std;

const int N = 22;

void FindOddNumbers(int limit, bool isOdd)
{
    for (int i = isOdd; i <= limit; i+=2)
    {
        cout << i << " ";
    }
}

int main()
{
    FindOddNumbers(N, true);
    cout << "\n";
    FindOddNumbers(N, false);
}

