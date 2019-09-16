#include <iostream>
#include "TextConsole.h"
#include "MyGame.h"

int main(int argc, char *argv[])
{
    TextConsole con(70, 25);

    if (!con.activate()) {
        return 1;
    }
    MyGame game(con);

    con.run(game);

    return 0;
}