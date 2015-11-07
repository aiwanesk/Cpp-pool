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
	printf("H = %d, W = %d\n", height, width);
	if (height <= 5)
	{
		fprintf(stderr, "Too small\n");
		exit(1);
	}
	keypad(stdscr, TRUE);
	y = height - 5;
	x = width / 2;

	int t = 0;
	Hero hero = Hero();
	Unit unit = Unit();
	//faire un tableau de pointeur sur unit
	int time = 0;

	while (hero.getHp() > 0)
	{
		timeout(100);
		t = getch();
		unit.move();
		clear();
		mvwprintw(mainwin, hero.getY(), hero.getX(), "H");
		mvwprintw(mainwin, unit.getY(), unit.getX(), "U");
		refresh();
		if (t != ERR )
		{
			if (t == 97)
				hero.left();
			else if (t == 100)
				hero.right();
		//	else if (t == 112)
		//		hero.shoot();
		}
		usleep(6000);
	}
	/*Hero hero = Hero();
	WINDOW *win = newwin(200, 200, 199, 199);
	wrefresh(win);
	while (1)
		mvprintw(25, 25, "Hasd");
		mvprintw(29, 29, "hi");
		if (getch() == 97)
			printw("test");
		;
	
	while (hero.getHp() > 0)
	{
		
		//printw("%d\n", t);
	}*/
	
	endwin();
	return (0);
}

//winmaxyx(fenetre, y, x)
