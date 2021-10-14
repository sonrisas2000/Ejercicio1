#include <iostream>
using namespace std; //Nos pemite borrar el std
int main() {
	int suma = 1;
	int resta = 2;
	int multiplicar = 3;
	int operacion = 0;


	cout << "Elige que operacion deseas realizar:" << endl << "1.Suma 2.Resta 3.Multiplicar" << endl;
	cin >> operacion;


	if (operacion == 1) {
		int A = 0;
		int B = 0;
		cout << "Escribe el primer valor" << endl;
		cin >> A;
		cout << "Escribe el segundo valor" << endl;
		cin >> B;
		cout << "Primer valor: " << A << " Segundo valor: " << B << endl;
		int resultado = A + B;
		cout << "Resultado : " << resultado << endl;
	}
	if (operacion == 2) {
		int A = 0;
		int B = 0;
		cout << "Escribe el primer valor" << endl;
		cin >> A;
		cout << "Escribe el segundo valor" << endl;
		cin >> B;
		cout << "Primer valor: " << A << " Segundo valor: " << B << endl;
		int resultado = A - B;
		cout << "Resultado : " << resultado << endl;
	}
	if (operacion == 3) {
		int A = 0;
		int B = 0;
		cout << "Escribe el primer valor" << endl;
		cin >> A;
		cout << "Escribe el segundo valor" << endl;
		cin >> B;
		cout << "Primer valor: " << A << " Segundo valor: " << B << endl;
		int resultado = A * B;
		cout << "Resultado : " << resultado << endl;
	}
	else
	{
		int respuesta;

		cout << "Volver a inetarlo" << endl << "1 o 2" << endl;
		cin >> respuesta;
		if (respuesta == 1) {
			main();

		}
		else
		{
			system("CLS");
		}


		/*char state = "D";
		switch (state)
		{
		case "A":
			break;
		}
		case "B":
			break;

		{
		case "C":
			break;
		}*/
	}
}
	
	
	
