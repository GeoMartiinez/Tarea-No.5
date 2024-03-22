#include<iostream>
using namespace std;

main(){
	/*int edad,*p_edad;
	p_edad =& edad;
	
	cout<<"Ingrese Edad: ";
	cin>>edad;
	cout<<*p_edad<<endl;
	
	if (*p_edad>18){
		cout<<"Mayor de edad"<<endl;
	}else{
		cout<<"Menor de edad"<<endl;
	}
	*/
	/* int total = 0, *p_notas;
	p_notas = new int[total];
	char res;
	
	do{
		cout<<"Ingrese Nota "<<total<<": ";
		cin>>p_notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n): ";
		cin>>res;
	}while(res=='s'|| res=='S');
	
	cout<<"---Mostrar Notas---"<<endl;
	for(int i=0;i<total;i++){
		cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
		p_notas++;
	}
	delete[] p_notas;
	*/
	
	int fil=0, col=0, **pm_notas;
	cout<<"Ingrese los Estudiantes: ";
	cin>>fil;
	cout<<"Ingrese las Notas: ";
	cin>>col;
	
	pm_notas = new int *[fil];
	
	for(int i=0;i<fil;i++){
		pm_notas[i] = new int[col];
	}
	for (int i=0;i<fil;i++){
		cout<<"____________Estudiante_____________"<<i<<endl;
		for (int ii=0;ii<col;ii++){
			cout<<"Notas: "<<ii<<" : ";
			cin>>*(*(pm_notas+i)+ii);
		}
			cout<<"_________________"<<endl;
	}
	
	
	cout<<"---Mostrar Notas---"<<endl;
	for (int i=0;i<fil;i++){

		for (int ii=0;ii<col;ii++){
			cout<<*(*(pm_notas+i)+ii)<<endl;
		}
		cout<<"_________________"<<endl;
	}
	
	for(int i=0;i<fil;i++){
		delete [] pm_notas[i];
	}
	delete [] pm_notas;
	
	system("pause");
}
