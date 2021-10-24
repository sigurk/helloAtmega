/*
 * helloAtmega.cpp
 *
 * Created: 24.10.2021 16:53:08
 * Author : S21H
 */ 

#include <avr/io.h>


int main(void)
{
    DDRB |= 0x0;				// Init
	DDRB |= 1 << 1;				// Aktiver
	PORTB |= 1 << 1;			// Sett høy
	// PORTB &= ~(1 << 1);		// Sett lav
	
    while (1) 
    {
    }
}

