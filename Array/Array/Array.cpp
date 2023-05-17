#include <iostream>
using namespace std;

struct Employee
{
	int emp_no;
	string fname;
	string	lname;
	float salary;
	float bonus;
	float net_salary;
};

int main()
{
	Employee x[5];
	x [0].emp_no = 12;
	x [0].fname = "Ahmed";
	x [0].lname = "Ali";
	x [0].salary = 3000;
	x [0].bonus = 500;
	x [0].net_salary = x [0].salary + x [0].bonus;

  
}