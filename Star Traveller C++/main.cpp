#include "BearLibTerminal.h"
#include "AsciiHandler.h"

int main() {
    terminal_open();

    AsciiHandler titleArt;

    titleArt.setArtData("title_art.txt");
    titleArt.displayArt(0, 0);



    terminal_refresh();
    terminal_read();

    terminal_close();
    return 0;
}