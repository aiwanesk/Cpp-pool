#include <ncurses.h>
#include <unistd.h>

int		main(void)
{
	initscr();
	//curse_set(FALSE);
	int x = 0, y = 0;
	while (1)
	{
		refresh();
		clear();
		mvprintw(y, x, "0");
		usleep(30000);
		x++;
	}
	endwin();
	return (0);
}
