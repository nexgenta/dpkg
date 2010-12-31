#include "../config.h"

#if HAVE_NCURSESW_CURSES_H
#include <ncursesw/curses.h>
#elif HAVE_NCURSES_H
#include <ncurses.h>
#elif HAVE_CURSES_H
#include <curses.h>
#else
#error No suitable curses.h header found
#endif
