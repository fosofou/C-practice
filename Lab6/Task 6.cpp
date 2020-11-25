#include <cstdio>
#include "Uvalue.h"
#include "Rvalue.h"
#include "Ivalue.h"
#include "Tvalue.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	{
		Rvalue rvalue(30);
		Ivalue ivalue(50);
		Uvalue uvalue = rvalue * ivalue;
		cout << "Расчет напряжения U по известным значениям тока I и сопротивления R: "
			<< "R = " << rvalue.get_val() << " I = " << ivalue.get_val() << " U = "
			<< uvalue << endl << endl;
	}
	{
		Uvalue uvalue(10);
		Rvalue rvalue(30);
		Ivalue ivalue = uvalue / rvalue;
		cout << "Расчет тока I по известным значениям напряжения U и сопротивления R: "
			<< "U = " << uvalue.get_val() << " R = " << rvalue.get_val()
			<< " I = " << ivalue << endl << endl;
	}
	{
		Uvalue uvalue(75);
		Ivalue ivalue(15);
		Rvalue rvalue = uvalue / ivalue;
		cout << "Расчет сопротивления R по известным значениям напряжения U и тока I: "
			<< "U = " << uvalue.get_val() << " I = " << ivalue.get_val()
			<< " R = " << rvalue << endl << endl;
	}
	{
		Rvalue r1(80);
		Rvalue r2(90);
		Rvalue Rconsist = r1 + r2;
		Rvalue Rparallel = r1 % r2;
		cout << "Сопротивления резисторов равно " << "R1 = " << r1.get_val() << " R2 = " << r2.get_val() << endl;
		cout << "Расчет итогового сопротивления для последовательного соединения резисторов: " << Rconsist << endl;
		cout << "Расчет итогового сопротивления для параллельного соединения резисторов: " << Rparallel << endl << endl;
	}
	{
		Cvalue c1(20);
		Cvalue c2(110);
		Cvalue Cconsist = c1 + c2;
		Cvalue Cparallel = c1 % c2;
		cout << "Ёмкость конденсаторов равна " << "C1 = " << c1.get_val() << " C2 = " << c2.get_val() << endl;
		cout << "Сопротивления резисторова равно " << "R1 = " << c1.get_val() << " R2 = " << c2.get_val() << endl;
		cout << "Расчет итоговой ёмкости для параллельного соединения конденсаторов: " << Cconsist << endl;
		cout << "Расчет итоговой ёмкости для последовательного соединения конденсаторов: " << Cparallel << endl << endl;
	}
	{
		Cvalue cvalue(10e-6);
		Rvalue rvalue(200e+3);
		Uvalue uvalue(1);
		Ivalue ivalue(uvalue / rvalue);
		int count = 1;
		for (double t = 0; t <= 2.01; t += 0.1)
		{
			Tvalue tvalue(t);
			Qvalue qvalue = ivalue * tvalue;
			cout << count << "  t: " << tvalue << '\t' << " U: " << qvalue / cvalue << endl;
			count += 1;
		}
	}
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
