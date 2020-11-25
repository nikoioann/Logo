/*
    Course: CS-352
    last update: 16122017
*/

#include "./hy352_gui.h"
#include "LOGO.h"
#ifdef APPLE
#include <allegro5/allegro.h> //**
#endif

START_PROGRAM

    init_GUI();
    turtle_rotate(-45);

    set_pen_thinkness(4);
    turtle_mv_forward(2);

    set_pen_color(21, 37, 89);
    turtle_rotate(90);
    turtle_mv_forward(1);

    set_pen_color(125, 78, 221);
    turtle_rotate(-40);

    turtle_mv_backward(1);

    set_screen_color(149, 165, 166);

    set_pen_thinkness(1);

    turtle_draw_circle(100);
    turtle_draw_label("C");

    turtle_go_to_position(100, 40);

    turtle_rotate(-210);

    turtle_draw_label("Yeah");

    set_pen_color(125, 78, 221);
    turtle_mv_forward(3);

    set_pen_color(231, 76, 60);
    set_pen_thinkness(6);

    turtle_draw_circle(60);

    show_debug_message("Breakpoint 1");

    pen_up();
    turtle_go_to_position(400, 240);
    set_pen_color(50, 176, 160);
    set_pen_thinkness(3);
    turtle_draw_circle(70);

    turtle_rotate(-210);
    show_debug_message("Breakpoint 2");

    set_pen_color(0, 0, 0);

    turtle_draw_label("END");

	destroy_GUI();
	
END_PROGRAM
