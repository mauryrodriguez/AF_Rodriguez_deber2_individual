#include <iostream>
using namespace std;

int main(){
	
    int numero;
    int nuevo_sueldo;
    int sueldo_inicial = 386;
    float sueldoCate1, sueldoCate2, sueldoCate3, sueldoCate4;
    cout<<"\t -----AF_Rodriguez_Mauricio_deber2 --------"<<endl;
    cout<<endl;
    cout<<"\tsu sueldo inicial es de 386 $ "<<endl;
    cout<<"\tCalcularemos el incremento segun su eleccion de categoria !! "<<endl;
    cout<<endl;
    cout<<"\t A continuacion escoja una opcion de categoria del 1 - 3"<<endl;
    
    do{
        cout<<"1..... Categoria 1"<<endl;
    	cout<<"2..... Categoria 2"<<endl;
    	cout<<"3..... Categoria 3"<<endl;
    	cout<<"4..... Categoria 4 "<<endl;
    	cout<<"5...... SALIR !!"<<endl;
    	cout<<endl;
    	cin>>numero;
	
    switch(numero){
        case 1:
            cout<<"Categoria 1 "<<endl;
            cout<<"Su sueldo anterior es:"<<sueldo_inicial<<endl;
            sueldoCate1=(sueldo_inicial*(0.15))+sueldo_inicial;
            cout<<"Su nuevo sueldo es:"<<sueldoCate1<<endl;
          
        break;
        case 2:
            cout<<"Categoria 2 "<<endl;
            cout<<"Su sueldo anterior es:"<<sueldo_inicial<<endl;
            sueldoCate2=(sueldo_inicial*(0.10))+sueldo_inicial;
            cout<<"Su nuevo sueldo es:"<<sueldoCate2<<endl;
        break;
        case 3:
           cout<<"Categoria 3 "<<endl;
            cout<<"Su sueldo anterior es:"<<sueldo_inicial<<endl;
            sueldoCate3=(sueldo_inicial*(0.08))+sueldo_inicial;
            cout<<"Su nuevo sueldo es:"<<sueldoCate3<<endl;
        break;
        case 4:
           cout<<"Categoria 4 "<<endl;
            cout<<"Su sueldo anterior es:"<<sueldo_inicial<<endl;
            sueldoCate4=(sueldo_inicial*(0.07))+sueldo_inicial;
            cout<<"Su nuevo sueldo es:"<<sueldoCate4<<endl;
        break;
        
        default:
        	cout<<"ADIOS!!!!"<<endl;
    }
    }
		while(numero!=5);
    
    system("pause");
    return 0;
}

