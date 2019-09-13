#include <hf-risc.h>
#include <hf-unit.h>


// function under test 
int8_t *strcat(int8_t *dst, const int8_t *src);

// list of individual tests
void strcat_test1();
void strcat_test2();
void strcat_test3();
void strcat_test4();
void strcat_test5();
void strcat_test6();
void strcat_test7();
void strcat_test8();
void strcat_test9();

// main test
void hfunit_run_tests(){
	strcat_test1();
	strcat_test2();
	strcat_test3();
	strcat_test4();
	strcat_test5();
	strcat_test6();
	strcat_test7();
	strcat_test8();
	strcat_test9();
}


/*
|Entrada | Classes de Equivalência Válidas| Classes de Equivalência Inválidas |
|--------|--------------------------------|-----------------------------------|
|string  |  qualquer cadeias de carcters  |     total do tamanho das cadeias  |
|--------|  com tamanho somado menor que  |    maior que o tamanho da saida   |
|        |  a saida                       |                                   |
|--------|--------------------------------|-----------------------------------|
|        |                                |                                   |
|--------|--------------------------------|-----------------------------------|



|Entrada 1 |Entrada 1 |         Saida Esperada         | 
|----------|----------|--------------------------------|
|     A    |   B      |             BA                 |
|----------|----------|--------------------------------|


*/

void strcat_test1(){
	char orig[20] = "A";
	char dest[20] = "B";
	char expected[20] = "BA";
	strcat(dest,orig);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*20, "strcat - Classe 1");
}

/*

|Entrada 1 |Entrada 1 |         Saida Esperada         | 
|----------|----------|--------------------------------|
|    CD    |   EF     |             EFCD               |
|----------|----------|--------------------------------|


*/
void strcat_test2(){
	char orig[6] = "CD";
	char dest[6] = "EF";
	char expected[6] = "EFCD";
	strcat(dest,orig);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "strcat - Classe 2");
}

/*
|Entrada 1 |Entrada 1 |         Saida Esperada         | 
|----------|----------|--------------------------------|
|          |    G     |              G                 |
|----------|----------|--------------------------------|



*/
void strcat_test3(){
	char orig[6] = "";
	char dest[6] = "G";
	char expected[6] = "G";
	strcat(dest,orig);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "strcat - Classe 3");

}

/*
|Entrada 1 |Entrada 1 |         Saida Esperada         | 
|----------|----------|--------------------------------|
|     H    |          |             H                  |
|----------|----------|--------------------------------|



*/
void strcat_test4(){
	char orig[6] = "H";
	char dest[6] = "";
	char expected[6] = "H";
	strcat(dest,orig);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "strcat - Classe 4");
}

/*
|Entrada 1 |Entrada 1 |         Saida Esperada         | 
|----------|----------|--------------------------------|
|          |          |                                |
|----------|----------|--------------------------------|



*/
void strcat_test5(){
	char orig[6] = "";
	char dest[6] = "";
	char expected[6] = "";
	strcat(dest,orig);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "strcat - Classe 5");
}

/*
|Entrada 1 |Entrada 1 |         Saida Esperada         | 
|----------|----------|--------------------------------|
|  "\0"    |  "\0"    |                                |
|----------|----------|--------------------------------|



*/
void strcat_test6(){
	char orig[6] = "\0";
	char dest[6] = "\0";
	char expected[6] = "";
	strcat(dest,orig);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "strcat - Classe 6");
}

/*
|Entrada 1 |Entrada 1 |         Saida Esperada         | 
|----------|----------|--------------------------------|
|    @     |     &    |             &@                 |
|----------|----------|--------------------------------|



*/
void strcat_test7(){
	char orig[6] = "@";
	char dest[6] = "&";
	char expected[6] = "&@";
	strcat(dest,orig);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "strcat - Classe 7");
}

/*
|Entrada 1 |Entrada 1 |         Saida Esperada         | 
|----------|----------|--------------------------------|
|  IJK     |  LMN     |          LMNIJK                |
|----------|----------|--------------------------------|




*/
void strcat_test8(){
	char orig[6] = "IJK";
	char dest[6] = "LMN";
	char expected[6] = "LMNIJK";
	strcat(dest,orig);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*6, "strcat - Classe 8");
}

/*

|Entrada 1 |Entrada 1 |         Saida Esperada         | 
|----------|----------|--------------------------------|
|  OPQR    |  STU     |        ERRO                    |
|----------|----------|--------------------------------|




*/
void strcat_test9(){
	char orig[6] = "OPQR";
	char dest[6] = "STU";
	char expected[6] = "STUOPQR";
	strcat(dest,orig);
	//printf("%s",dest);
	hfunit_comp_vector(dest,expected,sizeof(char)*7, "strcat - Classe 9");
}
