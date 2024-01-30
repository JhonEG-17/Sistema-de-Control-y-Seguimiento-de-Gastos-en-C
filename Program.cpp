
#include <iostream>  // Equivalente a <stdio.h>
#include <cstdlib>   // Equivalente a <stdlib.h>
#include <cstring>   // Equivalente a <string.h>

using namespace std;

int main (){
	
	//declaracion de variables
	
	int gasolina, litro, litros1, litros2, litros3, litros4, costo, min1, min2, min3, min4, distancia1, distancia2, distancia3, distancia4, cdmxaoaxaca, cdmxamonterrey, cdmxguadalajara, cdmxacancun, kilometroslitro, costolitro, khora, costogastadoruta1, costogastadoruta2, costogastadoruta3, costogastadoruta4, litrosgastadosruta1, litrosgastadosruta2, litrosgastadosruta3, litrosgastadosruta4, tiemporecorridoruta1, tiemporecorridoruta2, tiemporecorridoruta3, tiemporecorridoruta4, ruta, selec1, selec2, selec3, selec4, selec5, selec6;
	
	char nombres[9][30];
	
	//introdducion del programa
	
	cout<<"BIENVENIDO :D ";
	
	system("pause");
	
	system("cls");
	
	//insersion de nombres de conductores y viajes
	
	cout<<"Ingrese el nombre de un conductor: "<<endl<<endl;
	
	for(int i=0; i<4; i++){
		gets(nombres[i]);
	}
	
	system("cls");
	
	cout<<"Lista de conductores: "<<endl<<endl;
	
	for(int i=0; i<4; i++){
		cout<< nombres[i]<<endl;
	}
	
	cout<<endl<<"Ingrese el viaje que realizo cada conductor de acuerdo al orden en el que se muestran: "<<endl<<endl;
	
	for(int i=4; i<8; i++){
		gets(nombres[i]);
	}
	
	system("cls");
	
	//insersion de datos del conductor 1
	
	cout<<"INFORMACION DEL VIAJE: "<<endl<<endl;
	
	cout<<"CONDUCTOR: "<< nombres[0]<<endl<<endl;
	
	cout<<"Ahora recaudaremos la informacion del viaje con destino: "<< nombres[4]<<endl<<endl;
	
	cout<<"ingrese la distancia que recorrio el conductor en kilometros: ";
	cin>>distancia1;
	
	cout<<endl<<endl<<"ingrese los litros de gasolina gastados en la ruta: ";
	cin>>litros1;
	
	cout<<endl<<endl<<"ingrese el tiempo que tardo en realizar el recorrido en minutos: ";
	cin>>min1;

	system("cls");
	
	//insersion de datos segundo conductor
	
	cout<<"INFORMACION DEL VIAJE: "<<endl;
	
	cout<<"CONDUCTOR: "<<nombres[1]<<endl<<endl;
	
	cout<<"Ahora recaudaremos la informacion del viaje con destino: "<<nombres[5]<<endl<<endl;
	
	cout<<"ingrese la distancia que recorrio el conductor en kilometros: ";
	cin>>distancia2;
	
	cout<<endl<<endl<<"ingrese los litros de gasolina gastados en la ruta: ";
	cin>>litros2;
	
	cout<<endl<<endl<<"ingrese el tiempo que tardo en realizar el recorrido en minutos: ";
	cin>>min2;
		
	system("cls");
	
	//insersion de datos tercer conductor
	
	cout<<"INFORMACION DEL VIAJE: "<<endl;
	
	cout<<"CONDUCTOR: "<<nombres[2]<<endl<<endl;
	
	cout<<"Ahora recaudaremos la informacion del viaje con destino: "<<nombres[6]<<endl<<endl;
	
	cout<<"ingrese la distancia que recorrio el conductor en kilometros: ";
	cin>>distancia3;
	
	cout<<endl<<endl<<"ingrese los litros de gasolina gastados en la ruta: ";
	cin>>litros3;
	
	cout<<endl<<endl<<"ingrese el tiempo que tardo en realizar el recorrido en minutos: ";
	cin>>min3;
	
	system("cls");
	
	//insersion de datos cuarto conductor
	
	cout<<"INFORMACION DEL VIAJE: "<<endl<<endl;
	
	cout<<"CONDUCTOR: "<<nombres[3]<<endl<<endl;
	
	cout<<"Ahora recaudaremos la informacion del viaje con destino: "<<nombres[7]<<endl<<endl;
	
	cout<<"ingrese la distancia que recorrio el conductor en kilometros: ";
	cin>>distancia4;
	
	cout<<endl<<endl<<"ingrese los litros de gasolina gastados en la ruta: ";
	cin>>litros4;
	
	cout<<endl<<endl<<"ingrese el tiempo que tardo en realizar el recorrido en minutos: ";
	cin>>min4;
	
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

	//MENU DE SELECCION DE INFORMACION POR CADA CONDUCTOR	
		
	do	{
		
		system("cls");
		
		cout<<"SE HAN ANALIZADO LOS DATOS DE LOS SIGUIENTES CONDUCTORES:"<<endl<<endl;
		
		cout<<"1.-Conductor:"<<nombres[0];
		
		cout<<" ,CON RUTA A: "<<nombres[4]<<endl<<endl;
		
		cout<<"2.-Conductor:"<<nombres[1];
		
		cout<<" ,CON RUTA A: "<<nombres[5]<<endl<<endl;

		cout<<"3.-Conductor:"<<nombres[2];
		
		cout<<" ,CON RUTA A: "<<nombres[6]<<endl<<endl;

		cout<<"4.-Conductor:"<<nombres[3];
		
		cout<<" ,CON RUTA A: "<<nombres[7]<<endl<<endl;
		
		cout<<"5.- SALIR DEL PROGRAMA."<<endl<<endl;
		
		cout<<"SELECCIONE LA OPCION PARA CONSULTAR LA INFORMACION: ";
		
		cin>>selec1;
		
		switch(selec1)	{
			//informacion conductor 1
			case 1:
			    
			    do	{
			    
					system("cls");
					
					cout<<"LOS SIGUIENTES DATOS HAN SIDO ANALIZADOS:"<<endl<<endl<<"1.-DISTANCIA DEL RECORRIDO"<<endl<<endl<<"2.-LITROS QUE GASTO EN EL RECORRIDO"<<endl<<endl<<"3.-TIEMPO QUE LE TOMO REALIZAR EL RECORRIDO"<<endl<<endl<<"4.-CAPITAL GASTADO EN GASOLINA"<<endl<<endl<<"5.-SALIR AL MENU PRINCIPAL"<<endl<<endl<<"INGRESE EL NUMERO PREASIGNADO PARA CONSULTAR LA INFORMACION DESEADA: ";
					cin>>selec2;
					
	    			switch(selec2)	{
					
	    				case 1:
	    					
	    					system("cls");
	    					
	    					cout<<"DISTANCIA DEL RECORRIDO: "<<distancia1<<endl;
	    					
	    					system("pause");
	    					
	    				break;
	    					
	    				case 2:
	    					
	    					system("cls");
	    					
	    					cout<<"LITROS QUE GASTO EN EL RECORRIDO: "<<litrosgastadosruta1<<endl;
	    					
	    					system("pause");
	    					
	    			    break;
	    					
	    				case 3:
	    					
	    					system("cls");
	    					
	    					cout<<"TIEMPO QUE LE TOMO REALIZAR EL RECORRIDO: "<<tiemporecorridoruta1<<endl;
	    					
	    					system("pause");
	    					
	    				break;
	    				
					    case 4:
					    	
					    	system("cls");

							cout<<"CAPITAL GASTADO EN GASOLINA: "<<costogastadoruta1<<endl;

							system("pause");

					    break;

						case 5:
						break;
	    			}
				}while(selec2!=5);
			break;
			//informacion conductor 2
			case 2:
				
				do	{
					
					system("cls");
					
					cout<<"LOS SIGUIENTES DATOS HAN SIDO ANALIZADOS:"<<endl<<endl<<"1.-DISTANCIA DEL RECORRIDO"<<endl<<endl<<"2.-LITROS QUE GASTO EN EL RECORRIDO"<<endl<<endl<<"3.-TIEMPO QUE LE TOMO REALIZAR EL RECORRIDO"<<endl<<endl<<"4.-CAPITAL GASTADO EN GASOLINA"<<endl<<endl<<"5.-SALIR AL MENU PRINCIPAL"<<endl<<endl<<"INGRESE EL NUMERO PREASIGNADO PARA CONSULTAR LA INFORMACION DESEADA: ";
					
					cin>>selec3;
					
	    			switch(selec3)	{
	    				
	    				case 1:
	    					
	    					system("cls");
	    					
	    					cout<<"DISTANCIA DEL RECORRIDO: "<<distancia2<<endl;
	    					
	    					system("pause");
	    					
	    				break;
	    					
	    				case 2:
	    					
	    					system("cls");
	    					
	    					cout<<"LITROS QUE GASTO EN EL RECORRIDO: "<<litrosgastadosruta2<<endl;
	    					
	    					system("pause");
	    					
	    			    break;
	    					
	    				case 3:
	    					
	    					system("cls");
	    					
	    					cout<<"TIEMPO QUE LE TOMO REALIZAR EL RECORRIDO: "<<tiemporecorridoruta2<<endl;
	    					
	    					system("pause");
	    					
	    				break;
	    				
					    case 4:
					    	
					    	system("cls");

							cout<<"CAPITAL GASTADO EN GASOLINA: "<<costogastadoruta2<<endl;

							system("pause");

					    break;
					    
						case 5:
						break;
	    			}
				}while(selec3!=5);
			break;
			//informacion conductor 3
			case 3:
				
				do	{
					
					system("cls");
					
					cout<<"LOS SIGUIENTES DATOS HAN SIDO ANALIZADOS:"<<endl<<endl<<"1.-DISTANCIA DEL RECORRIDO"<<endl<<endl<<"2.-LITROS QUE GASTO EN EL RECORRIDO"<<endl<<endl<<"3.-TIEMPO QUE LE TOMO REALIZAR EL RECORRIDO"<<endl<<endl<<"4.-CAPITAL GASTADO EN GASOLINA"<<endl<<endl<<"5.-SALIR AL MENU PRINCIPAL"<<endl<<endl<<"INGRESE EL NUMERO PREASIGNADO PARA CONSULTAR LA INFORMACION DESEADA: ";
					
					cin>>selec4;
					
					switch(selec4)	{

	    				case 1:
	    					
	    					system("cls");
	    					
	    					cout<<"DISTANCIA DEL RECORRIDO: "<<distancia3<<endl;
	    					
	    					system("pause");
	    					
	    				break;
	    					
	    				case 2:
	    					
	    					system("cls");
	    					
	    					cout<<"LITROS QUE GASTO EN EL RECORRIDO: "<<litrosgastadosruta3<<endl;
	    					
	    					system("pause");
	    					
	    			    break;
	    					
	    				case 3:
	    					
	    					system("cls");
	    					
	    					cout<<"TIEMPO QUE LE TOMO REALIZAR EL RECORRIDO: "<<tiemporecorridoruta3<<endl;
	    					
	    					system("pause");
	    					
	    				break;
	    				
					    case 4:
					    	
					    	system("cls");

							cout<<"CAPITAL GASTADO EN GASOLINA: "<<costogastadoruta3<<endl;

							system("pause");

					    break;
	    				
						case 5:
						break;
	    			}
		        }while(selec4!=5);
	    	break;
			//informacion conductor 4  
	    	case 4:
	    	 	
	    		do	{
					
					system("cls");
					
					cout<<"LOS SIGUIENTES DATOS HAN SIDO ANALIZADOS:"<<endl<<endl<<"1.-DISTANCIA DEL RECORRIDO"<<endl<<endl<<"2.-LITROS QUE GASTO EN EL RECORRIDO"<<endl<<endl<<"3.-TIEMPO QUE LE TOMO REALIZAR EL RECORRIDO"<<endl<<endl<<"4.-CAPITAL GASTADO EN GASOLINA"<<endl<<endl<<"5.-SALIR AL MENU PRINCIPAL"<<endl<<endl<<"INGRESE EL NUMERO PREASIGNADO PARA CONSULTAR LA INFORMACION DESEADA: ";
					
					cin>>selec5;
					
	    			switch(selec5){
		
		    			case 1:
	    					
	    					system("cls");
	    					
	    					cout<<"DISTANCIA DEL RECORRIDO: "<<distancia4<<endl;
	    					
	    					system("pause");
	    					
	    				break;
	    					
	    				case 2:
	    					
	    					system("cls");
	    					
	    					cout<<"LITROS QUE GASTO EN EL RECORRIDO: "<<litrosgastadosruta4<<endl;
	    					
	    					system("pause");
	    					
	    			    break;
	    					
	    				case 3:
	    					
	    					system("cls");
	    					
	    					cout<<"TIEMPO QUE LE TOMO REALIZAR EL RECORRIDO: "<<tiemporecorridoruta4<<endl;
	    					
	    					system("pause");
	    					
	    				break;
	    				
					    case 4:
					    	
					    	system("cls");

							cout<<"CAPITAL GASTADO EN GASOLINA: "<<costogastadoruta4<<endl;

							system("pause");

					    break;
		    			
		    			case 5:
		    			break;
		    		}
	    		}while(selec5!=5);	
			break;
			
		    case 5:
	    	break;
	    }
	}while(selec1!=5);

cout<<endl<<"GRACIAS POR UTILIAR ESTE PROGRAMA :D"<<endl<<endl;

cout<<"ESTE PROGRAMA FUE CREADO POR EL DESARROLLADOR JHONATAN ESPINAL GARCIA"<<endl;

system("pause");
return 0;
}

	
	