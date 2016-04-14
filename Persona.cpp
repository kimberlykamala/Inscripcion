#include "StdAfx.h"
#include "Persona.h"
#include <string>



string Persona::getNombre()
{
	return nombre;
}
void Persona::setNombre(string c)
{
	nombre=c;
}
string Persona::getApellido()
{
	return apellido;
}
void Persona::setApellido(string c)
{
	apellido=c;
}
int Persona::getEdad()
{
	return edad;
}
void Persona::setEdad(int n)
{
	edad= n;
}

int Persona::getIdentificacion()
{
	return identificacion;
}
void Persona::setIdentificacion(int ID)
{
	identificacion = ID;
}

