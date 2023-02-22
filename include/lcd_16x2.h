#ifndef _NID_lcd_16x2
#define _NID_lcd_16x2

typedef enum{
    CLEAR_DISPLAY = 0x01U,
    RETURN_HOME = 0x02U,
    DECREMENT_CURSOR = 0x04U,
    INCREMENT_CURSOR = 0x06U,
    SHIFT_DISPLAY_RIGHT = 0x05U,
    SHIFT_DISPLAY_LEFT = 0x07U,
    DISPLAY_ON_CURSOR_BLINKING = 0x0eU,
    DISPLAY_ON_CURSON_ON = 0x0fU,
    FORCE_CURSOR_FIRST_LINE_BEGINING = 0x80U,
    FORCE_CURSOR_SECOND_LINE_BEGINING = 0xc0U,
    DISPLAY_OFF_CURSOR_OFF = 0x08U,
    DISPLAY_ON_CURSON_OFF = 0x0cU
}LCD_COMMANDS_ET;

typedef enum{
    COMMAND = 0b0,
    DATA = 0b1
}LCD_MODE_ET;

// void lcd_turn_on();
// void lcd_line1_write(uint8_t buff[]);
// void lcd_line2_write(uint8_t buff[]);

#endif