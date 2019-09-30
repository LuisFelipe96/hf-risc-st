#include <hf-risc.h>
#include <hf-unit.h>

// function under test 
void *memcpy(void *dst, const void *src, uint32_t n);

// list of individual tests
void memcpy_tamanho_test1();
void memcpy_tamanho_test2();
void memcpy_origem_test1();
void memcpy_origem_test2();
void memcpy_origem_test3();
void memcpy_origem_test4();

// main test
void hfunit_run_tests(){
	memcpy_tamanho_test1();
	memcpy_tamanho_test2();
	memcpy_origem_test1();
	memcpy_origem_test2();
	memcpy_origem_test3();
	memcpy_origem_test4();
}
/*	
==== CLASSES DE EQUIVALÊNCIA ====
|   Entrada	  | Classes de Equivalência Válidas| Classes de Equivalência Inválidas |
|-------------|--------------------------------|-----------------------------------|
|	origem 	  |     dados a serem copiados     |								   |
|-------------|--------------------------------|-----------------------------------|
|	tamanho	  |     maior que 1			       | 			     0                 |
|			  |								   | 	     valores negativos         |
|			  |--------------------------------|-----------------------------------|
|			  |		números inteiros		   | 	     nḿeros não inteiros       |
|-------------|--------------------------------|-----------------------------------|
*/
/*	
==== VALORES LIMITES ====
tamanho:	0; 1
*/

/*
Entrada: 
	- origem: A
	- tamanho: 1	=> valor limite
Resultado esperado: A 
*/
void memcpy_tamanho_test1(){
	char orig[1] = "A";
	char dest[1];
	char expected[1] = "A";
	int tamanho = sizeof(char);
	memcpy(dest,orig,tamanho);
	//printf("expected: %s\n",expected);
	//printf("dest: %s\n",dest);
	hfunit_comp_vector(dest,expected,tamanho, "memcpy - tamanho = 1",0);
}

/*
Entrada: 
	- origem: A
	- tamanho: 0	=> valor limite
Resultado esperado: 'null'
*/
void memcpy_tamanho_test2(){
	char orig = "A";
	char dest;
	char expected = NULL;
	int tamanho = 0;
	memcpy(dest,orig,tamanho);
	//printf("expected: %s\n",expected);
	//printf("dest: %s\n",dest);
	hfunit_comp_vector(dest,expected,1, "memcpy - tamanho = 0",0);
}

/*
Entrada: 
	- origem: '\0'
	- tamanho: 1
Resultado esperado: '\0'
*/
void memcpy_origem_test1(){
	char orig[1] = "\0";
	char dest[1];
	char expected[1] = "\0";
	int tamanho = sizeof(char);
	memcpy(dest,orig,tamanho);
	//printf("expected: %s\n",expected);
	//printf("dest: %s\n",dest);
	hfunit_comp_vector(dest,expected,tamanho, "memcpy - origem = barra 0",0);
}

/*
Entrada: 
	- origem: ghb
	- tamanho: 3
Resultado esperado: ghb
*/
void memcpy_origem_test2(){
	char orig[3] = "ghb";
	char dest[3];
	char expected[3] = "ghb";
	int tamanho = sizeof(char)*3;
	memcpy(dest,orig,tamanho);
	//printf("expected: %s\n",expected);
	//printf("dest: %s\n",dest);
	hfunit_comp_vector(dest,expected,tamanho, "memcpy - origem = ghb",0);
}

/*
Entrada: 
	- origem: @
	- tamanho: 1
Resultado esperado: @
*/
void memcpy_origem_test3(){
	char orig[1] = "@";
	char dest[1];
	char expected[1] = "@";
	int tamanho = sizeof(char);
	memcpy(dest,orig,tamanho);
	//printf("expected: %s\n",expected);
	//printf("dest: %s\n",dest);
	hfunit_comp_vector(dest,expected,tamanho, "memcpy - origem = @",0);
}

/*
Entrada: 
	- origem: 1234567	|	string maior que o tamanho 
	- tamanho: 7		|	especificado
	- tamanho dest: 6	|
Resultado esperado: 1234567
*/
void memcpy_origem_test4(){
	char orig[7] = "1234567";
	char dest[6];
	char expected[7] = "1234567";
	int tamanho = sizeof(char)*7;
	memcpy(dest,orig,tamanho);
	//printf("expected: %s\n",expected);
	//printf("dest: %s\n",dest);
	hfunit_comp_vector(dest,expected,tamanho, "memcpy - origem = 1234567",0);
}

