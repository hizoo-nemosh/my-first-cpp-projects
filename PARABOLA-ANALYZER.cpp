#include <iostream>
#include <cmath>

/*
  --------------------------------------------------
  Project: Quadratic Master
  Version: 1.0
  Author:  Nainkoo
  Note:    Created for educational purposes.
  --------------------------------------------------
*/

void baza();

int main()
{
	int flag = 1;
	while (flag != 0)
	{
		baza();
		std::cout << "\nTo exit press 0: ";
		std::cin >> flag;
		if (flag != 0)
		{
			std::cout << "\033[2J\033[H";
		}
	}
	return 0;
}

void print_menu()
{
	std::cout << "|=============================|\n";
	std::cout << "|  Quadratic Function Analiz  |\n";
	std::cout << "|=============================|\n\n";

	std::cout << "1. Diskriminant\n";
	std::cout << "2. Analiz function\n";
	std::cout << "3. Integral \n";
	std::cout << "4. All\n\n";
}

void Diskrim(double a, double b, double c)
{
	double D = b * b - 4 * c * a;
	std::cout << "\nD = " << D << "\n";
	if (D > 0)
	{
		double xone = (-b + sqrt(D)) / (2 * a);
		double xtwo = (-b - sqrt(D)) / (2 * a);
		std::cout << "Result: " << xone << ", " << xtwo;
	}
	else if (fabs(D) < 1e-9)
	{
		double xone = (-b) / (2 * a);
		std::cout << "Result: " << xone;
	}
	else
	{
		std::cout << D << " < 0\n"
				  << "No real roots\n";
		D = sqrt(fabs(D));
		if (b != 0)
		{
			double dest = -b / (2 * a);
			double complex = D / (2 * a);
			std::cout << dest << " ± "
					  << "i" << complex;
		}
		else
		{
			double complex = D / (2 * a);
			std::cout << "± i" << complex;
		}
	}
}

void Analiz(double a, double b, double c)
{
	std::cout << "\n\nFunction Analysis\n";

	double vershx = (-b) / (2 * a);
	double vershy = a * vershx * vershx + b * vershx + c;

	std::cout << "\nVertex: " << vershx << ", " << vershy;
	std::cout << (a > 0 ? "\nBranches direction: UP\n" : "\nBranches direction: DOWN\n");
}

void Integral(double a, double b, double c)
{
	double a_pred;
	double b_pred;
	std::cout << "\nEnter limits: ";
	std::cout << "\nUpper: ";
	std::cin >> a_pred;
	std::cout << "Lower: ";
	std::cin >> b_pred;
	long double integral = fabs((a * (a_pred * a_pred * a_pred) / 3 + b * (a_pred * a_pred) / 2 + c * a_pred) - (a * (b_pred * b_pred * b_pred) / 3 + b * (b_pred * b_pred) / 2 + c * b_pred));
	std::cout << "Definite integral: " << integral;
}

void baza()
{
	print_menu();
	double a = 0, b = 0, c = 0;
	std::cout << "Enter coefficient a: ";
	std::cin >> a;
	std::cout << "Enter coefficient b: ";
	std::cin >> b;
	std::cout << "Enter coefficient c: ";
	std::cin >> c;
	if (a == 0)
	{
		std::cout << "Error: coefficient 'a' cannot be 0\n";
		return;
	}
	int chouse = 0;
	std::cout << "\nSelect option: ";
	std::cin >> chouse;
	switch (chouse)
	{
	case 1:
		Diskrim(a, b, c);
		break;
	case 2:
		Analiz(a, b, c);
		break;
	case 3:
		Integral(a, b, c);
		break;
	case 4:
		Diskrim(a, b, c);
		Analiz(a, b, c);
		Integral(a, b, c);
		break;
	default:
		std::cout << "\nPlease enter 1, 2, 3 or 4";
		break;
	}
}
