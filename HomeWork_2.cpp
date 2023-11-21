
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
void task_1();
void task_2();
void task_3();
void task_4();
void task_5();





int main()
{
	setlocale(LC_ALL, "RU");
	//task_1();
	//task_2();
	task_3();
	//task_4();
	//task_5();
		


}
void task_1()
{
	float a, b, c, D;
	printf("Введите коофициент: a ");
	cin >> a;
	printf("Введите коофициент: в ");
	cin >> b;
	printf("Введите коофициент: с ");
	cin >> c;
	D = b * b - 4 * a * c;            // Находим дискриминант
	cout << "Дискриминант = "<< D << endl;
	if (D < 0)
	{
		cout << "Корней нет" << endl;
	}

	else if(D == 0)

	{
		cout << "x = " << - b / (2 * a)<< endl;
	}
	else
	{
		cout << " x1 = " << (-b + sqrt(D)) / (2 * a)<< endl;
		cout << " x2 " << (-b - sqrt(D)) / (2 * a) << endl;

	}






 }

void task_2()
{
	int a, b, c;
	printf("Введите первое число: ");
	scanf_s("%d", &a);
	printf("Введите второе число: ");
	scanf_s("%d", &b);
	printf("Введите третье число: ");
	scanf_s("%d", &c);
	if ((a > b) && (a < c) || (a < b) && (a > c))
	{
		cout << a;
	}
	else if ((b > a) && (b < c) || (b < a) && (b > c))
	
		cout << b;
	
	else 

		cout << c;

}


void task_3()
{
	int a, b, c, sum;
	printf("Введите длину стороны а: ");
	scanf_s("%d", &a);
	printf("Введите длину стороны b: ");
	scanf_s("%d", &b);
	printf("Введите длину стороны c: ");
	scanf_s("%d", &c);

	if (a < (b + c) && b < (a + c) && c < (a + b))
		cout << " Треугольник  существует" << endl;
	else
		cout << " Треугольник    не существует" << endl;

	
	
	if ((a == b || b == c || a == c) && (a < (b + c) && b < (a + c) && c < (a + b)))
		cout << " Треугольник равнобедренный" << endl;

	if (a == b && b == c && c == a && a < (b + c) && b < (a + c) && c < (a + b))
		cout << " Треугольник равносторонний" << endl;



	    
	     

	


	
}

