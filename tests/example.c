
#include "teriminal.h"

int main(){
    teriminal_clear();
    for(int i=0;i<10;i++){
        for(int j=0;j<50;j++)
            printf(".");
        printf("\n");

    }

    teriminal_goto_abs(3, 5);
    printf("deneme");
    teriminal_goto_rel(0, -1);
    teriminal_set_color(BLACK);
    printf("XXXX");    teriminal_set_color(RED);
    printf("XXXX");    teriminal_set_color(GREEN);
    printf("XXXX");    teriminal_set_color(YELLOW);
    printf("XXXX");    teriminal_set_color(BLUE);
    printf("XXXX");    teriminal_set_color(PURPLE);
    printf("XXXX");    teriminal_set_color(CYAN);
    printf("XXXX");    teriminal_set_color(WHITE);
    printf("XXXX");
        teriminal_goto_x_rel(-50);
        teriminal_goto_y_rel(2);
                       teriminal_set_color(BG_BLACK);
    printf("XXXX");    teriminal_set_color(BG_RED);
    printf("XXXX");    teriminal_set_color(BG_GREEN);
    printf("XXXX");    teriminal_set_color(BG_YELLOW);
    printf("XXXX");    teriminal_set_color(BG_BLUE);
    printf("XXXX");    teriminal_set_color(BG_PURPLE);
    printf("XXXX");    teriminal_set_color(BG_CYAN);
    printf("XXXX");    teriminal_set_color(BG_WHITE);
    printf("XXXX");
    teriminal_goto_y_rel(2);
    teriminal_goto_x_rel(-30);
    teriminal_text_decoration(DEFAULT);

    teriminal_text_decoration(BOLD);
    printf("bold ");
    teriminal_text_decoration(DEFAULT);
    teriminal_text_decoration(UNDER_LINE);
    printf("under line");
    teriminal_text_decoration(DEFAULT);
    teriminal_text_decoration(BLINK);
    printf(" blink ");
    teriminal_text_decoration(DEFAULT);
    teriminal_set_color(BLUE);
    teriminal_set_color(BG_RED);
    teriminal_text_decoration(REVERSE_COLORS);
    printf("reverse");

    // not supported
    teriminal_text_decoration(DEFAULT);
    teriminal_text_decoration(ITALIC);
    printf(" italic ");
    teriminal_text_decoration(DEFAULT);
    teriminal_text_decoration(STRIKE);
    printf("strike");
    teriminal_text_decoration(DEFAULT);

    teriminal_goto_abs(10, 9);
    teriminal_cursor_save();
    teriminal_goto_abs(0, 9);
    printf("#");
    teriminal_cursor_load();
    printf("#");
    teriminal_goto_abs(0, 11);

    return 0;
}
