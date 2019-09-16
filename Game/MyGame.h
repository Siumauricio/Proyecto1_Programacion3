#ifndef __GAME_H__
#define __GAME_H__
#include "TextConsole.h"

struct cesped
{
	int posx;
	int posy;	
	bool cortado = false;
};

struct enemigo
{
	enemigo(int x ,int y):posx(x),posy(y){};
	int posx;
	int posy;
	bool limite = false;

};




class MyGame: public CClient {
public:
    MyGame(TextConsole& con): CClient(con) {}

	

    void run() override;
	void LoadCesped();
	void LoadEnemigos();
	void movepj();
	bool movene();
	void draw();
	int GameOver();
	void cortarcesped();
	bool detectarcolision();
	void move_enemy();
	void cargarCesped(int x, int y);
	void guardarPosicion();
	bool DibujarMenu();
	bool Menu();
};

#endif
