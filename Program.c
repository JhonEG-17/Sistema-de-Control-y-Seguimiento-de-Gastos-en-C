#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	
	//declaracion de variables
	
	int gasolina, litro, litros1, litros2, litros3, litros4, costo, min1, min2, min3, min4, distancia1, distancia2, distancia3, distancia4, cdmxaoaxaca, cdmxamonterrey, cdmxguadalajara, cdmxacancun, kilometroslitro, costolitro, khora, costogastadoruta1, costogastadoruta2, costogastadoruta3, costogastadoruta4, litrosgastadosruta1, litrosgastadosruta2, litrosgastadosruta3, litrosgastadosruta4, tiemporecorridoruta1, tiemporecorridoruta2, tiemporecorridoruta3, tiemporecorridoruta4, ruta;
	
	char nombres[9][30];
	
	//introdducion del programa
	
	printf("BIENVENIDO :D ");
	
	system("pause");
	
	system("cls");
	
	//insersion de nombres de conductores y viajes
	
	for(int i=0; i<4; i++){
		printf("Ingrese el nombre de un conductor: ");
		gets(nombres[i]);
	}
	
	system("cls");
	
	printf("\n Lista de conductores:\n");
	
	for(int i=0; i<4; i++){
		printf("%s\n ",nombres[i]);
	}
	
	for(int i=4; i<8; i++){
		printf("\n Ingrese el viaje que realizo cada conductor de acuerdo al orden en el que se muestran: ");
		gets(nombres[i]);
	}
	
	system("cls");
	
	//insersion de datos del conductor 1
	
	printf("\n INFORMACION DEL VIAJE: ");
	
	printf("\n CONDUCTOR: ");
	
	printf("%s\n", nombres[0]);
	
	printf("\n\n Ahora recaudaremos la informacion del viaje con destino ");
	
	printf("%s\n", nombres[4]);
	
	printf("\n ingrese la distancia que recorrio el conductor en kilometros: ");
	scanf("%i", &distancia1);
	
	printf("\n ingrese los litros de gasolina gastados en la ruta: ");
	
	scanf("%i", &litros1);
	
	printf("\n ingrese el tiempo que tardo en realizar el recorrido en minutos: ");
	scanf("%i", &min1);

	system("cls");
	
	//insersion de datos segundo conductor
	
	printf("\n INFORMACION DEL VIAJE: ");
	
	printf("\n CONDUCTOR: ");
	
	printf("%s", nombres[1]);
	
	printf("\n\n Ahora recaudaremos la informacion del viaje con destino: ");
	
	printf("%s",nombres[5]);
	
	printf("\n\n ingrese la distancia que recorrio el conductor en kilometros: ");
	scanf("%i", &distancia2);
	
	printf("\n ingrese los litros de gasolina gastados en la ruta: ");
	scanf("%i", &litros2);
	
	printf("\n ingrese el tiempo que tardo en realizar el recorrido en minutos: ");
	scanf("%i", &min2);
		
	system("cls");
	
	//insersion de datos tercer conductor
	
	printf("\n INFORMACION DEL VIAJE: ");
	
	printf("\n CONDUCTOR: ");
	
	printf("%s",nombres[2]);
	
	printf("\n\n Ahora recaudaremos la informacion del viaje con destino: ");
	
	printf("%s\n",nombres[6]);
	
	printf("\n ingrese la distancia que recorrio el conductor en kilometros: ");
	scanf("%i", &distancia3);
	
	printf("\n ingrese los litros de gasolina gastados en la ruta: ");
	
	scanf("%i", &litros3);
	
	printf("\n ingrese el tiempo que tardo en realizar el recorrido en minutos: ");
	scanf("%i", &min3);
	
	system("cls");
	
	//insersion de datos cuarto conductor
	
	printf("\n INFORMACION DEL VIAJE: ");
	
	printf("\n CONDUCTOR: ");
	
	printf("%s\n",nombres[3]);
	
	printf("\n\n Ahora recaudaremos la informacion del viaje con destino ");
	
	printf("%s\n",nombres[7]);
	
	printf("\n ingrese la distancia que recorrio el conductor en kilometros: ");
	scanf("%i", &distancia4);
	
	printf("\n ingrese los litros de gasolina gastados en la ruta: ");
	
	scanf("%i", &litros4);
	
	printf("\n ingrese el tiempo que tardo en realizar el recorrido en minutos: ");
	scanf("%i", &min4);
	
	system("cls");
	
	//declaracion de constantes
	
	litro=1;
	kilometroslitro=13;
	costolitro=14.50;
	cdmxaoaxaca=467;
	cdmxacancun=1614;
	cdmxamonterrey=931;
	cdmxguadalajara=549;
	khora=75;
	
	//declaracion de operaciones
		
		//primer conductor
		litrosgastadosruta1=litros1*distancia1/kilometroslitro;
		costogastadoruta1=litrosgastadosruta1*costolitro;
		tiemporecorridoruta1=khora/distancia1;
		
		//segundo conductor
		litrosgastadosruta2=litros2*distancia2/kilometroslitro;
		costogastadoruta2=litrosgastadosruta2*costolitro;
		tiemporecorridoruta2=khora/distancia2;
		
		//tercer conductor
		litrosgastadosruta3=litros3*distancia3/kilometroslitro;
		costogastadoruta3=litrosgastadosruta3*costolitro;
		tiemporecorridoruta3=khora/distancia3;
		
		//cuarto conductor
		litrosgastadosruta4=litros4*distancia4/kilometroslitro;
		costogastadoruta4=litrosgastadosruta4*costolitro;
		tiemporecorridoruta4=khora/distancia4;
		
	//entrega de datos y resultados
		
		//informacion conductor 1
		
		printf("\n\n INFORMACION DEL VIAJE DEL CONDUCTOR: ");
		
		printf("%s\n",nombres[0]);
		
		printf("\n\n RUTA: ");
		
		printf("%s\n",nombres[4]);
		
		printf("\n\n 1.- Total de litros gastados por cada ruta: ");
		
		printf("%i", litrosgastadosruta1);
	
		printf("\n\n 2.- Total de dinero gastado en la ruta ");
		
		printf("%i", costogastadoruta1);
	
		printf("\n\n 3.- Tiempo que se tardo en recorrer la ruta en horas y minutos ");
		
		printf("%i", tiemporecorridoruta1);
		
		//informacion conductor 2
		
		printf("\n\n INFORMACION DEL VIAJE DEL CONDUCTOR: ");
	
		printf("%s\n",nombres[1]);
		
		printf("\n\n RUTA: ");
		
		printf("%s\n",nombres[5]);
		
		printf("\n\n 1.- Total de litros gastados por cada ruta: ");
		
		printf("%i", litrosgastadosruta2);
	
		printf("\n\n 2.- Total de dinero gastado en la ruta ");
		
		printf("%i", costogastadoruta2);
	
		printf("\n\n 3.- Tiempo que se tardo en recorrer la ruta en horas y minutos ");
		
		printf("%i", tiemporecorridoruta2);
		
		//informacion conductor 3
		
		printf("\n\n INFORMACION DEL VIAJE DEL CONDUCTOR: ");
		
		printf("%s\n",nombres[2]);
		
		printf("\n\n RUTA: ");
		
		printf("%s\n",nombres[6]);
		
		printf("\n\n 1.- Total de litros gastados por cada ruta: ");
		
		printf("%i", litrosgastadosruta3);
	
		printf("\n\n 2.- Total de dinero gastado en la ruta ");
		
		printf("%i", costogastadoruta3);
	
		printf("\n\n 3.- Tiempo que se tardo en recorrer la ruta en horas y minutos ");
		
		printf("%i", tiemporecorridoruta3);
		
		//informacion conductor 4
		
		printf("\n\n INFORMACION DEL VIAJE DEL CONDUCTOR: ");
		
		printf("%s\n",nombres[3]);
		
		printf("\n\n RUTA: ");
		
		printf("%s\n",nombres[7]);
		
		printf("\n\n 1.- Total de litros gastados por cada ruta: ");
		
		printf("%i", litrosgastadosruta4);
	
		printf("\n\n 2.- Total de dinero gastado en la ruta ");
		
		printf("%i", costogastadoruta4);
	
		printf("\n\n 3.- Tiempo que se tardo en recorrer la ruta en horas y minutos ");
		
		printf("%i", tiemporecorridoruta4);
		
}
