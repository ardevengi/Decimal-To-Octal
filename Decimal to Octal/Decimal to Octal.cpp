#include <iostream>

using namespace std;
// Function to convert from Decimal to Octal;
void dToO(int decimal)
{
    int octal[33], i;
    for (int i = 0; decimal != 0; i++)
    {
        octal[i] = decimal % 8;
        decimal % 8;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << octal[j];
    }
    cout << endl;
}

int main()
{
    int num;
    cout << "num:";
    cin >> num;
    dToO(num);

    return 0;
}