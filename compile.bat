cls

del *.map


zx7 screen1.scr screen1.bin
zx7 screen2.scr screen2.bin


rem zcc +z80 -vn -SO3 -clib=sdcc_iy --max-allocs-per-node200000 main.c data.asm -o main -create-app

rem zcc +zx -clib=new -vn -zorg=32768 -create-app -o test main.c

zcc +zx -vn -SO3 -m -clib=sdcc_iy --max-allocs-per-node200000 main.c data.asm -o main -create-app

del *.bin
del *.def