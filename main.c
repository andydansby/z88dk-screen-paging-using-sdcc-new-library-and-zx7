//new library
//sdcc
//include sources are found at 
//C:\z88dk199c\include\_DEVELOPMENT


#include "arch/spectrum.h"
//used for zx_border

#include <compress/zx7.h>
//used to uncompress

#include <input.h>
//used for in_Pause


//to declare the variables
//assignment happens in the data.asm
extern unsigned char screen1[];
extern unsigned char screen2[];

void main(void)
{
	zx_border(1);//blue

	while (1)
	{
		//dzx7_standard
		//smallest version of decompressor
		//dzx7_standard(((unsigned int *)screen1), ((unsigned char *)16384));
		
		//dzx7_turbo
		// The intermediate version of the decompressor, providing a balance between speed and size.
		//dzx7_turbo(((unsigned int *)screen1), ((unsigned char *)16384));
		
		//dzx7_mega
		//The fastest version of the decompressor.
		//dzx7_mega(((unsigned int *)screen1), ((unsigned char *)16384));
		
		
		//for higher compression using screen reordering
		//dzx7_smart_rcs
		//dzx7_agile_rcs
		
		
		dzx7_turbo(((unsigned int *)screen1), ((unsigned char *)16384));

		in_pause_fastcall(500);//in milliseconds

		
		dzx7_turbo(((unsigned int *)screen2), ((unsigned char *)16384));
		
		in_pause_fastcall(500);		
	}	
}




