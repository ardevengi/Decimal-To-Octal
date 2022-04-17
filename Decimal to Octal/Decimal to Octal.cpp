#include <iostream>

using namespace std;
// Function to convert from Decimal to Octal;
void dToO(int decimal)
{
    int octal[33], i = 0;
    for (i; decimal != 0; i++)
    {
        octal[i] = decimal % 8;
        decimal /= 8;
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

    do
    {
        cout << "num:";
        cin >> num;
        dToO(num);
    } while (num != 0);
    return 0;
}
