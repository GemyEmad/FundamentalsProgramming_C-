#include <iostream>
#include <cmath>
using namespace std;


float area(int radius);
float volume(int radius);

int main()
{
	/*int i = 5;
	double x =5.0;
	double y =2.0;
	double z = 5.21;
		cout<< "The absolute value of i is " << abs(i) << "\n \n";
		cout<< "The power of x to the power y is " << pow (x, y ) << "\n \n";
		cout<< "The Floor for Z is " << floor(z) << "\n \n";
		cout<< "The Ceil for Z is " << ceil(z) << "\n \n";*/
	int r;
	cout << "please enter the sphere radius \n";
	cin >> r;
	cout << "the sphere area  is " << area (r) << "\n";
	cout << "the sphere volume is " << volume (r) << "\n";
}
float area(int radius)
{
	return 4 *3.14 * radius* radius;

}
float volume(int radius)
{
	return 3 / 4 * 3.14 * radius * radius * radius;

}