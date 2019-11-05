/**
  RGB_RED_LED1 Generated Driver API Header File

  @Company
    Microchip Technology Inc.

  @File Name
    rgb_red_led1.h

  @Summary
    This is the generated header file for the RGB_RED_LED1 driver using Board Support Library

  @Description
    This header file provides APIs for driver for RGB_RED_LED1.
    Generation Information :
        Product Revision  :  Board Support Library - 0.95.1
        Device            :  dsPIC33CK256MP508
        Driver Version    :  0.97-b
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.36
        MPLAB 	          :  MPLAB X v5.10
*/


/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/
/**
  Section: Included Files
*/

#ifndef RGB_RED_LED1_H
#define RGB_RED_LED1_H

#include <xc.h>
#include <stdbool.h>
#include "sccp2_compare.h"
#include "rgb_red_led1.h"

static bool issccp2Enabled = false;

void RGB_RED_LED1_Initialize()
{
    //Selected pin is Non-PPS 
}

void RGB_RED_LED1_On(void)
{
    SCCP2_COMPARE_Start();
    issccp2Enabled = true;
}

void RGB_RED_LED1_Off(void)
{
    SCCP2_COMPARE_Stop();
    issccp2Enabled = false;
}

void RGB_RED_LED1_Toggle(void)
{
    if(issccp2Enabled == true)
    {
        RGB_RED_LED1_Off();
    }
    else 
    {
        RGB_RED_LED1_On();
    }
}

void RGB_RED_LED1_IntensitySet(uint16_t new_intensity)
{  
   //Convert 16-bit to 10-bit to reduce flicker/jitter
    new_intensity >>= 6;
    SCCP2_COMPARE_DualCompareValueSet(0x0,new_intensity);
}
#endif /* RGB_RED_LED1_H */
