#include <hf-risc.h>
#include <hf-unit.h>
#include <fixed.h>
#include <mat_type.h> 

typedef fixed_t typ_var;
// function under test 
fixed_t fix_sqrt(fixed_t arg);

// list of individual tests
void fix_sqrt_test();
void fix_sqrt_test0();
void fix_sqrt_test1();
void fix_sqrt_test2();
void fix_sqrt_testA();
void fix_sqrt_testNEG1();
void fix_sqrt_testMax();

// main test
void hfunit_run_tests(){
	//fix_sqrt_test();
	fix_sqrt_test0();
	fix_sqrt_test1();
	fix_sqrt_test2();
	fix_sqrt_testA();
	fix_sqrt_testNEG1();
	fix_sqrt_testMax();
}

/*
|Entrada | Classes de Equivalência Válidas| Classes de Equivalência Inválidas |
|--------|--------------------------------|-----------------------------------|
|Entrada | qualquer numero real positivo  |  numero negativo		          |
|--------|--------------------------------|-----------------------------------|
*/
void fix_sqrt_test(){
	fixed_t entrada = fix_val(0.0);
	fixed_t saida;
	//fix_print(fix_sqrt(entrada));
	saida=fix_sqrt(entrada);
	printBits(sizeof(entrada),entrada);
	hfunit_comp_fixed(saida,fix_val(1.0),"fix_sqrt0");
	entrada = fix_val(1.0);
	saida=fix_sqrt(entrada);
	printBits(sizeof(entrada),entrada);
	//fix_print(fix_sqrt(entrada));
	hfunit_comp_fixed(saida,fix_val(2.718261),"fix_sqrt1");
	entrada = fix_val(2.0);
	saida=fix_sqrt(entrada);
	printBits(sizeof(entrada),entrada);
	//fix_print(fix_sqrt(entrada));
	hfunit_comp_fixed(saida,fix_val(7.3890561),"fix_sqrt1");
	entrada = fix_val(3.0);
	saida=fix_sqrt(entrada);
	printBits(sizeof(entrada),entrada);
	//fix_print(fix_sqrt(entrada));
	hfunit_comp_fixed(saida,fix_val(20.085537),"fix_sqrt1");
	entrada = fix_val(0xFFFFFFFFFFFFFFFF);//FFFFFFFFFFFFFFFF
	saida=fix_sqrt(entrada);
	printBits(sizeof(entrada),entrada);
	printf("\nMIN:");
	fix_print(entrada);
	printf(" ");
	fix_print(fix_sqrt(entrada));
	entrada = fix_val(0x7FFFFFFFFFFFFFFF);
	saida=fix_sqrt(entrada);
	printf("\nMAX:");
	fix_print(entrada);
	printBits(sizeof(entrada),entrada);
	printf(" ");
	fix_print(fix_sqrt(entrada));
	printf("\n");
	//fix_print(fix_val(2.718261)+fix_val(0.001));
	//fix_print(fix_val(2.718261)-fix_val(0.001));
	/*if(fix_val(1.0)<fix_val(2.0)){
		printf(":)\n");
	}*/
	//fix_print(fix_val(2.718261)-fix_sqrt(fix_val(1.0)));
	/*if((fix_sqrt(fix_val(1.0)) <= fix_val(2.718261)+fix_sqrt(0.001)) && (fix_sqrt(entrada) >= fix_val(2.718261)-fix_val(0.001))){
		printf("ok\n");
	}else{
		printf("fail\n");	

	}/**/
	
}

/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|    0   |             0.0                |
|--------|--------------------------------|
*/
void fix_sqrt_test0(){
	fixed_t entrada = fix_val(0.0);
	fixed_t saida;
	//fix_print(fix_sqrt(entrada));
	saida=fix_sqrt(entrada);
	//printBits(sizeof(entrada),entrada);
	hfunit_comp_fixed(saida,fix_val(0.0),"fix_sqrt0",0);
	
}

/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|    1   |        		1.0               |
|--------|--------------------------------|
*/
void fix_sqrt_test1(){
	fixed_t entrada;
	fixed_t saida;
	entrada = fix_val(1.0);
	saida=fix_sqrt(entrada);
	//printBits(sizeof(entrada),entrada);
	//fix_print(fix_sqrt(entrada));
	hfunit_comp_fixed(saida,fix_val(1.0),"fix_sqrt1",0);

}
/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|    2   |    1.41421356237               |
|--------|--------------------------------|
*/
void fix_sqrt_test2(){
	fixed_t entrada;
	fixed_t saida;
	entrada = fix_val(2.0);
	saida=fix_sqrt(entrada);
	//printBits(sizeof(entrada),entrada);
	//fix_print(fix_sqrt(entrada));
	hfunit_comp_fixed(saida,fix_val(1.41421356237),"fix_sqrt2",0);

}
/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|    a   |        erro                    |
|--------|--------------------------------|
*/
void fix_sqrt_testA(){
	fixed_t entrada;
	fixed_t saida;
	entrada = 'a';
	saida=fix_sqrt(entrada);
	//printBits(sizeof(entrada),entrada);
	//fix_print(fix_sqrt(entrada));
	hfunit_comp_fixed(saida,fix_val(0.0),"fix_sqrtA",1);

}

/*
|Entrada |         Saida Esperada         | 
|--------|--------------------------------|
|   -1   |      		erro	          |
|--------|--------------------------------|
*/
void fix_sqrt_testNEG1(){
	fixed_t entrada;
	fixed_t saida;
	entrada = fix_val(-1.0);
	saida=fix_sqrt(entrada);
	//printBits(sizeof(entrada),entrada);
	//fix_print(fix_sqrt(entrada));
	hfunit_comp_fixed(saida,fix_val(0.0),"fix_sqrt-1",0);

}

/*
|Entrada      |         Saida Esperada         | 
|-------------|--------------------------------|
|22.1807097779|     	 4.70964009006         |
|-------------|--------------------------------|
*/
void fix_sqrt_testMax(){
	fixed_t entrada;
	fixed_t saida;
	entrada = fix_val(4294967295.9999);
	saida=fix_sqrt(entrada);
	/*printf("\nMAX:");
	fix_print(entrada);
	printf(" ");
	printBits(sizeof(entrada),entrada);
	printf(" ");
	fix_print(fix_sqrt(entrada));
	printf("\n");*/
	hfunit_comp_fixed(saida,fix_val(65536),"fix_sqrtMAX",1);
}
