#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<stdio.h>
using namespace std;
char pos1='_',pos2='_',pos3='_',pos4='_',pos5='_',pos6='_',pos7='_',pos8='_',pos9='_';
int ganador=0;
void presentar(){
	cout<<pos1<<" | "<<pos2<<" | "<<pos3<<endl;
	cout<<"----------"<<endl;
	cout<<pos4<<" | "<<pos5<<" | "<<pos6<<endl;
	cout<<"----------"<<endl;
	cout<<pos7<<" | "<<pos8<<" | "<<pos9<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
}
void jugar(char X0,int pos){
	switch(pos){
	case 1:
		if(pos1=='_'){
			pos1=X0;
		}
		break;
	case 2:
		if(pos2=='_'){
			pos2=X0;
		}
		break;
	case 3:
		if(pos3=='_'){
			pos3=X0;
		}
		break;
	case 4:
		if(pos4=='_'){
			pos4=X0;
		}
		break;
	case 5:
		if(pos5=='_'){
			pos5=X0;
		}
		break;
	case 6:
		if(pos6=='_'){
			pos6=X0;
		}
		break;
	case 7:
		if(pos7=='_'){
			pos7=X0;
		}
		break;
	case 8:
		if(pos8=='_'){
			pos8=X0;
		}
		break;
	case 9:
		if(pos9=='_'){
			pos9=X0;
		}
		break;
	}
}
void jugadorgano(int &ganador, char X0){
	if(pos1==pos2 && pos1==pos3 && pos1!='_'){
		ganador=1;
		cout<<endl<<"Ganador:"<<X0<<endl;
	}else if(pos4==pos5 && pos4==pos6 && pos4!='_'){
		ganador=1;
		cout<<endl<<"Ganador:"<<X0<<endl;
	}else if(pos7==pos8 && pos7==pos9 && pos7!='_'){
		ganador=1;
		cout<<endl<<"Ganador:"<<X0<<endl;
	}else if(pos1==pos4 && pos1==pos7 && pos1!='_'){
		ganador=1;
		cout<<endl<<"Ganador:"<<X0<<endl;
	}else if(pos2==pos5 && pos2==pos8 && pos2!='_'){
		ganador=1;
		cout<<endl<<"Ganador:"<<X0<<endl;
	}else if(pos3==pos6 && pos3==pos9 && pos3!='_'){
		ganador=1;
		cout<<endl<<"Ganador:"<<X0<<endl;
	}else if(pos7==pos5 && pos7==pos3 && pos7!='_'){
		ganador=1;
		cout<<endl<<"Ganador:"<<X0<<endl;
	}else if(pos1==pos5 && pos1==pos9 && pos1!='_'){
		ganador=1;
		cout<<endl<<"Ganador:"<<X0<<endl;
	}
}
int main(){
	do{
		int pos;
		presentar();
		cin>>pos;
		jugar('X',pos);
		jugadorgano(ganador,'X');
		_
		flushall();
		if(ganador==0){
		presentar();
			cin>>pos;
			jugar('O',pos);
			jugadorgano(ganador,'0');
		}
	}while (ganador==0);

		presentar();
	return 0;
}
