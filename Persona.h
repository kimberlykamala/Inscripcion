#pragma once
#include <string>
using namespace std;

class Persona
{
public:
private:
	string nombre;
	string apellido;
	int edad;
	int identificacion;
public:
	string getNombre();
	void setNombre(string c);

	string getApellido();
	void setApellido(string c);

	int getEdad();
	void setEdad(int n);

	int getIdentificacion();
	void setIdentificacion(int ID);

	Persona(void);
	~Persona(void);
};

