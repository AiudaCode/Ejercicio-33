
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        // se crea un objeto de la clase Numero (Instanciaciación)
        Empleado obj = new Empleado();

        // declaro una variable llamada "nombre" de tipo string
        String nombre;
        // declaro dos variable llamadas "v_hora" y "horas_t" de tipo int
        int v_hora, horas_t;

        // se pide al usuario que ingrese el nombre del empleado y guardamos el dato en la variable nombre
        nombre = JOptionPane.showInputDialog("Digite nombre del empleado:");
        // encapsulamos la variable "nombre"
        obj.setNombre(nombre);

        // se pide al usuario que ingrese el valor de la hora y se guarda el dato en la variable "v_hora"
        v_hora = Integer.parseInt(JOptionPane.showInputDialog("Digite valor de la hora:"));
        // encapsulamos la variable "v_hora"
        obj.setValorHora(v_hora);

        // pedimos al usuario que ingrese numero de horas que trabajo y guardamos el dato en la variable "horas_t"
        horas_t = Integer.parseInt(JOptionPane.showInputDialog("Digite horas trabajadas:"));
        // encapsulamos la variable "horas_t"
        obj.setHoras(horas_t);

        // si el salario mensual es mayor a 450000
        if (obj.salarioMensual() > 450000)
        {
            // entonces mostrara el nombre del empleado y el salario mensual
            JOptionPane.showMessageDialog(null, "Empleado: " + obj.getNombre() + "\nSalario mensual: " + obj.salarioMensual());
        }
        else
        {
            // sino, solo mostrara el nombre del empleado
            JOptionPane.showMessageDialog(null, "Empleado: " + obj.getNombre());
        }
    }
}