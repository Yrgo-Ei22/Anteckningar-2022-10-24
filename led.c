/********************************************************************************
* led.c: Funktionsdefinitioner för styrning av lysdioderna.
********************************************************************************/
#include "header.h"

/********************************************************************************
* led_toggle: Togglar lysdiod på I/O-port B mellan att vara tänd eller släckt.
*             De lokala enable-variablerna sätts till statiska för att lagras 
*             i RAM-minnet, så att minnet för dem kvarstår hela programmet.
*
*             - pin: Lysdiodens pin-nummer på I/O-port B.
********************************************************************************/
void led_toggle(const uint8_t pin)
{
   static bool led1_enabled = false;
   static bool led2_enabled = false;

   if (pin == LED1)
   {
      led1_enabled = !led1_enabled;

      if (led1_enabled) LED1_ON;
      else LED1_OFF;
   }
   else if (pin == LED2)
   {
      led2_enabled = !led2_enabled;

      if (led2_enabled) LED2_ON;
      else LED2_OFF;
   }

   return;
}
