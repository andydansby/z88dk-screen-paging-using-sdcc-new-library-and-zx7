# z88dk-screen-paging-using-sdcc-new-library-and-zx7
Page flipping on a standard 48K spectrum.  Uncompressing images on the fly and displaying them.

This code is more of a simple breakdown of a function using the new C library.  
Using SDCC and the new library produces smaller and faster code in Z88dk.

This is more of a simple code breakdown and not a full featured application.

Coding style is different than with the classic library, but not difficult to refactor.

Must use Z88dk version 1.99C

Place these files in a seperate directory and run the command "COMPILE" to build

you will find a rather simple compile batch file.

We take the 2 ZX Spectrum images (created by ZX Paint) and compress them with ZX7.exe, the output is image.bin.

in the code, the images are defined in data.asm.  In Main.c, the variables are declaired as unsigned char arrays.

In the main loop, the images are decompressed into the ZX Spectrum display area.

Many thanks to AA with Z88dk to assist me with the new library.
