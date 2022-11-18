/*
 * main.c
 *
 *  Created on: Sep 15, 2022
 *      Author: AbdelRahman Atef
 */


///********************* Application on TIMER0 PWM FAST_PWM & PHASE_CORRECT ********************//


///*****************INCLUDES**********//
#include "main.h"      ///*** this is a header file to contain all includes of Application



int main ()
{

	    //// initialize TIMER0  PWM
        M_TIMER0_void_Pwm0Int();
        /// function to set desired  duty cycle
        M_TIMER0_void_Pwm0SetDutyCycle(50);   ///  desired duty cycle (100)
        //// function to start the TIMER0 PWM0
        M_TIMER0_void_Pwm0Start();

    while (1)
       {


       }


}

