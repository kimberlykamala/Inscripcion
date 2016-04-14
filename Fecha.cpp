
#include "Fecha.h"

int Fecha::getDia()
{
	return dia;
}
int Fecha::setDia(int d)
{
	dia = d;

int Fecha::getMes()
{
	return mes;
}
int Fecha::setMes(int m)
{
	mes = m;
}
int Fecha::getAño()
{
	return año;

}
int Fecha::setAño(int a)
{
	año = a;
}
Fecha Fecha::getFecha()
{
	return *this;
}
void Fecha::setFecha(Fecha f)
{
	*this = f;
}
