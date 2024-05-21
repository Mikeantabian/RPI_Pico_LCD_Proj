#include "lcd_display.hpp"


int main(){

    LCDdisplay lcd_ctrl(2,3,4,5,14,15,16,2);

    lcd_ctrl.init();
    
    while(1){
        lcd_ctrl.clear();
        lcd_ctrl.print_wrapped("Hello World - Michael Antabian");
        sleep_ms(2500);
        lcd_ctrl.clear();
        lcd_ctrl.print_wrapped("0123456789ABCDEF BYE");
        sleep_ms(2500);
    }

    return 0;
}