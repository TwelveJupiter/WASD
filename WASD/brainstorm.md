1. Cargar, leer, y ejecutar código assembly WASD
2. Soporte para ejecutar eficientemente varios programas



Instrucciones

000 sys
001 ldi
010 mem ---> 0:loadFromMemory 1:StoreToMemory
011 jmp ---> 00:jump 01:jumpIfZero 10:branchIfEqual
100 arh ---> 000:add 001:sub 010:and 011:or 100:xor 101:not 110:shl 111:shr
101 lgc 
110 cpy
111 arg

000 sys (System call)
Ejecuta una system call según el valor del registro argumento

#001 ldi r1 v0 (Load Inmediate)#
Carga en el registro r1 el valor v0

Parámetros
	r1 (2): Dirección del registro
	v0 (3): Valor a cargar

Devuelve
	Nada
	







1. system call
2. load immidiate
3. add
4. sub
5. and
6. or
7. xor
8. not
9. shl
10. shr
11. load
12. store
13. jz
14. beq
15. 
16. 
