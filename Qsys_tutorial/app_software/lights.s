.equ	switches, 0x2010
.equ	leds, 0x2000
.global _start
_start:	movia r2,switches
		movia r3,leds
LOOP:	ldbio r4,0(r2)
		stbio r4,0(r3)
		br LOOP
.end
