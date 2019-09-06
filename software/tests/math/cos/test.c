#include <hf-risc.h>
#include <hf-unit.h>

union ufloat{
	float f;
	unsigned u;
};

// function under test 
float cos(float arg);

// list of individual tests
void cos1_test();
void test();

// main test
void hfunit_run_tests(){
	cos1_test();
//	test();
}

// place here a nice description for each test
void cos1_test(){
	float pi = 4 * atan(1);
	//float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	float degree = 0.0;	
	float radians;
	float expected = 1.0;
	char buf[30];

	radians = degree * pi / 180;
	printf("\nAngle is %d degrees.\n", (int)degree);
	/*cosine*/
	ftoa(cos(radians), buf, 6);
	printf("cos: %s\n", buf);
	hfunit_comp_float(cos(radians),expected, "cos(0.0)");

}

