/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Permite mostrar las calificaciones de un curso
 *
 *        Created:  2019-08-12
 *
 *         Author:  Danilo Alvarado Arce
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#include <iostream>
#include "LibroCalificaciones.h"
using std::cout;
using std::endl;

int main() {
	static const int ESTUDIANTES = 10;
	static const int EXAMENES = 3;
	string curso = "Curso Progra I";
	int listaCalificaciones[ESTUDIANTES][EXAMENES] = {
	{87, 96, 70},
	{ 68, 87, 90 },
	{ 94, 100, 90 },
	{ 100, 81, 82 },
	{ 83, 65, 85 },
	{ 78, 87, 65 },
	{ 85, 75, 83 },
	{ 91, 94, 100 },
	{ 76, 72, 84 },
	{ 87, 93, 73 }
	};
	
	LibroCalificaciones lC(curso, listaCalificaciones);
	cout << lC.obtenerReporteNotas() << endl<<endl;
	cout << lC.obtenerReporteNotasMaxMin() << endl;
};

