// ConsoleApplication5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib>
using namespace std;
int a, b, d, f, g, h, j, l, m, n, p, r;
string c, e, i, k, o, q;

int main(){

	while (a != 2) {
		cout << "MENU" << endl;
		cout << "1) DAR DE ALTA UN ARTICULO" << endl;
		cout << "2) SALIR" << endl;
		cout << "3) LIMPIAR" << endl;
		cout << "ingrese un numero: ";
		cin >> a;
		switch (a) {
		case 1:
			cout << "ingrese un numero para el articulo nuevo: ";
				cin >> b;
				cout << "ingrese nombre del videojuego: ";
					cin >> c;
					cout << "ingrese la fecha de lanzamiento: ";
					cin >> d;
					cout << "ingrese genero: ";
						cin >> e;
						cout << "ingrese precio unitario: ";
						cin >> f;
						cout << "para dar de alta otro articulo ingrese 1: ";
						cin >> g;
						cout << "en caso de haber ingresado 1, ingrese el valor del articulo nuevo: ";
						cin >> h;
						if (g = 1, h!=b) {
							


							cout << "ingrese nombre del videojuego: ";
							cin >> i;
							cout << "ingrese la fecha de lanzamiento: ";
							cin >> j;
							cout << "ingrese genero: ";
							cin >> k;
							cout << "ingrese precio unitario: ";
							cin >> l;
							cout << "para dar de alta otro articulo ingrese 1: ";
							cin >> m;
							cout << "en caso de haber ingresado 1, ingrese el valor del articulo nuevo: ";
								cin >> n;
								if(m=1, n!=h, n!=b){
									cout << "ingrese nombre del videojuego: ";
									cin >> o;
									cout << "ingrese la fecha de lanzamiento: ";
									cin >> p;
									cout << "ingrese genero: ";
									cin >> q;
									cout << "ingrese precio unitario: ";
									cin >> r;
									
								}

						}
		
	case 3:	
			system("cls");

		}
	}
	cout << "presiona cualquier tecla";
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
