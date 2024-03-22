/* 
 * File:   newmain.c
 * Author: Jenil Makwana
 * Created on March 21, 2024, 6:38 PM
 */

#include <xc.h>

// Assuming you have the correct configuration bits set up here

#define _XTAL_FREQ 8000000 //clock frequency
#define PWM_DUTY_CYCLE 86   // PWM duty 

void main() {
    // Disable output driver for CCP4
    TRISGbits.TRISG3 = 1;
    
    // Select Timer 2 for CCP4
    CCPTMRS0bits.C4TSEL = 0b00;
    
    // Set the PWM period
    PR2 = 0xFF;
    
    // Set CCP4 to PWM mode
    CCP4CONbits.CCP4M = 0b1100;

    // Calculate duty cycle value based on the percentage
    uint16_t dutyCycleValue = ((uint16_t)((_XTAL_FREQ / (PR2 + 1)) * PWM_DUTY_CYCLE) / 100) & 0x03FF;
    
    // Set the duty cycle registers
    CCPR4L = dutyCycleValue >> 2;
    CCP4CONbits.DC4B = dutyCycleValue & 0x03;
   
   
    PIR1bits.TMR2IF = 0;
    
   
    T2CONbits.T2CKPS = 0b00;
    T2CONbits.TMR2ON = 1;
    
    // Wait for Timer 2 to overflow 
    while(PIR1bits.TMR2IF == 0){
        
    }
    
    // Clear the Timer 2 interrupt flag again
    PIR1bits.TMR2IF = 0;
    
    // Enable the output driver for CCP4
    TRISGbits.TRISG3 = 0;
    
    // Main program loop
    while(1){
       
    }

    
}
