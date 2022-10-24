/********************************************************************************
* header.h: Innehåller diverse deklarationer och definitioner för implementering
*           av det inbyggda systemet.
********************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

/* Inkluderingsdirektiv: */
#include <avr/io.h>        /* Innehåller information om I/O-portar, såsom DDRB och PORTB. */
#include <avr/interrupt.h> /* Innehåller information om avbrottsvektorer, såsom INT0_vect. */

/* Makrodefinitioner: */
#define LED1 0 /* Lysdiod 1 ansluten till pin 8 / PORTB0. */
#define LED2 1 /* Lysdiod 2 ansluten till pin 9 / PORTB1. */

#define BUTTON1 2 /* Tryckknapp 1 ansluten till pin 2 / PORTD2. */
#define BUTTON2 3 /* Tryckknapp 2 ansluten till pin 3 / PORTD3. */

#define LED1_ON PORTB |= (1 << LED1) /* Tänder lysdiod 1. */
#define LED2_ON PORTB |= (1 << LED2) /* Tänder lysdiod 2. */

#define LED1_OFF PORTB &= ~(1 << LED1) /* Släcker lysdiod 1. */
#define LED2_OFF PORTB &= ~(1 << LED2) /* Släcker lysdiod 2. */

/* Enumerationer: */
typedef enum { false, true } bool; /* Realiserar datatypen bool. */

/********************************************************************************
* setup: Initierar det inbyggda systemet genom att konfigurera I/O-portar samt
*        aktivera externa avbrott.
********************************************************************************/
void setup(void);

/********************************************************************************
* led_toggle: Togglar lysdiod på I/O-port B mellan att vara tänd eller släckt.
*
*             - pin: Lysdiodens pin-nummer på I/O-port.
********************************************************************************/
void led_toggle(const uint8_t pin);


#endif /* HEADER_H_ */