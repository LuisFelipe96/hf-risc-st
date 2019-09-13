/*
This matrix lib can work with 3 different types: fixed, float, and double.
just change the variable MATRIX_TYPE in the makefile
*/

#include <mat_type.h> // this include define the type of the matrix
#include <matrix.h>   // the functions under test are defined here
#include <hf-risc.h>
#include <hf-unit.h>


// list of individual tests
void super_mat_test();
void mat_test_0();
void mat_test_1();
void mat_test_Ind();
void mat_test_randon();
void mat_test_Inf();
void mat_test_Sup();
void mat_test_Empy(); 

void mat_compare(struct Matrix  *a, struct Matrix  *b, int row, int col, char* msg){
	int x,y,flag=0;
	for (x=0; x<row; x++){
		for(y=0; y<col;y++){
			/*print_float(a->str[x][y]);
			print_float(b->str[x][y]);
			printf("\n");*/
			hfunit_comp_float(a->str[x][y],b->str[x][y],msg);
			/*if(a->str != b->str){
				printf("ERRO\n");
				flag=1;
			}*/
		}
	}
	/*if(flag == 0){
		printf("OK");
	}*/

}
// main test
void hfunit_run_tests(){
	//super_mat_test();
	mat_test_0();
	mat_test_1();
	mat_test_Ind();
	mat_test_randon();
	mat_test_Inf();
	mat_test_Sup();
	mat_test_Empy(); 
	//mat_test_MAX();
	//mat_test_MIN();
	//mat_test();
	//mat_test();
}


/*
|Entrada | Classes de Equivalência Válidas| Classes de Equivalência Inválidas |
|--------|--------------------------------|-----------------------------------|
|   M1   |    Matriz de Numeros reais     |   não Matrizes                    |
|--------|--------------------------------|-----------------------------------|
|        |                                |                                   |
|--------|--------------------------------|-----------------------------------|
|        |                                |                                   |
|--------|--------------------------------|-----------------------------------|

*/
void mat_test() {

	struct Matrix M1, M2, M3, M4, M5, M6, M7;
	typ_var Multiplicator = val(5);

	typ_var val1[16] = {val(1),val(2),val(3),val(4),val(5),val(6),val(7),val(8),val(9),val(10),val(11),val(12),val(13),val(14),val(15),val(16)};
	typ_var val2[16] = {val(1),val(5),val(9),val(13),val(2),val(6),val(10),val(14),val(3),val(7),val(11),val(15),val(4),val(8),val(12),val(16)};

	M1 = set_values(4, 4, val1);
	M2 = set_values(4, 4, val2);

	//----------------------------FUNCTIONS TESTS-----------------------------------

	printf("Matrix 1 is:\n");
	print_matrix(M1);
	printf("Transposed of Matrix 1 is:\n");
	M4 = transposed(M1);
	print_matrix(M4);
	printf("Expected is:\n");
	print_matrix(M2);
	mat_compare(&M4,&M2,4,4,"lala");
}

/*
|Entrada                                                        |                         Saida Esperada                    | 
|---------------------------------------------------------------|-----------------------------------------------------------|
|  0.000000000    0.000000000    0.000000000    0.000000000     | 0.000000000    0.000000000    0.000000000    0.000000000  |
|  0.000000000    0.000000000    0.000000000    0.000000000     | 0.000000000    0.000000000    0.000000000    0.000000000  |
|  0.000000000    0.000000000    0.000000000    0.000000000     | 0.000000000    0.000000000    0.000000000    0.000000000  |
|  0.000000000    0.000000000    0.000000000    0.000000000     | 0.000000000    0.000000000    0.000000000    0.000000000  |
|---------------------------------------------------------------|-----------------------------------------------------------|


*/
void mat_test_0() {

	struct Matrix M1, M2, M4;
	typ_var Multiplicator = val(5);

	typ_var val1[16] = {val(0),val(0),val(0),val(0),val(0),val(0),val(0),val(0),val(0),val(0),val(0),val(0),val(0),val(0),val(0),val(0)};
	typ_var val2[16] = {val(0),val(0),val(0),val(0),val(0),val(0),val(0),val(0),val(0),val(0),val(0),val(0),val(0),val(0),val(0),val(0)};

	M1 = set_values(4, 4, val1);
	M2 = set_values(4, 4, val2);

	//----------------------------FUNCTIONS TESTS-----------------------------------

	/*printf("Matrix 1 is:\n");
	print_matrix(M1);
	printf("Transposed of Matrix 1 is:\n");/**/
	M4 = transposed(M1);
	/*print_matrix(M4);
	printf("Expected is:\n");
	print_matrix(M2);/**/
	mat_compare(&M4,&M2,4,4,"Test - Mat - 0");
}
/*
|Entrada                                                        |                         Saida Esperada                    | 
|---------------------------------------------------------------|-----------------------------------------------------------|
|  1.000000000    1.000000000    1.000000000    1.000000000     | 1.000000000    1.000000000    1.000000000    1.000000000  |
|  1.000000000    1.000000000    1.000000000    1.000000000     | 1.000000000    1.000000000    1.000000000    1.000000000  |
|  1.000000000    1.000000000    1.000000000    1.000000000     | 1.000000000    1.000000000    1.000000000    1.000000000  |
|  1.000000000    1.000000000    1.000000000    1.000000000     | 1.000000000    1.000000000    1.000000000    1.000000000  |
|---------------------------------------------------------------|-----------------------------------------------------------|


*/
void mat_test_1() {

	struct Matrix M1, M2, M3, M4, M5, M6, M7;
	typ_var Multiplicator = val(5);

	typ_var val1[16] = {val(1),val(1),val(1),val(1),val(1),val(1),val(1),val(1),val(1),val(1),val(1),val(1),val(1),val(1),val(1),val(1)};
	typ_var val2[16] = {val(1),val(1),val(1),val(1),val(1),val(1),val(1),val(1),val(1),val(1),val(1),val(1),val(1),val(1),val(1),val(1)};

	M1 = set_values(4, 4, val1);
	M2 = set_values(4, 4, val2);

	//----------------------------FUNCTIONS TESTS-----------------------------------

	/*printf("Matrix 1 is:\n");
	print_matrix(M1);
	printf("Transposed of Matrix 1 is:\n");/**/
	M4 = transposed(M1);
	/*print_matrix(M4);
	printf("Expected is:\n");
	print_matrix(M2);/**/
	mat_compare(&M4,&M2,4,4,"Test - Mat - 1");
}

/*
|Entrada                                                        |                         Saida Esperada                    | 
|---------------------------------------------------------------|-----------------------------------------------------------|
|  1.000000000    0.000000000    0.000000000    0.000000000     | 1.000000000    0.000000000    0.000000000    0.000000000  |
|  0.000000000    1.000000000    0.000000000    0.000000000     | 0.000000000    1.000000000    0.000000000    0.000000000  |
|  0.000000000    0.000000000    1.000000000    0.000000000     | 0.000000000    0.000000000    1.000000000    0.000000000  |
|  0.000000000    0.000000000    0.000000000    1.000000000     | 0.000000000    0.000000000    0.000000000    1.000000000  |
|---------------------------------------------------------------|-----------------------------------------------------------|


*/
void mat_test_Ind() {

	struct Matrix M1, M2, M3, M4, M5, M6, M7;
	typ_var Multiplicator = val(5);

	typ_var val1[16] = {val(1),val(0),val(0),val(0),val(0),val(1),val(0),val(0),val(0),val(0),val(1),val(0),val(0),val(0),val(0),val(1)};
	typ_var val2[16] = {val(1),val(0),val(0),val(0),val(0),val(1),val(0),val(0),val(0),val(0),val(1),val(0),val(0),val(0),val(0),val(1)};

	M1 = set_values(4, 4, val1);
	M2 = set_values(4, 4, val2);

	//----------------------------FUNCTIONS TESTS-----------------------------------

	/*printf("Matrix 1 is:\n");
	print_matrix(M1);
	printf("Transposed of Matrix 1 is:\n");/**/
	M4 = transposed(M1);
	/*print_matrix(M4);
	printf("Expected is:\n");
	print_matrix(M2);/**/
	mat_compare(&M4,&M2,4,4, "Test - Mat - Ident");
}

/*
|Entrada                                                        |                         Saida Esperada                    | 
|---------------------------------------------------------------|-----------------------------------------------------------|
|  1.000000000    2.000000000    3.000000000    4.000000000     | 1.000000000    5.000000000    9.000000000    13.000000000 |
|  5.000000000    6.000000000    7.000000000    8.000000000     | 2.000000000    6.000000000    10.000000000   14.000000000 |
|  9.000000000    10.000000000   11.000000000   12.000000000    | 3.000000000    7.000000000    11.000000000   15.000000000 |
|  13.000000000   14.000000000   15.000000000   16.000000000    | 4.000000000    8.000000000    12.000000000   16.000000000 |
|---------------------------------------------------------------|-----------------------------------------------------------|


*/
void mat_test_randon() {

	struct Matrix M1, M2, M3, M4, M5, M6, M7;
	typ_var Multiplicator = val(5);

	typ_var val1[16] = {val(1),val(2),val(3),val(4),val(5),val(6),val(7),val(8),val(9),val(10),val(11),val(12),val(13),val(14),val(15),val(16)};
	typ_var val2[16] = {val(1),val(5),val(9),val(13),val(2),val(6),val(10),val(14),val(3),val(7),val(11),val(15),val(4),val(8),val(12),val(16)};

	M1 = set_values(4, 4, val1);
	M2 = set_values(4, 4, val2);

	//----------------------------FUNCTIONS TESTS-----------------------------------

	/*printf("Matrix 1 is:\n");
	print_matrix(M1);
	printf("Transposed of Matrix 1 is:\n");/**/
	M4 = transposed(M1);
	/*print_matrix(M4);
	printf("Expected is:\n");
	print_matrix(M2);/**/
	mat_compare(&M4,&M2,4,4,"Test - Mat randon");
}

/*
|Entrada                                                        |                         Saida Esperada                    | 
|---------------------------------------------------------------|-----------------------------------------------------------|
|  1.000000000    0.000000000    0.000000000    0.000000000     | 1.000000000    2.000000000    3.000000000    5.000000000  |
|  2.000000000    1.000000000    0.000000000    0.000000000     | 0.000000000    1.000000000    4.000000000    6.000000000  |
|  3.000000000    4.000000000    1.000000000    0.000000000     | 0.000000000    0.000000000    1.000000000    7.000000000  |
|  5.000000000    6.000000000    7.000000000    1.000000000     | 0.000000000    0.000000000    0.000000000    1.000000000  |
|---------------------------------------------------------------|-----------------------------------------------------------|


*/
void mat_test_Inf() {

	struct Matrix M1, M2, M3, M4, M5, M6, M7;
	typ_var Multiplicator = val(5);

	typ_var val1[16] = {val(1),val(0),val(0),val(0),val(2),val(1),val(0),val(0),val(3),val(4),val(1),val(0),val(5),val(6),val(7),val(1)};
	typ_var val2[16] = {val(1),val(2),val(3),val(5),val(0),val(1),val(4),val(6),val(0),val(0),val(1),val(7),val(0),val(0),val(0),val(1)};

	M1 = set_values(4, 4, val1);
	M2 = set_values(4, 4, val2);

	//----------------------------FUNCTIONS TESTS-----------------------------------

	/*printf("Matrix 1 is:\n");
	print_matrix(M1);
	printf("Transposed of Matrix 1 is:\n");/**/
	M4 = transposed(M1);
	/*print_matrix(M4);
	printf("Expected is:\n");
	print_matrix(M2);/**/
	mat_compare(&M4,&M2,4,4, "Test - Mat - Diag Inf");
}
/*
|Entrada                                                        |                         Saida Esperada                    | 
|---------------------------------------------------------------|-----------------------------------------------------------|
|  1.000000000    2.000000000    3.000000000    4.000000000     | 1.000000000    0.000000000    0.000000000    0.000000000  |
|  0.000000000    1.000000000    5.000000000    6.000000000     | 2.000000000    1.000000000    0.000000000    0.000000000  |
|  0.000000000    0.000000000    1.000000000    7.000000000     | 3.000000000    5.000000000    1.000000000    0.000000000  |
|  0.000000000    0.000000000    0.000000000    1.000000000     | 4.000000000    6.000000000    7.000000000    1.000000000  |
|---------------------------------------------------------------|-----------------------------------------------------------|


*/
void mat_test_Sup() {

	struct Matrix M1, M2, M3, M4, M5, M6, M7;
	typ_var Multiplicator = val(5);

	typ_var val1[16] = {val(1),val(2),val(3),val(4),val(0),val(1),val(5),val(6),val(0),val(0),val(1),val(7),val(0),val(0),val(0),val(1)};
	typ_var val2[16] = {val(1),val(0),val(0),val(0),val(2),val(1),val(0),val(0),val(3),val(5),val(1),val(0),val(4),val(6),val(7),val(1)};

	M1 = set_values(4, 4, val1);
	M2 = set_values(4, 4, val2);

	//----------------------------FUNCTIONS TESTS-----------------------------------

	/*printf("Matrix 1 is:\n");
	print_matrix(M1);
	printf("Transposed of Matrix 1 is:\n");/**/
	M4 = transposed(M1);
	/*print_matrix(M4);
	printf("Expected is:\n");
	print_matrix(M2);/**/
	mat_compare(&M4,&M2,4,4, "Test - Mat - Diag Sup");
}
/*
|Entrada                                                        |                         Saida Esperada                    | 
|---------------------------------------------------------------|-----------------------------------------------------------|
|                                                               |                                                           |
|                                                               |                                                           |
|                                                               |                                                           |
|                                                               |                                                           |
|---------------------------------------------------------------|-----------------------------------------------------------|


*/
void mat_test_Empy(){

	struct Matrix M1, M2, M4;
	typ_var Multiplicator = val(5);

	typ_var val1[16];
	typ_var val2[16];

	M1 = set_values(4, 4, val1);
	M2 = set_values(4, 4, val2);
	//----------------------------FUNCTIONS TESTS-----------------------------------

	/*printf("Matrix 1 is:\n");
	print_matrix(M1);
	printf("copy of Matrix 1 is:\n");/**/
	M4 = transposed(M1);
	/*print_matrix(M4);
	printf("Expected is:\n");
	print_matrix(M2);/**/
	mat_compare(&M4,&M2,4,4,"Test - Mat empy");
}
