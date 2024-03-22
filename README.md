

# Technical Questions

## Question 1
+ The duty cycle calculated for the PWM so that the output is at 4.25V, with an input signal ranging between 0 and 3.3V, is 86%. Please refer to the "Calc & Simulation" folder to see the mathematical derivation and the simulation results.
Based on the values provided in the datasheet, I have settled on using a PWM frequency of 19.61 kHz, with an 8 MHz (FOSC) internal clock

## Question 2
+ Based on the resistor divider network, the expected voltage at the AIN pin should be slightly less than 4V, taking into account the forward voltage drop across the diode. However, since the microcontroller is powered at 3.3V, the maximum VREF can be VDD. Based on this, the expected value in the ADC register should be 0x3FF.

## Resources used
[ATtiny3216/17 Automotive Data Sheet]([docs/CONTRIBUTING.md](https://ww1.microchip.com/downloads/aemDocuments/documents/MCU08/ProductDocuments/DataSheets/ATtiny3216-17-Auto-DataSheet-DS40002212A.pdf)https://ww1.microchip.com/downloads/aemDocuments/documents/MCU08/ProductDocuments/DataSheets/ATtiny3216-17-Auto-DataSheet-DS40002212A.pdf)

[Generate PWM Wave With PIC Microcontroller - Instructables](https://www.instructables.com/Generate-PWM-Wave-With-PIC-Microcontroller/)

[Microchip Developer Help - 10-bit PWM](https://developerhelp.microchip.com/xwiki/bin/view/products/mcu-mpu/8bit-pic/peripherals/ccp/pwm/10-bit/)

[PIC16(L)F1946/47 Data Sheet](https://ww1.microchip.com/downloads/aemDocuments/documents/OTH/ProductDocuments/DataSheets/40001414E.pdf)
