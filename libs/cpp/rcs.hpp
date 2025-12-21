#include <windows.h>

inline void removeScroll() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(hOut, &info);

    COORD tamanho;
    tamanho.X = info.srWindow.Right - info.srWindow.Left + 1;
    tamanho.Y = info.srWindow.Bottom - info.srWindow.Top + 1;

    SetConsoleScreenBufferSize(hOut, tamanho);
}
