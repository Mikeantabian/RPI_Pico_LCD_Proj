#include "lcd_display.hpp"
#include <iostream>

const uint8_t customChar[8] = {
	0b00100,
	0b01110,
	0b00100,
	0b01110,
	0b11111,
	0b01110,
	0b01010,
	0b01010
};

int main(){
    stdio_init_all();

    LCDdisplay lcd_ctrl(2,3,4,5,14,15,16,2);
    int line = 0, i = 0;
    lcd_ctrl.init();

    //create the custom character
    lcd_ctrl.createCustomChar(0, customChar);
    
    while(1){
        lcd_ctrl.clear();
        lcd_ctrl.goto_pos(i,line);
        std::cout << i << " " << line << std::endl;
        if ((i+1) % 16 == 0) {
            
            line = (line + 1) % 2;
            i = 0;
            lcd_ctrl.displayChar(0);
            sleep_ms(300);
            continue;
        }
        lcd_ctrl.displayChar(0);
        i++;
        sleep_ms(300);
    }

    return 0;
}