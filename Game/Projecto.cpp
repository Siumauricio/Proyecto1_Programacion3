#include "MyGame.h"
#include <string.h>
using namespace std;
string cesped = "\4\x4\x4";//Flecha para Menu
string jug = "\x1\x2\x3";
string enem = "\x1\x2\x3";
string enem2 = "\x1\x2\x3";
string enem3 = "\x1\x2\x3";
int xNuevo = 0;
int yNuevo = 0;


int x_pl = 1;
int y_pl = 1;
int der_enem = 0, der_enem2 = 0, der_enem3 = 0;
int arri_enem = 0, arri_enem2 = 0, arri_enem3 = 0;
bool der = true, iz = false, arr = true, abaj = false, arr2 = true, abaj2 = false, der2 = true, iz2 = false, der3 = true, izq3 = false, arr3 = true, abaj3 = false;
bool bloq_entr = true, bloquear_salid = false;

void MyGame::run()
{
	con.setForecolor(CColor::Green);
	con.setBackcolor((CColor::Lime));
	con.clearScreen();
	movepj();
}

void MyGame::move_enemy() {
	//Mover Enemmigos a la derecha
	if (der)
	{
		if (der_enem < 70)
		{
			con.setCursor(5, der_enem);
			con << "     ";
			der_enem++;
			con.setCursor(5, der_enem);
			con << enem;
			if (der_enem == 65) {
				der = false;
				iz = true;
			}
		}
	}
	if (x_pl == 5 && y_pl == der_enem)
	{

		con << "Fin Del Juego ";
	}
	if (iz)
	{
		if (der_enem < 70)
		{
			con.setCursor(5, der_enem);
			con << "      ";
			der_enem--;
			con.setCursor(5, der_enem);
			con << enem;
			if (der_enem == 6) {
				iz = false;
				der = true;
			}
		}
	}
	if (x_pl == 5 && y_pl == der_enem)
	{

		con << "Fin Del Juego ";
	}
	if (der2)
	{
		if (der_enem2 < 70)
		{
			con.setCursor(15, der_enem2);
			con << "     ";
			der_enem2++;
			con.setCursor(15, der_enem2);
			con << enem;
			if (der_enem2 == 65) {
				der2 = false;
				iz2 = true;
			}
		}
	}
	if (x_pl == 15 && y_pl == der_enem2)
	{
		con << "Fin Del Juego ";
	}
	if (iz2)
	{
		if (der_enem2 < 70)
		{
			con.setCursor(15, der_enem2);
			con << "      ";
			der_enem2--;
			con.setCursor(15, der_enem2);
			con << enem;
			if (der_enem2 == 6) {
				iz2 = false;
				der2 = true;
			}
		}
	}
	if (x_pl == 15 && y_pl == der_enem2)
	{
		con << "Fin Del Juego ";
	}
	if (der3)
	{
		if (der_enem3 < 70)
		{
			con.setCursor(10, der_enem3);
			con << "     ";
			der_enem3++;
			con.setCursor(10, der_enem3);
			con << enem;
			if (der_enem3 == 65) {
				der3 = false;
				izq3 = true;
			}
		}
	}
	if (x_pl == 10 && y_pl == der_enem3)
	{
		con << "Fin Del Juego ";
	}
	if (izq3)
	{
		if (der_enem3 < 70)
		{
			con.setCursor(10, der_enem3);
			con << "      ";
			der_enem3--;
			con.setCursor(10, der_enem3);
			con << enem;
			if (der_enem3 == 6) {
				izq3 = false;
				der3 = true;
			}
		}
	}
	if (x_pl == 10 && y_pl == der_enem3)
	{
		con << "Fin Del Juego ";
	}



	//Mover Enemigo a arriba
	if (arr)
	{
		if (arri_enem < 20)
		{
			con.setCursor(arri_enem, 5);
			con << "      ";
			arri_enem++;
			con.setCursor(arri_enem, 5);
			con << enem;
			if (arri_enem == 20)
			{
				arr = false;
				abaj = true;
			}
		}
	}
	if (x_pl == arri_enem && y_pl == 5)
	{
		con << "Fin Del Juego ";
	}
	if (abaj)
	{
		if (arri_enem < 21)
		{
			con.setCursor(arri_enem, 5);
			con << "      ";
			arri_enem--;
			con.setCursor(arri_enem, 5);
			con << enem;
			if (arri_enem == 2)
			{
				abaj = false;
				arr = true;
			}
		}
	}
	if (x_pl == arri_enem && y_pl == 5)
	{
		con << "Fin Del Juego ";
	}


	if (arr2)
	{
		if (arri_enem2 < 22)
		{
			con.setCursor(arri_enem2, 55);
			con << "      ";
			arri_enem2++;
			con.setCursor(arri_enem2, 55);
			con << enem2;
			if (arri_enem2 == 20)
			{
				arr2 = false;
				abaj2 = true;
			}

		}

	}
	if (x_pl == arri_enem2 && y_pl == 55)
	{
		con << "Fin Del Juego ";
	}
	if (abaj2)
	{
		if (arri_enem2 < 25)
		{
			con.setCursor(arri_enem2, 55);
			con << "      ";
			arri_enem2--;
			con.setCursor(arri_enem2, 55);
			con << enem2;
			if (arri_enem2 == 2)
			{
				abaj2 = false;
				arr2 = true;
			}
		}
	}
	if (x_pl == arri_enem2 && y_pl == 55)
	{
		con << "Fin Del Juego ";
	}
	if (arr3)
	{
		if (arri_enem3 < 22)
		{
			con.setCursor(arri_enem3, 30);
			con << "      ";
			arri_enem3++;
			con.setCursor(arri_enem3, 30);
			con << enem3;
			if (arri_enem3 == 20)
			{
				arr3 = false;
				abaj3 = true;
			}
		}
	}
	if (x_pl == arri_enem3 && y_pl == 30)
	{
		con << "Fin Del Juego ";
	}

	if (abaj3)
	{
		if (arri_enem3 < 25)
		{
			con.setCursor(arri_enem3, 30);
			con << "      ";
			arri_enem3--;
			con.setCursor(arri_enem3, 30);
			con << enem3;
			if (arri_enem3 == 2)
			{
				abaj3 = false;
				arr3 = true;
			}
		}
	}
	if (x_pl == arri_enem3 && y_pl == 30)
	{
		con << "Fin Del Juego ";
	}
	con.refresh();
}

void MyGame::cargarCesped(int x, int y) {
	con.flushKeybuffer();
	con.setForecolor(CColor::Maroon);
	con.setCursor(y, x);
	con << cesped;
}

void MyGame::movepj()

{

	//cargarCesped();
	//con.refresh();
	//con.flushKeybuffer();
	while (con.isActive()) {
		uint32_t key = con.getKey();

		if (key != SDLK_UNKNOWN) {
			con.setCursor(x_pl, y_pl);
			con << "   ";
			switch (key) {
			case SDLK_UP:
				if (x_pl > 0) {
					x_pl--;
				}
				
				//con.flushKeybuffer();
		//		xNuevo = x_pl;


				break;
			case SDLK_DOWN:
				if (x_pl < 20)
				{
					x_pl++;
				}
				//con.flushKeybuffer();
			//	xNuevo = x_pl;
				break;
			case SDLK_RIGHT:
				if (y_pl < 65)
				{
					y_pl++;
				}
				
				//con.flushKeybuffer();
				//yNuevo = y_pl;
				break;
			case SDLK_LEFT:
				if (y_pl > 0) {
					y_pl--;
				}
				
				//con.flushKeybuffer();
				//yNuevo = y_pl;
				break;
			default:
				con << "Other key pressed\n";
				break;
			};
			//cargarCesped(y_pl, xNuevo + 1);
			con.setCursor(x_pl, y_pl);
			con << jug;
			con.flushKeybuffer();
		}
	move_enemy();
	con.delayMs(50);

	}
}

