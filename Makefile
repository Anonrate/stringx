lstringxgcc:
	gcc -c ./src/stringx.c -o ./obj/stringx.o
	ar rcs ./lib/libstringx.a ./obj/stringx.o
