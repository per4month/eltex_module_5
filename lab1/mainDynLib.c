#include <stdio.h>
#include <dlfcn.h>

int main(){
    int resPow3, resPow4;
    int value = 3;
    void *ext_library;	// хандлер внешней библиотеки
    int (*pow3)(int);	// переменная для хранения адреса функции
    int (*pow4)(int);	// переменная для хранения адреса функции
 	//загрузка библиотеки
	ext_library = dlopen("./libdynpow.so",RTLD_LAZY);
	if (!ext_library){
		//если ошибка, то вывести ее на экран
		fprintf(stderr, "dlopen() error: %s\n", dlerror());
		return 1;
	};   
    
    pow3 = dlsym(ext_library, "pow3");
	pow4 = dlsym(ext_library, "pow4");
	resPow3 = (pow3)(value);
	resPow4 = (pow4)(value);

    printf("pow3(3) = %d\n", resPow3);
    printf("pow4(3) = %d\n", resPow4);

    return 0;
}