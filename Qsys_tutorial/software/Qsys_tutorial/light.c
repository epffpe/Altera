/*
 * light.c
 *
 *  Created on: 14/01/2013
 *      Author: epf
 */


#define switches (volatile char *)0x2010
#define leds (char *)0x2000
int main(void) {
	while(1){
		*leds = *switches;
	}
	return 0;
}
