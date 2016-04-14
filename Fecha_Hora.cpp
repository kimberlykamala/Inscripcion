#include "StdAfx.h"
#include "Fecha_Hora.h"
#include "Persona.h"
#include "Fecha.h"
#include "Hora.h"


getHora Persona::getFechaHora()
{
	return *this;
}
void Persona::setFechaHora(Fecha_Hora fh)
{
	*this = fh;
}
Fecha Fecha_Hora::getFecha()
{
	return fechas;
}
void Fecha_Hora::setFecha(Fecha f)
{
	fechas=f;
}
Hora Fecha_Hora::getHora()
{
	return horas;
}
void Fecha_Hora::setHora(Hora h)
{
	horas = f;
}
