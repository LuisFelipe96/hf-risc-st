/*
This matrix lib can work with 3 different types: fixed, float, and double.
just change the variable MATRIX_TYPE in the makefile
*/

#include <mat_type.h> // this include define the type of the matrix
#include <matrix.h>   // the functions under test are defined here
#include <hf-risc.h>
#include <hf-unit.h>


// list of individual tests
//void sqrt1_test();
//void sqrt4_test();
void super_mat_test();
void mat_compare(struct Matrix  *a, struct Matrix  *b, int row, int col){
	int x,y,flag=0;
	for (x=0; x<row; x++){
		for(y=0; y<col;y++){
			print_float(a->str[x][y]);
			print_float(b->str[x][y]);
			printf("\n");
			hfunit_comp_float(a->str[x][y],b->str[x][y],"Test transposta");
			/*if(a->str != b->str){
				printf("ERRO\n");
				flag=1;
			}*/
		}
	}
	if(flag == 0){
		printf("OK");
	}

}
// main test
void hfunit_run_tests(){
	super_mat_test();
}



// place here a nice description for each test
// eu peguei um exemplao só p vcs verem como usar as funcoes
// mas vcs vao ter q separar bem os teste. nao pode fazer assim !!!
/*
|Entrada | Classes de Equivalência Válidas| Classes de Equivalência Inválidas |
|--------|--------------------------------|-----------------------------------|
|        |                                |                                   |
|--------|--------------------------------|-----------------------------------|
|        |                                |                                   |
|--------|--------------------------------|-----------------------------------|
|        |                                |                                   |
|--------|--------------------------------|-----------------------------------|

*/
void super_mat_test() {

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
mat_compare(&M4,&M2,4,4);
}
