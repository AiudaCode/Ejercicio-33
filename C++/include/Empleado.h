#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>

using namespace std;


class Empleado
{
    public:
        Empleado();
        virtual ~Empleado();
        // declaramos los metodos publicos
        void setNombre(string val);
        string getNomre();
        void setValorHora(int val);
        int getValorHora();
        void setHoras(int val);
        int getHoras();
        int salarioMensual();
    protected:

    private:
        // declaramos los atributos privados
        string nombre;
        int valor_hora;
        int horas;
};

#endif // EMPLEADO_H
