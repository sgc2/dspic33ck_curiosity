/**
  RGB_BLUE_LED1 Generated Driver API Header File

  @Company
    Microchip Technology Inc.

  @File Name
    rgb_blue_led1.h

  @Summary
    This is the generated header file for the RGB_BLUE_LED1 driver using Board Support Library

  @Description
    This header file provides APIs for driver for RGB_BLUE_LED1.
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

#ifndef RGB_BLUE_LED1_H
#define RGB_BLUE_LED1_H

void RGB_BLUE_LED1_Initialize();
void RGB_BLUE_LED1_On(void);
void RGB_BLUE_LED1_Off(void);
void RGB_BLUE_LED1_Toggle(void);
void RGB_BLUE_LED1_IntensitySet(uint16_t intensity);

#endif /*RGB_BLUE_LED1_H*/
