/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.h
 *
 *    Description:  Reporte de calificaciones
 *
 *        Created:  2019-08-12
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef CALIFICACIONES_LIBROCALIFICACIONES_H
#define CALIFICACIONES_LIBROCALIFICACIONES_H

#include <string>
using std::string;
static const int ESTUDIANTES = 10;
static const int EXAMENES = 3;

class LibroCalificaciones {
private:

	string nombreCurso;
	int calificaciones[ESTUDIANTES][EXAMENES];
	int obtenerNotaMinima();
	int obtenerNotaMaxima();
	double obtenerPromedio(const int[], const int);


public:
	LibroCalificaciones();
	LibroCalificaciones(const string& nombreCurso, int[][EXAMENES]);
	string obtenerReporteNotas();
	string obtenerReporteNotasMaxMin();
	string getNombreCurso();
	void setNombreCurso(string&);

};


#endif //CALIFICACIONES_LIBROCALIFICACIONES_H