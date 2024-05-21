#include "lcd_display.hpp"


int main(){

    LCDdisplay lcd_ctrl(2,3,4,5,14,15,16,2);

    lcd_ctrl.init();
    
    while(1){
        lcd_ctrl.clear();
        lcd_ctrl.print("Line 2: Michael", 1);
        sleep_ms(2500);
    }

    return 0;
}