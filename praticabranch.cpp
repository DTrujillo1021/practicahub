#include <iostream>
using namespace std;
int opcion;
int main(){
    cout<<"ingrese un numero del 1 al 8: ";
    cin>>opcion;
    switch(opcion)
        {
            case 1:
                cout<<"El dia es lunes"<<endl;
                break;

            case 2:
                cout<<"El dia es Martes"<<endl;
                break;

            case 3:
                cout<<"El dia es Miercoles"<<endl;
                break;


            case 4: 
                cout<<"El dia es Jueves"<<endl;
                break;

            case 5: 
                cout<<"El dia es Viernes"<<endl;
                break;

            case 6:
                cout<<"El dia es Sabado"<<endl;
                break;

            case 7: 
                cout<<"El dia es Domingo"<<endl;
                break;
            
            case 8:
                cout<<"algo";
                break ;

            case 9:
                cout<<"pan"<<endl;

              
            
            default:
                cout<<"La opcion no es valida"<<endl;
                break;}
            
return 0; }