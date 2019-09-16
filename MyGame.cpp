#include "MyGame.h"
#include <string.h>
#include <fstream>
using namespace std;
int contador1=0;
string jug = "\x5";
string enem = "\x1\x2\x3";
string enem2 = "\x1\x2\x3";
string enem3 = "\x1\x2\x3";
int pj_posx=0;
int pj_posy=0;
int agarrar=10;	
int posy[25];
int contador=10;
enemigo *enemigos[3];
cesped *cespeds[1750];
int puntos = 0;
bool cerrar=true;
bool abrir=true;

void MyGame::run()
{
	if(DibujarMenu()){
	}else{
	LoadEnemigos();
	con.setForecolor(CColor::Green);
	con.clearScreen();
	LoadCesped();
	con.setForecolor(CColor::White);
	con.setCursor(20,10);
	con << "PUNTAJE : " << puntos;
	thread h1(&MyGame::movepj,this);
	thread h3(&MyGame::draw,this);
	h1.join();
	h3.join();
	}
}

void MyGame::draw()
{
	while (con.isActive())
	{
		movene();
	}
}


void MyGame::movepj()
{
	while (con.isActive()) {
			uint32_t key = con.getKey();
			if (key != SDLK_UNKNOWN) {
			con.setCursor(pj_posx,pj_posy);
			con << " ";	
				switch (key) {
				case SDLK_UP:
					if (pj_posx > 0) {
						pj_posx--;
					}
					break;
				case SDLK_DOWN:
					if (pj_posx < 17){
					
						pj_posx++;
					}
					break;
				case SDLK_RIGHT:
					if (pj_posy < 69)
					{
						pj_posy++;
					}
					break;
				case SDLK_LEFT:
					if (pj_posy > 0) {
						pj_posy--;
					}
					break;
				default:
					break;
				};
					con.setForecolor(CColor::Green1);
					con.setCursor(pj_posx,pj_posy);
					con << jug;	
					con<<"\n";
					thread h2(&MyGame::cortarcesped,this);
					h2.join();
					h2.~thread();
			}
		}
}

int MyGame::GameOver()
{
		for (int i = 0; i < 1750; i++)
		{
			if (cespeds[i]->cortado == false)
			{
				return 1;
			}else{
			}
		}
		return 0 ;
}

void MyGame::LoadCesped(){
  for (int i = 0; i < 1750; i++)
	{
	cespeds[i] = new cesped;
	}

	int k = 0;
	for (int i = 0; i < 18; i++)
	{
		for (int j = 0; j < 70; j++)
		{
			cespeds[k]->posx=j;
			cespeds[k]->posy = i;
			k++;
		}
		k++;	
	}
	for (int i = 0; i < 1750; i++)
	{
		con.setCursor(cespeds[i]->posy,cespeds[i]->posx);
		con.setForecolor(CColor::Blue1);
		con << "#";
	}
}

void MyGame::cortarcesped()
{
for (int i = 0; i < 1750; i++)
{
	if (pj_posy == cespeds[i]->posx && pj_posx == cespeds[i]->posy && cespeds[i]->cortado != true)
	{
			contador1++;

		cespeds[i]->cortado = true;
		puntos +=  10;
		con.setForecolor(CColor::White);
		con.setCursor(20,10);
		con << "PUNTAJE : " << puntos<<" contador:"<<contador1;
		if (contador1==1241)
		{
					//DibujarMenu();
		con.clearScreen();
		con.refresh();
		con.setCursor(10,24);
		con<<"FELICIDADES GANASTE!!!!!";
		con.delayMs(1000);
        exit(EXIT_SUCCESS);
		}
		
		break;
	}
 }
}

bool MyGame::movene(){
	GameOver();
	if(detectarcolision()){
		//DibujarMenu();
		con.clearScreen();
		con.refresh();
		con.setCursor(10,24);
		con<<"GAME OVER PERDISTE!";
		con.delayMs(1000);
        exit(EXIT_SUCCESS);
		return false;
			}
	for (int i = 0; i < 3; i++)
	{
		con.setCursor(enemigos[i]->posy,enemigos[i]->posx);
		con << "###";
		if (enemigos[i]->limite)
		{
			if (enemigos[i]->posx > 0)
			{
				enemigos[i]->posx --;
			}else{
				enemigos[i]->limite = !enemigos[i]->limite;
			}
		}else{
			if (enemigos[i]->posx < 65)
			{
				enemigos[i]->posx ++;
			}else{

				enemigos[i]->limite = !enemigos[i]->limite;
			}
		}
		con.setForecolor(CColor::Red);				
		con.setCursor(enemigos[i]->posy,enemigos[i]->posx);
		con << enem;
		con.delayMs(20);
	}
	
	for (int i = 3; i < 6; i++)
	{
		con.setCursor(enemigos[i]->posy,enemigos[i]->posx);
		con << "###";
		if (enemigos[i]->limite)
		{
			if (enemigos[i]->posy > 0)
			{
				enemigos[i]->posy --;
			}else{
				enemigos[i]->limite = !enemigos[i]->limite;
			}
		}else{
			if (enemigos[i]->posy < 17)
			{
				enemigos[i]->posy ++;
			}else{

				enemigos[i]->limite = !enemigos[i]->limite;
			}
		}
		con.setForecolor(CColor::Red);				
		con.setCursor(enemigos[i]->posy,enemigos[i]->posx);
		con << enem;
		con.delayMs(20);
	}		
	return true;
}


void MyGame::LoadEnemigos()
{
	enemigos[0]  = new enemigo(0,5);
	enemigos[1]  = new enemigo(0,10);
	enemigos[2]  = new enemigo(0,15);
	enemigos[3]  = new enemigo(10,0);
	enemigos[4]  = new enemigo(40,0);
	enemigos[5]  = new enemigo(60,0);
	enemigos[6]  = new enemigo(25,0);
	
}
bool MyGame::detectarcolision(){
	if (pj_posx==enemigos[0]->posy&&pj_posy==enemigos[0]->posx)
	{
			return true;
	}
	if (pj_posx==enemigos[1]->posy&&pj_posy==enemigos[1]->posx)
	{
			return true;
	}
	if (pj_posx==enemigos[2]->posy&&pj_posy==enemigos[2]->posx)
	{
			return true;
	}
	if (pj_posy==enemigos[3]->posx&&pj_posx==enemigos[3]->posy)
	{
			return true;
	}
	 if(pj_posy==11&&pj_posx==enemigos[3]->posy){
			return true;
	}
	 if(pj_posy==12&&pj_posx==enemigos[3]->posy){
			return true;
	}
	if (pj_posy==enemigos[4]->posx&&pj_posx==enemigos[4]->posy)
	{
			return true;
	}
	 if(pj_posy==41&&pj_posx==enemigos[3]->posy){
			return true;
	}
	 if(pj_posy==42&&pj_posx==enemigos[3]->posy){
			return true;
	}
	if (pj_posy==enemigos[5]->posx&&pj_posx==enemigos[5]->posy)
	{
			return true;
	}
	 if(pj_posy==61&&pj_posx==enemigos[3]->posy){
			return true;
	}
	 if(pj_posy==62&&pj_posx==enemigos[3]->posy){
			return true;
	}
	return false;
}
bool MyGame::DibujarMenu(){
			con.setForecolor(CColor::Red1);
			con.setForecolor(CColor::White);
    Menu();
			
			con.setCursor(8,30);
			con<<"MR DO!";
			con.setCursor(10,24);

			con<<"-JUGAR PARTIDA";
			con.setCursor(12,24);
			con<<"-SALIR";
		
			while (con.isActive()) {
			uint32_t key = con.getKey();
			if (key != SDLK_UNKNOWN) {
			con.setCursor(contador,21);
			con << "  ";	
				switch (key) {
				case SDLK_UP:
					if (contador==12)
				{
					contador-=2;
					break;
				}if (contador==10)
				{
					contador-=2;
					break;	
				}
					break;
				case SDLK_DOWN:
					if (contador==8)
				{
					contador+=2;
					break;
				}if (contador==10)
				{
					contador+=2;
					break;	
				}
					break;
				case SDLK_SPACE:
					if (contador==10)
					{
						return false;
					}else if(contador==12){
						exit(EXIT_SUCCESS);
						int x=0;
						
					}else if(contador==14){

					}
					break;
				};
					con.setForecolor(CColor::Green1);
					con.setCursor(contador,21);
					con << jug;	
				}
		}
		return true;
}	
bool MyGame::Menu(){
	for (int i = 4; i < 23; i++)
	{
			con.setCursor(i,8);
			con<<"|";
			con.setCursor(i,9);
			con<<"|";
			con.setCursor(i,10);
			con<<"|";
			con.setCursor(i,57);
			con<<"|";
			con.setCursor(i,58);
			con<<"|";
			con.setCursor(i,59);
			con<<"|";
		
	}
	for (int i = 8; i < 60; i++)
	{
			con.setCursor(3,i);
			con<<"|";
			con.setCursor(22,i);
			con<<"|";
	}

	
	
			

return false;
}
