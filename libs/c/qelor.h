#ifndef COLOR_H
#define COLOR_H

/* Reset */
#define C_RESET   "\033[0m"

/* Texto */
#define C_BLACK   "\033[30m"
#define C_RED     "\033[31m"
#define C_GREEN   "\033[32m"
#define C_YELLOW  "\033[33m"
#define C_BLUE    "\033[34m"
#define C_MAGENTA "\033[35m"
#define C_CYAN    "\033[36m"
#define C_WHITE   "\033[37m"

/* Texto forte */
#define C_BBLACK   "\033[1;30m"
#define C_BRED     "\033[1;31m"
#define C_BGREEN   "\033[1;32m"
#define C_BYELLOW  "\033[1;33m"
#define C_BBLUE    "\033[1;34m"
#define C_BMAGENTA "\033[1;35m"
#define C_BCYAN    "\033[1;36m"
#define C_BWHITE   "\033[1;37m"

/* Fundo */
#define BG_BLACK   "\033[40m"
#define BG_RED     "\033[41m"
#define BG_GREEN   "\033[42m"
#define BG_YELLOW  "\033[43m"
#define BG_BLUE    "\033[44m"
#define BG_MAGENTA "\033[45m"
#define BG_CYAN    "\033[46m"
#define BG_WHITE   "\033[47m"

/* Macro utilitária */
#define COLOR(text, color) color text C_RESET

#endif
