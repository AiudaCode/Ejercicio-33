public class Empleado
{
    private String nombre;
    private int valor_hora;
    private int horas;
    public Empleado()
    {
        // le asignamos valores por defecto a los atributos de la clase Empleado
        nombre = "";
        valor_hora = 0;
        horas = 0;
    }
    
    // implementacion de los metodos Setters y Getters de los atributos de la clase Empleado
    public void setNombre(String val)
    {
        nombre = val;
    }
    public String getNombre()
    {
        return nombre;
    }
    public void setValorHora(int val)
    {
        valor_hora = val;
    }
    public int getValorHora()
    {
        return valor_hora;
    }
    public void setHoras(int val)
    {
        horas = val;
    }
    public int getHoras()
    {
        return horas;
    }

    // implementacion del metodo para calcular el salario mensual del empleado
    public int salarioMensual()
    {
        // declaramos una variable y la inicializamos en el valor de la hora por el numero de horas
        int salario = getValorHora() * getHoras();
        // retornamos el resultado de "salario"
        return salario;
    }
}
