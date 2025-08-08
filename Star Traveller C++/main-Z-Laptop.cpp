#include "BearLibTerminal.h"

int main() {
    terminal_open();


    terminal_print(1, 1, u8"█");
    terminal_print(1, 2, u8"The quick brown fox jumps over the lazy dog");
    terminal_refresh();
    terminal_read();

    terminal_close();
    return 0;
}