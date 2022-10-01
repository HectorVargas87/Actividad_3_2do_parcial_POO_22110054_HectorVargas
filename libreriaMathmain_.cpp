/*
PRACTICA 3 DEl SEGUNDO PARCIAL

REALIZAR UNA "LIBRERÍA MATEMÁTICA" QUE SEA CAPAZ DE CALCULAR LA FUNCION SENO, COSENO, TANGENTE
Y LA MULTIPLICACION DE DOS MATRICES. EL PROGRAMA DEBE PREGUNTAR SI DESEA CALCULAR
OTRA FUNCION/OPERACION O SALIR DEL PROGRAMA.

Héctor Isaí Vargas de la Torre	22110054	2°O
Programación estructurada	30/09/2022
CETI COLOMOS
SEGUNDO PARCIAL
*/

#include <iostream> 
#include <math.h> 

using namespace std;

// Prototipos de funciones para calcular el perímetro de figuras geométricas.
float Funcion_Seno();
float Funcion_Coseno();
float Funcion_Tangente();
float Operacion_Matriz();


int main()
{
	float factorial;
	int opcf, n;
	float x, i, j, res;
	float constPi = 3.141592654;
	string resRepeat;

	do
	{  //Inicio del ciclo "do-while".
		cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
		cout << "\n  BIENVENIDO AL PROGRAMA PARA CALCULAR EL PERIMETRO DE FIGURAS\n" << endl;
		cout << "Elija una opcion de figura geometrica para obtener su perimetro " << endl;
		cout << "\n*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
		cout << "Seno..................1" << endl;
		cout << "Coseno................2" << endl;
		cout << "Tangente..............3" << endl;
		cout << "Matriz................4" << endl;
		cout << "SALIR DEL MENU........5" << endl;
		cout << "=*=*=*=*=*=*=*=*=*=*=*=*\n" << endl;
		cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
		cout << "\nElija una opcion: ";
		cin >> opcf;
		cout << "\n*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n" << endl;

		switch (opcf) //Inicio del ciclo "switch-case"
		{
		case 1:
			cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
			cout << "   Bienvenido al programa para calcular el seno de un angulo X" << endl;
			cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
			cout << "\nIntroduzca el angulo X (en grados):  ";
			cin >> x;
			x = (x * constPi) / 180;
			cout << "\nIntroduzca el numero de terminos:  ";
			cin >> n;
			res = 0;
			for (i = 0; i < n; i++)
			{
				factorial = 1;
				for (j = 1; j <= (2 * i + 1); j++)
					factorial *= j;
				x += pow(-1, i) * pow(x, 2 * i + 1) / factorial;
			}
			cout << "\nEl seno de " << x << " es: " << res << endl;
			cout << "------------------------------------------------------\n" << endl;
			break;

		case 2:
			cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
			cout << "  Bienvenido al programa para calcular el coseno de un angulo X" << endl;
			cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
			cout << "\nIntroduzca el angulo X (en grados):  ";
			cin >> x;
			x = (x * constPi) / 180;
			cout << "\nIntroduzca el numero de terminos:  ";
			cin >> n;
			res = 0;
			for (i = 0; i < n; i++)
			{
				factorial = 1;
				for (j = 1; j <= (2 * i); j++)
					factorial *= j;
				res += pow(-1, i) * pow(x, 2 * i) / factorial;
			}
			cout << "\nEl coseno de " << x << " es: " << res << endl;
			cout << "------------------------------------------------------\n" << endl;
			break;

		case 3:
			cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
			cout << "  Bienvenido al programa para calcular el tangente de un angulo X" << endl;
			cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
			cout << "\nIntroduzca el angulo X (en grados):  ";
			cin >> x;
			x = (x * constPi) / 180;
			cout << "\nIntroduzca el numero de terminos:  ";
			cin >> n;
			res = 0;
			for (i = 0; i < n; i++)
			{
				factorial = 1;
				for (j = 1; j <= (i); j++)
					factorial *= j;
				res += pow(x,i) / factorial;
			}
			cout << "\nLa tangente de " << x << " es: " << res << endl;
			cout << "------------------------------------------------------\n" << endl;
			break;

		case 4:

			cout << "\nLa matriz es:  "<<endl;
			cout << "------------------------------------------------------\n" << endl;
			break;

		case 5:
			cout << "------------------------------------------------------" << endl;
			cout << "                   SALIR DEL MENU  ";
			cout << "\n------------------------------------------------------\n" << endl;
			break;

		default:
			cout << "Opcion no valida, porfavor elija un numero de opcion valida" << endl;
		} //Fin del ciclo "switch-case"
		cout << "\nDeseas calcular otro perimetro? (S/N o pulse cualquier tecla para finalizar)\n";
		cin >> resRepeat;
	} while (resRepeat == "S" || resRepeat == "s" || resRepeat == "Si" || resRepeat == "SI" || resRepeat == "si");//Fin de DO-WHILE 

	cout << "\n\n*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
	cout << "*-*-*-*-*Gracias por utilizar el programa para CALCULAR EL PERIMETRO DE FIGURAS*-*-*-*-*\n";
	cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
	return 0;
}

