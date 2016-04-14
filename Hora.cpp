#include "Hora.h"

int Hora::getMinutos()
{
	return minutos;
}
void Hora::setMinutos(int m)
{
	minutos = m;
}
int Hora::getSegundos()
{
	return segundos;
}
void Hora::setSegundos(int s)
{
	segundos = s;
}
int Hora::getHoras()
{
	return horas;
}
void Hora::setHoras(int h)
{
	horas = h;
}
Hora Hora::getObjetoHora()
{
	return *this;
}
void Hora::setObjetoHora(int h)
{
	*this = h;
}
