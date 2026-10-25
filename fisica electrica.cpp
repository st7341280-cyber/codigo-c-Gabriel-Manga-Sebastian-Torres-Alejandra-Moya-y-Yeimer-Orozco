// fisica electrica.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double q = 1.60e-19;
	double vx = 3.00e5, vy = 4.00e5, vz = 0.0;
	double bx = 0.0, by = 0.0, bz = 0.500;


	double cx = (vy * bz) - (vz * by);
	double cy = (vz * bx) - (vx * bz);
	double cz = (vx * by) - (vy * bx);

	double fbx = q * cx;
	double fby = q * cy;
	double fbz = q * cz;

	double magnitud = sqrt(fbx * fbx + fby * fby + fbz * fbz);

	cout << scientific << setprecision(2);

	cout << "\n========================================\n";
	cout << "       FUERZA MAGNETICA DE LORENTZ\n";
	cout << "========================================\n";

	cout << "\n[1] PRODUCTO VECTORIAL (v x B)\n";
	cout << "----------------------------------------\n";
	cout << "Componente X: " << cx << '\n';
	cout << "Componente Y: " << cy << '\n';
	cout << "Componente Z: " << cz << '\n';

	cout << "\n[2] FUERZA MAGNETICA DEL PROTON\n";
	cout << "----------------------------------------\n";
	cout << "Fuerza en X:  " << fbx << " N\n";
	cout << "Fuerza en Y:  " << fby << " N\n";
	cout << "Fuerza en Z:  " << fbz << " N\n";

	cout << "\nMagnitud total: " << magnitud << " N\n";

	cout << "\n========================================\n";
	cout << "              FIN DEL CALCULO\n";
	cout << "========================================\n";

	return 0;
}


//Gabriel Manga Sebastián Torres Alejandra Moya y Yeimer orozoco
