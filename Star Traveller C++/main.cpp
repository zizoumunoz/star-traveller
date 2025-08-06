#include "BearLibTerminal.h"
#include "AsciiHandler.h"
#include "ColorARGB.h"

int main() {
    terminal_open();

    AsciiHandler titleArt;
    ColorARGB cyan(255, 0, 255, 255);

    titleArt.setArtData("title_art.txt");
    titleArt.setColor(cyan);
    titleArt.displayArt(8, 2);

    int key = TK_0;

    // Game loop
    bool running = true;
    while (running)
    {
        terminal_refresh();
        // Key reads
        key = terminal_read();
        if (key == TK_ESCAPE)
        {
            running = false;
        }
    }
    terminal_close();
    return 0;
}
