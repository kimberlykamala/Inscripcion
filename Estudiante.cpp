#include "StdAfx.h"
#include "Estudiante.h"

int Estudiante::getNumeroRegistro()
{
	return numero_registro;
}
void Estudiante::setNumeroRegistro(int nr)
{
	numero_registro = nr;
}
int Estudiante::getCarnetIdentidad()
{
	return carnet_identidad;
}
void Estudiante::setCarnetIdentidad(int ci)
{
	carnet_identidad =  ci
}
Estudiante Estudiante::getEstudiante()
{
	return *this;
}
void Estudiante::setEstudiante( Estudiante E)
{
	*this = E;
}
