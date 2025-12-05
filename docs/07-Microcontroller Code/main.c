/*
 * H-Bridge PWM Control for PIC18F57Q43
 * PWM2 Module Only:
 * RB0 - Forward PWM (PWM2 Slice 1 Output 1)
 * RB3 - Reverse PWM (PWM2 Slice 1 Output 2)
 * 
 * Compiler: XC8
 * IDE: MPLABX with MCC
 * Uses MCC Generated PWM Drivers
 */

#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/pwm/pwm2_16bit.h"
#include <stdint.h>

#define _XTAL_FREQ 64000000

// Motor control definitions
#define MOTOR_STOP 0
#define MOTOR_FORWARD 1
#define MOTOR_REVERSE 2

// PWM period value (set in MCC, typically 3199 for 20kHz at 64MHz)
// Adjust this value to match what you configured in MCC
#define PWM_PERIOD 3199

// Function prototypes
void motor_control(uint8_t direction, uint8_t speed);
void motor_stop(void);
void motor_forward(uint8_t speed);
void motor_reverse(uint8_t speed);

void motor_stop(void) {
    // Set both PWM outputs to 0
    PWM2_16BIT_SetSlice1Output1DutyCycleRegister(0);  // RB0 (Forward) off
    PWM2_16BIT_SetSlice1Output2DutyCycleRegister(0);  // RB3 (Reverse) off
    PWM2_16BIT_LoadBufferRegisters();
}

void motor_forward(uint8_t speed) {
    // Speed is 0-100 (percentage)
    uint16_t duty = ((uint32_t)speed * (PWM_PERIOD + 1)) / 100;
    
    // Forward: PWM on RB0 (Output 1), RB3 (Output 2) low
    PWM2_16BIT_SetSlice1Output1DutyCycleRegister(duty);  // RB0 PWM
    PWM2_16BIT_SetSlice1Output2DutyCycleRegister(0);     // RB3 off
    PWM2_16BIT_LoadBufferRegisters();
}

void motor_reverse(uint8_t speed) {
    // Speed is 0-100 (percentage)
    uint16_t duty = ((uint32_t)speed * (PWM_PERIOD + 1)) / 100;
    
    // Reverse: PWM on RB3 (Output 2), RB0 (Output 1) low
    PWM2_16BIT_SetSlice1Output1DutyCycleRegister(0);     // RB0 off
    PWM2_16BIT_SetSlice1Output2DutyCycleRegister(duty);  // RB3 PWM
    PWM2_16BIT_LoadBufferRegisters();
}

void motor_control(uint8_t direction, uint8_t speed) {
    if (speed > 100) speed = 100;

    switch(direction) {
        case MOTOR_FORWARD:
            LATBbits.LATB1 = HIGH;   // LED ON
            motor_forward(speed);
            break;

        case MOTOR_REVERSE:
            LATBbits.LATB1 = HIGH;   // LED ON
            motor_reverse(speed);
            break;

        case MOTOR_STOP:
        default:
            LATBbits.LATB1 = LOW;   // LED OFF
            motor_stop();
            break;
    }
}


/*void main(void) {
    // Initialize system using MCC generated code
    SYSTEM_Initialize();
    
    // PWM2 module is already initialized by SYSTEM_Initialize()
    // Enable PWM2 module
    PWM2_16BIT_Enable();
    
    // Example usage
    while(1) {
        // Run forward at 50% speed for 2 seconds
        motor_control(MOTOR_FORWARD, 75); //minimum 60
        __delay_ms(2000);
        
        // Stop for 1 second
        motor_control(MOTOR_STOP, 0);
        __delay_ms(1000);
        
        // Run reverse at 75% speed for 2 seconds
        motor_control(MOTOR_REVERSE, 75);
        __delay_ms(2000);
        
        //Stop for 1 second
        motor_control(MOTOR_STOP, 0);
        __delay_ms(1000);
    }
}*/

void main(void) {
    // Initialize system using MCC generated code
    SYSTEM_Initialize();
    
    // Configure RD0 as input (if not already done in MCC)
    TRISDbits.TRISD0 = 1;    // Set RD0 as input
    ANSELDbits.ANSELD0 = 0;  // Disable analog on RD0
    
    // PWM2 module is already initialized by SYSTEM_Initialize()
    // Enable PWM2 module
    PWM2_16BIT_Enable();
    
    // Main loop
    while(1) {
        // Check if RD0 is high (signal received)
        if (PORTDbits.RD0 == HIGH) 
        {
            for (int i = 0; i <= 4; i++)
            {
            // Run forward at 50% speed for 2 seconds
                motor_control(MOTOR_FORWARD, 75);
                __delay_ms(2000);
            
                // Stop for 1 second
                motor_control(MOTOR_STOP, 0);
                __delay_ms(1000);
            
                // Run reverse at 75% speed for 2 seconds
                motor_control(MOTOR_REVERSE, 75);
                __delay_ms(2000);
            
                // Stop for 1 second
                motor_control(MOTOR_STOP, 0);
                __delay_ms(1000);
            }
        } else {
            // RD0 is low - keep motor stopped
            motor_control(MOTOR_STOP, 0);
            __delay_ms(10);  // Small delay to avoid tight loop
        }
    }
}