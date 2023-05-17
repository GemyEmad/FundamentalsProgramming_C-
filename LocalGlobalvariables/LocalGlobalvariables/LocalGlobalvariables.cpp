#include <iostream>
#include <cmath>
using namespace std;


int x = 10;

int main()
{
    int x = 50;
    cout << ::x <<" \n";
    cout << " local x" << x << "\n";
    {
        cout << "from inner block " << x << "\n";
    }

}
