/********************************************************************************
* header.h: Inneh�ller diverse deklarationer och definitioner f�r implementering
*           av det inbyggda systemet.
********************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

/* Inkluderingsdirektiv: */
#include <avr/io.h>        /* Inneh�ller information om I/O-portar, s�som DDRB och PORTB. */
#include <avr/interrupt.h> /* Inneh�ller information om avbrottsvektorer, s�som INT0_vect. */

/* Makrodefinitioner: */
#define LED1 0 /* Lysdiod 1 ansluten till pin 8 / PORTB0. */
#define LED2 1 /* Lysdiod 2 ansluten till pin 9 / PORTB1. */

#define BUTTON1 2 /* Tryckknapp 1 ansluten till pin 2 / PORTD2. */
#define BUTTON2 3 /* Tryckknapp 2 ansluten till pin 3 / PORTD3. */

#define LED1_ON PORTB |= (1 << LED1) /* T�nder lysdiod 1. */
#define LED2_ON PORTB |= (1 << LED2) /* T�nder lysdiod 2. */

#define LED1_OFF PORTB &= ~(1 << LED1) /* Sl�cker lysdiod 1. */
#define LED2_OFF PORTB &= ~(1 << LED2) /* Sl�cker lysdiod 2. */

/* Enumerationer: */
typedef enum { false, true } bool; /* Realiserar datatypen bool. */

/********************************************************************************
* setup: Initierar det inbyggda systemet genom att konfigurera I/O-portar samt
*        aktivera externa avbrott.
********************************************************************************/
void setup(void);

/********************************************************************************
* led_toggle: Togglar lysdiod p� I/O-port B mellan att vara t�nd eller sl�ckt.
*
*             - pin: Lysdiodens pin-nummer p� I/O-port.
********************************************************************************/
void led_toggle(const uint8_t pin);


#endif /* HEADER_H_ */