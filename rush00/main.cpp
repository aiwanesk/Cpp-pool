#include <curses.h>

#include "Hero.class.hpp"
#include "Unit.class.hpp"

int		main(void)
{
	int x;
	int y;
	int height;
	int width;
	WINDOW *mainwin;

	if ((mainwin = initscr()) == NULL)
	{
		fprintf(stderr, "Fail init\n");
		exit (1);
	}
	curs_set(FALSE);
	noecho();
	getmaxyx(mainwin, height, width);
	if (height <= 5)
	{
		fprintf(stderr, "Too small\n");
		exit(1);
	}
	keypad(stdscr, TRUE);
	y = height - 5;
	x = width / 2;

	/*int i = 0;
	int input;
	Hero hero = Hero();
	Unit unit[40];
	while (i < 40)
	{
		unit[i] = Unit();
		i++;
	}
	while (hero.getHp() > 0)
	{
		mvwprintw(mainwin, hero.getY(), hero.getX(), "HHHHHHHHHHHHHHHH");
	}*/
	endwin();
	return (0);
}

//winmaxyx(fenetre, y, x)
