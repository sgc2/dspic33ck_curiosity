/**
  POTENTIOMETER1 Generated Driver API Source File

  @Company
    Microchip Technology Inc.

  @File Name
    potentiometer1.c

  @Summary
    This is the generated source file for the POTENTIOMETER1 driver using Board Support Library

  @Description
    This source file provides APIs for driver for POTENTIOMETER1.
    Generation Information :
        Product Revision  :  Board Support Library - 0.95.1
        Device            :  dsPIC33CK256MP508
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

#include <xc.h>
#include "potentiometer1.h"
#include "adc1.h"

#define POT_ADC_REF_VOLTAGE          (float)3.3     
#define POT_VIN        0
#define POT_ADC_RESOLUTION           1024
#define POTENTIOMETER_ADC_CHANNEL   23
uint16_t POTENTIOMETER1_Get(void){
    
    volatile uint16_t i=0;
    uint16_t value = 0;
     //Start the ADC Conversion 
    ADC1_SoftwareTriggerEnable();
    //ADC sampling delay
    for(i=0;i<65535;i++)
    {
        //Do Nothing
    }
    
    while(!ADC1_IsSharedChannelAN23ConversionComplete ())
    {
        //Do Nothing
    }
    
    value = ADC1_SharedChannelAN23ConversionResultGet()*((((uint32_t)UINT16_MAX+1))/(POT_ADC_RESOLUTION));
    
    return value;
}


/**
 End of File
 */