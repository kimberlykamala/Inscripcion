#pragma once
#include "Fecha.h"
#include "Hora.h"

class Fecha_Hora
{
private:
	Hora horas;
	Fecha fechas;
public:
	getHoras getFechaHora();
	void setFechaHora(Fecha_Hora fh);

	Fecha getFecha();
	void setFecha(Fecha f);

	Hora getHora();
	void setHora(Hora h);

	Fecha_Hora(void);
	~Fecha_Hora(void);
};

