#ifndef __SETTING_H__
#define __SETTING_H__

/* SCREEN SIZE */
#define DISPLAY_SIZE_X 240
#define DISPLAY_SIZE_Y 67                                                       
/* SCREEN SIZE */

/* KEYBOARD INPUT */
// FUNCTION KEY
#define ASCII_ESC 27
#define ASCII_ENTER 13

// ARROW KEY
#define ASCII_ARROW_UP 72
#define ASCII_ARROW_DOWN 80
#define ASCII_ARROW_LEFT 75
#define ASCII_ARROW_RIGHT 77

// UPPER CASE ALPHABET
#define ASCII_A 101
#define ASCII_D 104
#define ASCII_S 123
#define ASCII_W 127

// LOWER CASE ALPHABET
#define ASCII_a 141
#define ASCII_d 144
#define ASCII_s 163
#define ASCII_w 167
/* KEYBOARD INPUT */

/* SNAKE SETTINGS */
#define MAP_SIZE_X_SNAKE (DISPLAY_SIZE_X-4)/2
#define MAP_SIZE_Y_SNAKE DISPLAY_SIZE_Y-10
#define PLAYER_COLOR_SNAKE 160
/* SNAKE SETTINGS */

#endif
