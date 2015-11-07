#include <ncurses.h>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <unistd.h>
#include "Hero.class.hpp"
#include "Unit.class.hpp"

void draw_borders(WINDOW *screen) {
	int x, y, i;
	getmaxyx(screen, y, x);
	// 4 corners
	mvwprintw(screen, 0, 0, "+");
	mvwprintw(screen, y - 1, 0, "+");
	mvwprintw(screen, 0, x - 1, "+");
	mvwprintw(screen, y - 1, x - 1, "+");
	// sides
	for (i = 1; i < (y - 1); i++) {
		mvwprintw(screen, i, 0, "|");
		mvwprintw(screen, i, x - 1, "|");
	}
	// top and bottom
	for (i = 1; i < (x - 1); i++) {
		mvwprintw(screen, 0, i, "-");
		mvwprintw(screen, y - 1, i, "-");
	}
}

void	collide(Hero h, Unit *u)
{
	int		i;
	int		y = 0;
	while (y < 41)
	{
		i = 0;
		while (h.tab[i])
		{
			if (u[y].getY() == h.tab[i][1] && u[y].getX() == h.tab[i][0])
			{
				u[y].destroy();
			}
			i++;
		}
		y++;
	}
}

int main(void) {

	int parent_x, parent_y, new_x, new_y;
	int score_size = 3;
	int player_score = 0;
	Hero hero;
	Unit unit[40];
	int get, i, sens;
	sens = 1;
	//init la fenetre les deux windoews
	initscr();
	noecho();
	curs_set(FALSE);
	getmaxyx(stdscr, parent_y, parent_x);
	WINDOW *field = newwin(parent_y - score_size, parent_x, 0, 0);
	WINDOW *score = newwin(score_size, parent_x, parent_y - score_size, 0);
	if (parent_y - score_size < 20 || parent_x < 20)
	{
		printf("Windows too small\n");
		exit(0);
	}
	nodelay(stdscr, TRUE);
	draw_borders(field);
	draw_borders(score);
	mvwprintw(field, 0, 0, "Field");
	mvwprintw(score, 0, 0, "Score");
	hero = Hero("Hero", 1, 1, parent_x - 2, parent_y - score_size - 2);
	i = 0;
	//init les ennemies
	while (i < 40)
	{
		unit[i] = Unit("Unit", 0,0,3, 3, 1);
		i++;
	}
	while(hero.getHp() > 0) {
		clear();
		getmaxyx(stdscr, new_y, new_x);
		//pour resize si on modifie la taille pendant l exec
		if (new_y != parent_y || new_x != parent_x) {
			parent_x = new_x;
			parent_y = new_y;
			wresize(field, new_y - score_size, new_x);
			wresize(score, score_size, new_x);
			mvwin(score, new_y - score_size, 0);
			wclear(stdscr);
			wclear(field);
			wclear(score);
			draw_borders(field);
			draw_borders(score);
		}
		wrefresh(field);
		wrefresh(score);
		player_score++;
		mvwprintw(field, hero.getY(), hero.getX(), "H");
		mvwprintw(score, 1, 1, "%d", player_score / 100000);
		i = 0;
		while (i < 40)
		{
			mvwprintw(field, unit[i].getY(), unit[i].getX(), "E");
			unit[i].move(sens);
			if (unit[i].getX() == 3){
				sens = 1;
				unit[i].setY(-1);
			}
			else if (unit[i].getX() == 40){//size max
				sens = 0;
				unit[i].setY(-1);
			}
			i++;
		}
		clear();
		// c sense boucler et recuperer les inputs de manieres non bloquantes
		//timeout(100);
		//if ((get = getch()) != ERR){
	//		if (get == 97) //a
	//			hero.right(parent_x);
	//		else if (get == 100)//d
	//			hero.left();
	//		else if (get == 112) //p
	//			hero.shot();
	//	}
		i = 0;
		while (hero.tab[i]){
			mvwprintw(field, hero.tab[i][0], hero.tab[i][1], "|");
			i++;
		}
	//	hero.movebullet();
		collide(hero, (Unit *)unit);
		}
		delwin(field);
		delwin(score);
		endwin();
		return 0;
}
