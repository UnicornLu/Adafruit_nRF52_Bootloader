/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _NINI_NRF52833_H
#define _NINI_NRF52833_H

#define UICR_REGOUT0_VALUE UICR_REGOUT0_VOUT_2V7

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER       3
#define LED_PRIMARY_PIN   _PINNUM(0, 30) // red
#define LED_SECONDARY_PIN _PINNUM(0, 28) // green
#define LED_THIRDARY_PIN _PINNUM(0, 29) // blue
#define LED_STATE_ON      0


/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
 #define BUTTONS_NUMBER        2
 #define BUTTON_DFU             _PINNUM(0, 18)
 #define BUTTON_DFU_OTA         _PINNUM(0, 29)
 #define BUTTON_PULL           NRF_GPIO_PIN_PULLUP
 

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER   "NiNi_Unicorn & MINGYUE"
#define BLEDIS_MODEL          "NiNi_Unicorn & MINGYUE smol slime"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x239A
#define USB_DESC_UF2_PID       0x0029 // TODO change later
#define USB_DESC_CDC_ONLY_PID  0x002A // TODO change later

//------------- UF2 -------------//
#define UF2_PRODUCT_NAME      "NiNi_Unicorn & MINGYUE smol slime"
#define UF2_VOLUME_LABEL      "NINISLIME"
#define UF2_BOARD_ID          "nRF52833-smol"
#define UF2_INDEX_URL         "https://docs.slimevr.dev/smol-slimes/firmware/smol-flashing-firmware.html" // TODO change later

#endif
