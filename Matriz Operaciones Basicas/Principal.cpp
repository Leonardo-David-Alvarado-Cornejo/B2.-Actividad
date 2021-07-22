#include<iostream>
#include<cstdlib>
using namespace std;
#include "Leonardo1.h"
#include "Leonardo2.h"
#include "Leonardo3.h"
#include "Leonardo4.h"
#include "Leonardo5.h"

//Prototipo de la funcion //

void mostrar();
void sumar();
void restar();
void multiplicar();
void dividir();

// Funcion Principal //

int main(){	             
    int op;    
    do{
    	cout<<"\t\t\t\t   //===================================================//"<<endl;
    	cout<<"\t\t\t\t   //           PROGRAMA: OPERACIONES BASICAS           //"<<endl;
    	cout<<"\t\t\t\t   //      AUTOR : Leonardo David Alvarado Cornejo      //"<<endl;
    	cout<<"\t\t\t\t   //                    VESION: 1.0                    //"<<endl;
    	cout<<"\t\t\t\t   //===================================================//"<<endl;
    	cout<<"\n\n";
    	cout<<"\t\t\t     //===============================================================//"<<endl;    
	    cout<<"\t\t\t     //        1) OPCION.- 1 MOSTRAR ELEMENTOS DE LA MATRIZ           //"<<endl;    
		cout<<"\t\t\t     //        2) OPCION.- 2 SUMAR DOS MATRIZ                         //"<<endl;    
		cout<<"\t\t\t     //        3) OPCION.- 3 RESTA DOS MATRIZ                         //"<<endl;       
		cout<<"\t\t\t     //        4) OPCION.- 4 MULTIPLICAR DOS MATRIZ                   //"<<endl;    
		cout<<"\t\t\t     //        5) OPCION.- 5 DIVIDIR DOS MATRIZ                       //"<<endl;    
	    cout<<"\t\t\t     //        0) Salir                                               //"<<endl;	    
	    cout<<"\t\t\t     //===============================================================//"<<endl;	    
		cout<<"\n\n";  
		cout<<" Digite una Opcion: ";    
		cin>>op; 
		
	    switch(op){
		    case 1:
		    //  Mostrar Elementos de la Matriz //	
		    system("cls");	
	        mostrar();	
		    system("pause");
		    system("cls");     
		    break;
	    
		    case 2:
		    // Sumar dos Matriz //	
		    system("cls");
 			sumar();	
		    system("pause");
		    system("cls"); 
		    break;
		
		    case 3:
		    // Restar dos Matriz //	
		    system("cls");
			restar();
		    system("pause");
		    system("cls"); 
		    break;
		    
		    case 4:
		    // Producto dos Matriz //	
		    system("cls");				
	        multiplicar();
		    system("pause");
		    system("cls"); 	
		    break;
		
		    case 5:
		    // Division dos Matriz //	
		    system("cls");
 			dividir();	
		    system("pause");
		    system("cls"); 	
		    break;

            default:
       	    if(op < 0||op >5){
               system("cls");
               cout<<endl<<"Este numero no es valido. . . "<<endl;
               cout<<endl<<"Presione Enter "<<endl;
               cout<<"\n\n";
		       system("pause");
		       system("cls");
		       }					
		}

	        if(op==0){		
	          cout<<"\n\n\tSalimos del Sistema: "<<endl;
	        }	
	
	}while(op!=0);

	return(0);
}
