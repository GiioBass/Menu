#include<iostream>
#include<stdlib.h>
#define length(x) (sizeof(x)/sizeof(x[0]))
using namespace std;

// declarar funciones

void Registrar_Datos(string nombre, int precio, string nombres [], int precios[]);
void Listar_Datos(string Lista_articulos[], int Lista_precios[]);
void Ordenar_Articulos(string nombre_articulos[], int valor_articulos[]);
void Articulo_Mas_Caro(string nombre_articulos[], int valor_articulos[]);
void Suma_Articulos();

// variables

int opcion, valor = 0;
int valor_articulos[3] = {0};
string nombre_articulos[3]= {" "};
string articulo = " ";

int main()
{
	while (opcion != 6)
	{

		cout << " MENU \n" ;
		cout << " 1. Registrar datos \n" ;
		cout << " 2. Listar datos \n" ;
		cout << " 3. Ordenar artículos por precio \n" ;
		cout << " 4. Imprimir nombre del artículo de mayor valor \n" ;
		cout << " 5. Imprimir resultado de la suma de los 3 artículos \n" ;
		cout << " 6. Salir \n " << endl ;

		cout << " Seleccione una opción: ";
		cin >> opcion;
		cout << "\n";

		switch (opcion)
		{

		case 1:
			// Autor : Andres Felipe Pinilla. Codigo: 1088267124
			Registrar_Datos(articulo, valor, nombre_articulos, valor_articulos); // se llama la funcion registrar datos
			break;

		case 2:
			// Autor : Andres Felipe Pinilla. Codigo: 1088267124
			Listar_Datos(nombre_articulos, valor_articulos); // se llama a la funcion  para mostrar los datos
			break;

		case 3:
			//Autor: Mike Fredy Narváez Bustamante. Código: 1088247062
			Ordenar_Articulos(nombre_articulos, valor_articulos);
			break;

		case 4:
			//Autor: Mike Fredy Narváez Bustamante. Código: 1088247062
			Articulo_Mas_Caro(nombre_articulos, valor_articulos);
			break;

		case 5:
			//Autor: Sebastian Camilo Ramirez B. Codigo: 1058845928
			Suma_Articulos();//Se llama la funcion para sumar el precio de los articulos

			break;

		case 6:
			cout << " Seleccionó la opción Salir. Adios! \n ";
			break;

		default:
			cout << " Ingrese una opción valida \n ";
			system ("pause");
			system ("cls");
			break;

		}

	}

}

// funciones


// Funcion realizada por Andres Felipe Pinilla. Codigo: 1088267124
void Registrar_Datos(string nombre, int precio, string articulos [], int precios[])
{

	for(int i = 0; i < 3; i++)
	{

		cout << "Ingrese nombre del articulo  " << i+1 << " : ";
		cin >> nombre;
		articulos[i] = nombre;

	}

	for(int j = 0; j < 3; j++)
	{

		cout << "Ingrese precio del articulo  " << articulos[j] << " : ";
		cin >> precio;
		precios[j] = precio;

	}
	cout << endl;
	cout << " los datos fueron registrados. \n";
	system("pause");
	system("cls");

}


// Funcion realizada por Andres Felipe Pinilla. Codigo: 1088267124
void Listar_Datos(string nombre_articulos[], int valor_articulos[])
{

	for (int i = 0; i < 3; i++)
	{

		cout << " Articulo " << i+1 << "\n";
		cout << " Nombre : " << nombre_articulos[i] << "\n";
		cout << " Precio : " << valor_articulos[i] << "\n" << endl;

	}

	system ("pause");
	system ("cls");

}

// Funcion realizada por Mike Fredy Narváez. Código: 1088247062
void Ordenar_Articulos(string nombre_articulos[], int valor_articulos[])
{	

	int i,j; // Variables para ciclos  
	int temporal; // Variable para intercambio de contenidos  
	string temporal2; // Variable para intercambio de contenidos  
	for (i=0;i<2;i++)
		for (j=0;j<2;j++)
			if (valor_articulos[j]>valor_articulos[j+1]){ 
				temporal=valor_articulos[j];      
				valor_articulos[j]=valor_articulos[j+1];      
				valor_articulos[j+1]=temporal;
				
				temporal2=nombre_articulos[j];      
				nombre_articulos[j]=nombre_articulos[j+1];      
				nombre_articulos[j+1]=temporal2;     
			}
	cout << " Se ordenaron los artículos \n";
	for (int i = 0; i < 3; i++)
	{

		cout << " Articulo " << i+1 << "\n";
		cout << " Nombre : " << nombre_articulos[i] << "\n";
		cout << " Precio : " << valor_articulos[i] << "\n" << endl;

	}	
	system ("pause");
	system ("cls");

}

// Funcion realizada por Mike Fredy Narváez. Código: 1088247062
void Articulo_Mas_Caro(string nombre_articulos[], int valor_articulos[])
{	

	int i; // Variable para ciclos  
	int valor; // Variable para almacenar el valor más caro 
	string nombre; // Variable para almacenar el nombre del articulo más caro 
	valor =  valor_articulos[0];
    nombre = nombre_articulos[0];
	for (i=1;i<3;i++){
		if (valor_articulos[i]>valor){ 
			valor =  valor_articulos[i];
			nombre = nombre_articulos[i];
		}
	}
	cout << " El articulo mas caro es: " << nombre << " con un costo de: " << valor << " \n";
	
	system ("pause");
	system ("cls");

}
//Funcion realizada por Sebastian Camilo Ramirez b. Codigo: 1058845928
void Suma_Articulos()
{
	
	int sumaPrecios = 0, i ;
	
	for (i = 0; i < 3; i++)
	{
		
		sumaPrecios = valor_articulos[i] + sumaPrecios;
		 
	}
	
	cout<< "La suma de los precios de los 3 articulos es : " <<"$ "<<sumaPrecios << endl <<endl;
	system("pause");
}










