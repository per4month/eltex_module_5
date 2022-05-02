edit: staticLibTest dynStaticLibTest dynLibTest clean

staticLibTest: staticLib
	./resultStaticLib

staticLib: libpow34.a
	gcc -c mainStaticLib.c
	gcc mainStaticLib.o -L. -lpow34 -o resultStaticLib

libpow34.a:
	gcc -c pow3.c pow4.c
	ar rc libpow34.a pow3.o pow4.o
	ranlib libpow34.a

dynStaticLibTest: dynStaticLib
	./resultDynStaticLib

dynStaticLib: libpow34dyn.so
	gcc -c mainStaticLib.c
	gcc mainStaticLib.o -L. -lpow34dyn -o resultDynStaticLib

libpow34dyn.so:
	gcc -fPIC -c pow3.c
	gcc -fPIC -c pow4.c
	gcc -shared pow3.o pow4.o -o libpow34dyn.so
	#в терминале прописать:
	#LD_LIBRARY_PATH=$PWD
	#export LD_LIBRARY_PATH

dynLibTest: dynLib
	./resultDynLib

dynLib: libdynpow.so
	gcc mainDynLib.c -o resultDynLib -ldl

libdynpow.so:
	gcc -fPIC -c pow3.c
	gcc -fPIC -c pow4.c
	gcc -shared pow3.o pow4.o -o libdynpow.so

clean:
	rm -f *.a *.o *.so resultStaticLib resultDynStaticLib resultDynLib