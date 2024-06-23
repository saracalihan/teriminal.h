#ifndef TERIMINAL_H
#define TERIMINAL_H

#include<stdio.h>

#ifndef TERIMINALDEF
#define TERIMINALDEF extern inline
#endif // TERIMINALDEF

typedef enum {
    BLACK = 30,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    PURPLE,
    CYAN,
    WHITE,
} TextColor;

typedef enum {
    BG_BLACK = 40,
    BG_RED,
    BG_GREEN,
    BG_YELLOW,
    BG_BLUE,
    BG_PURPLE,
    BG_CYAN,
    BG_WHITE,
} BackgroundColor;

typedef enum{
    DEFAULT=0,
    BOLD,
    ITALIC=3, // Not supported on all terminals
    UNDER_LINE,
    BLINK,
    FAST_BLINK, // Not supported on all terminals
    REVERSE_COLORS,
    STRIKE=9, // Not supported on all terminals
    DUBLE_BOLD=20, // Not supported on all terminals
    DUBLE_UNDER_LINE=20, // Not supported on all terminals
} TextDecoration;


// Cursor position commands

/**
    Set absolite cursor position
 */
TERIMINALDEF void teriminal_goto_abs(size_t x, size_t y){
    printf("\033[%lu;%luH", y, x);
}

/**
    Set relative cursor's x position
    nagetive x mean is left
 */
TERIMINALDEF void teriminal_goto_x_rel(int x){
    int is_right = x>0;

    x*= is_right ? 1 : -1; // convert x to positive

    printf("\033[%d%c", x, is_right ? 'C' : 'D');
}

/**
    Set relative cursor's x position
    nagetive x mean is left
 */
TERIMINALDEF void teriminal_goto_y_rel(int y){
    int is_down = y>0;

    y*= is_down ? 1 : -1; // convert x to positive

    printf("\033[%d%c", y, is_down ? 'B' : 'A');
}

/**
    Set relative cursor position
    nagetive x mean is left
    nagetive y mean is up
 */
TERIMINALDEF void teriminal_goto_rel(int x, int y){
    teriminal_goto_x_rel(x);
    teriminal_goto_y_rel(y);
}

/**
    Save current position
 */
TERIMINALDEF void teriminal_cursor_save(){
    printf("\033[s");
}


/**
    Load saved cursor position
 */
TERIMINALDEF void teriminal_cursor_load(){
    printf("\033[u");
}

// Color commands

/**
    Set current text color
*/
TERIMINALDEF void teriminal_set_color(TextColor c){
    printf("\033[%dm", c);
}

// Clear line commands

/**
    Clear all screen
*/
TERIMINALDEF void teriminal_clear(){
    teriminal_goto_abs(0, 0);
    printf("\033[2J");
}

/**
    Clears from the cursor location to the end of the line
*/
TERIMINALDEF void teriminal_clear_line_end(){
    printf("\033[K");
}

/**
    Clears from the cursor location to the begining of the line
*/
TERIMINALDEF void teriminal_clear_line_begin(){
    printf("\033[1K");
}

/**
    Clears current line
*/
TERIMINALDEF void teriminal_clear_line(){
    printf("\033[2K");
}

// Text decorations
/**
    Apply text decoration
*/
TERIMINALDEF void teriminal_text_decoration(TextDecoration t){
    printf("\033[%dm", t);
}


#endif // TERIMINAL_H