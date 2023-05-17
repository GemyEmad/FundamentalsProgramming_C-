#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter value for I \n";
    cin >> i;
    switch (i)
    {
    case 10:
        cout << "Iam in case 1 \n";
        break;

    case 20:
        cout << "Iam in case 2 \n";
        break;

    case 30:
        cout << "Iam in case 3 \n";
        break;

    default:
        cout << "Iam in default case \n";

    }

    return 0;
}