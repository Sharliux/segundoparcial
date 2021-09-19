#include <iostream>

using namespace std;
int Funcion_suma(int x, int y);
struct Empleado{
    int *codigo_empleado;
    string *nombre;
    string *apellido;
    string *puesto;
    int *salario;
    int *bonificacion;
};

int main(){
    int fila_trabajador=0, opcion;
	int d,x,y;
	int suma;
	int res;
	int salario=0;
    int bonificacion=0;

    Empleado funcionario;
        cout<<"Cuantos Empleados Desea Ingresar: ";
        cin>>fila_trabajador;

    funcionario.codigo_empleado = new int[fila_trabajador];
    funcionario.nombre = new string[fila_trabajador];
    funcionario.apellido = new string[fila_trabajador];
    funcionario.puesto = new string[fila_trabajador];
  	funcionario.salario = new int[fila_trabajador];
  	funcionario.bonificacion = new int[fila_trabajador];
	cout<<"--------------Ingrese Datos--------------"<<endl;
	string nombre;
		for (int i=0;i<fila_trabajador;i++){
    	cout<<"Codigo: ";
    	cin>>funcionario.codigo_empleado[i];
    	cin.ignore();
    	cout<<"Nombre: ";
    	getline(cin,funcionario.nombre[i]);
    	cout<<"Apellido: ";
    	getline(cin,funcionario.apellido[i]);
    	cout<<"Puesto: ";
    	getline(cin,funcionario.puesto[i]);
    	cout<<"Salario: ";
    	cin>>funcionario.salario[i];
    	cout<<"Bonificacion: ";
    	cin>>funcionario.bonificacion[i];
    	cout<<"------------------------------------"<<endl;
}

    	cout<<"--------------Mostrar Datos--------------"<<endl;
		for (int i=0;i<fila_trabajador;i++){
    	cout<<"Codigo: "<<funcionario.codigo_empleado[i]<<endl;
		cout<<"Nombre: "<<funcionario.nombre[i]<<endl;
		cout<<"Apellido: "<<funcionario.apellido[i]<<endl;
		cout<<"Puesto: "<<funcionario.puesto[i]<<endl;
		  suma = Funcion_suma(funcionario.salario[i], funcionario.bonificacion[i]);
		cout<<"Sueldo total: "<<suma<<"."<<endl;
        
    }
    
      cout<<"------------------------------------"<<endl;

for (int i=0;i<fila_trabajador;i++)
delete[] funcionario.codigo_empleado;
delete[] funcionario.nombre;
delete[] funcionario.apellido;
delete[] funcionario.puesto;
	system("PAUSE");
	return 0;
}

int Funcion_suma(int x, int y){
    int res;
    res=y+x;

    return res;
}



