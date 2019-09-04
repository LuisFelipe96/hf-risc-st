#include <hf-risc.h>
#include <hf-unit.h>

union ufloat{
	float f;
	unsigned u;

};
// function under test 
float sqrt(float arg);

// list of individual tests
void cos1_test();
void test();

// main test
void hfunit_run_tests(){
	//cos1_test();
	test();
}

// place here a nice description for each test
void cos1_test(){
	float rad = 1.41372f;
	float v = cos(rad);
	float expected = 0.5f;
	printf("--------cos(");
	print_float(rad);
	printf(")=");
	printf("bcos(");
	printBits(sizeof(rad),&rad);
	printf(")=");
	print_float(v);
	printf("=");
	print_float(expected);
	printf("b");
	printBits(sizeof(v),&v);
	printf("=");
	printf("b");
	printBits(sizeof(expected),&expected);
	printf(")=");
	printf("\n");
	hfunit_comp_float(v,expected, "cos(0.0)");
}
void test(){
	float pi = 4 * atan(1);
	float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	float radians;
	int i;
	char buf[30];
	

	for (i = 0; i < sizeof(degrees) / sizeof(float); i++){
		radians = degrees[i] * pi / 180;
		printf("\nAngle is %d degrees.\n", (int)degrees[i]);
		/*sine*/
		ftoa(sin(radians), buf, 6);
		printf("sin: %s\n", buf);
		/*cosine*/
		ftoa(cos(radians), buf, 6);
		printf("cos: %s\n", buf);
		/*tangent*/
		ftoa(tan(radians), buf, 6);
		printf("tan: %s\n", buf);
		/*arcsine*/
		ftoa(asin(sin(radians)), buf, 6);
		printf("asin(sin): %s\n", buf);
		/*arccosine*/
		ftoa(acos(cos(radians)), buf, 6);
		printf("acos(cos): %s\n", buf);
		/*arctangent*/
		ftoa(atan(tan(radians)), buf, 6);
		printf("atan(tan): %s\n", buf);
	}
	return 0;

}

// place here a nice description for each test
/*void sqrt4_test(){
	float v = sqrt(4.0);
	float expected = 2.0;
	hfunit_comp_float(v,expected, "sqrt(4.0)");
}*/
