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
	cos1_test();//0
	cos_test2();//360
	cos_test3();//30
	cos_test4();//45
	cos_test5();//60
	cos_test6();//90
	cos_test7();//120
	cos_test8();//135
	cos_test9();//150
	cos_test10();//180
	cos_test11();//210
	cos_test12();//225
	cos_test13();//240
	cos_test14();//270
	cos_test15();//300
	cos_test16();//315
	cos_test17();//330
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
void cos_test2(){
	float pi = 4 * atan(1);
	//float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	float degree = 360.0;	
	float radians;
	float expected = 1.0;
	char buf[30];
	radians = 6.28319f;// degree * pi / 180;
	printf("\nAngle is %d degrees.\n", (int)degree);
	/*cosine*/
	ftoa(radians, buf, 6);
	printf("rad: %s\n", buf);
	ftoa(cos(radians), buf, 6);
	printf("cos: %s\n", buf);
	hfunit_comp_float(cos(radians),expected, "cos(360.0)");

}

void cos_test3(){
	float pi = 4 * atan(1);
	//float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	float degree = 30.0;	
	float radians;
	float expected = 0.86602540378f;
	char buf[30];
	radians = 0.523599f;// degree * pi / 180;
	printf("\nAngle is %d degrees.\n", (int)degree);
	/*cosine*/
	ftoa(cos(radians), buf, 6);
	printf("cos: %s\n", buf);
	hfunit_comp_float(cos(radians),expected, "cos(30.0)");

}

void cos_test4(){
	float pi = 4 * atan(1);
	//float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	float degree = 45.0;	
	float radians;
	float expected = 0.70710678118f;
	char buf[30];
	radians = 0.785398f;// degree * pi / 180;
	printf("\nAngle is %d degrees.\n", (int)degree);
	/*cosine*/
	ftoa(cos(radians), buf, 6);
	printf("cos: %s\n", buf);
	hfunit_comp_float(cos(radians),expected, "cos(45.0)");

}
void cos_test5(){
	float pi = 4 * atan(1);
	//float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	float degree = 60.0;	
	float radians;
	float expected = 0.5f;
	char buf[30];
	radians = 1.0472f;// degree * pi / 180;
	printf("\nAngle is %d degrees.\n", (int)degree);
	/*cosine*/
	ftoa(cos(radians), buf, 6);
	printf("cos: %s\n", buf);
	hfunit_comp_float(cos(radians),expected, "cos(60.0)");

}
void cos_test6(){
	float pi = 4 * atan(1);
	//float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	float degree = 90.0;	
	float radians;
	float expected = 0.0f;
	char buf[30];
	radians = 1.5708f;// degree * pi / 180;
	printf("\nAngle is %d degrees.\n", (int)degree);
	/*cosine*/
	ftoa(cos(radians), buf, 6);
	printf("cos: %s\n", buf);
	hfunit_comp_float(cos(radians),expected, "cos(90.0)");

}void cos_test7(){
	float pi = 4 * atan(1);
	//float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	float degree = 120.0;	
	float radians;
	float expected = -0.5f;
	char buf[30];
	radians = 2.0944f;// degree * pi / 180;
	printf("\nAngle is %d degrees.\n", (int)degree);
	/*cosine*/
	ftoa(cos(radians), buf, 6);
	printf("cos: %s\n", buf);
	hfunit_comp_float(cos(radians),expected, "cos(120.0)");

}void cos_test8(){
	float pi = 4 * atan(1);
	//float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	float degree = 135.0;	
	float radians;
	float expected = -0.70710678118f;
	char buf[30];
	radians = 2.35619f;// degree * pi / 180;
	printf("\nAngle is %d degrees.\n", (int)degree);
	/*cosine*/
	ftoa(cos(radians), buf, 6);
	printf("cos: %s\n", buf);
	hfunit_comp_float(cos(radians),expected, "cos(135.0)");

}void cos_test9(){
	float pi = 4 * atan(1);
	//float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	float degree = 150.0;	
	float radians;
	float expected = -0.86602540378f;
	char buf[30];
	radians = 2.61799f;// degree * pi / 180;
	printf("\nAngle is %d degrees.\n", (int)degree);
	/*cosine*/
	ftoa(cos(radians), buf, 6);
	printf("cos: %s\n", buf);
	hfunit_comp_float(cos(radians),expected, "cos(150.0)");

}void cos_test10(){
	float pi = 4 * atan(1);
	//float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	float degree = 180.0;	
	float radians;
	float expected = -1.0f;
	char buf[30];
	radians = 3.14159f;// degree * pi / 180;
	printf("\nAngle is %d degrees.\n", (int)degree);
	/*cosine*/
	ftoa(cos(radians), buf, 6);
	printf("cos: %s\n", buf);
	hfunit_comp_float(cos(radians),expected, "cos(180.0)");

}void cos_test11(){
	float pi = 4 * atan(1);
	//float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	float degree = 210.0;	
	float radians;
	float expected = -0.86602540378f;
	char buf[30];
	radians = 3.66519f;// degree * pi / 180;
	printf("\nAngle is %d degrees.\n", (int)degree);
	/*cosine*/
	ftoa(cos(radians), buf, 6);
	printf("cos: %s\n", buf);
	hfunit_comp_float(cos(radians),expected, "cos(210.0)");

}void cos_test12(){
	float pi = 4 * atan(1);
	//float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	float degree = 225.0;	
	float radians;
	float expected = -0.70710678118f;
	char buf[30];
	radians = 3.92699f;// degree * pi / 180;
	printf("\nAngle is %d degrees.\n", (int)degree);
	/*cosine*/
	ftoa(cos(radians), buf, 6);
	printf("cos: %s\n", buf);
	hfunit_comp_float(cos(radians),expected, "cos(225.0)");

}void cos_test13(){
	float pi = 4 * atan(1);
	//float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	float degree = 240.0;	
	float radians;
	float expected = -0.5f;
	char buf[30];
	radians =  4.18879f;// degree * pi / 180;
	printf("\nAngle is %d degrees.\n", (int)degree);
	/*cosine*/
	ftoa(cos(radians), buf, 6);
	printf("cos: %s\n", buf);
	hfunit_comp_float(cos(radians),expected, "cos(240.0)");

}void cos_test14(){
	float pi = 4 * atan(1);
	//float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	float degree = 270.0;	
	float radians;
	float expected = 0.0f;
	char buf[30];
	radians = 4.71239f;// degree * pi / 180;
	printf("\nAngle is %d degrees.\n", (int)degree);
	/*cosine*/
	ftoa(cos(radians), buf, 6);
	printf("cos: %s\n", buf);
	hfunit_comp_float(cos(radians),expected, "cos(270.0)");

}void cos_test15(){
	float pi = 4 * atan(1);
	//float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	float degree = 300.0;	
	float radians;
	float expected = 0.5f;
	char buf[30];
	radians = 5.23599f;// degree * pi / 180;
	printf("\nAngle is %d degrees.\n", (int)degree);
	/*cosine*/
	ftoa(cos(radians), buf, 6);
	printf("cos: %s\n", buf);
	hfunit_comp_float(cos(radians),expected, "cos(300.0)");

}void cos_test16(){
	float pi = 4 * atan(1);
	//float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	float degree = 315.0;	
	float radians;
	float expected = 0.70710678118f;
	char buf[30];
	radians = 5.49779f;// degree * pi / 180;
	printf("\nAngle is %d degrees.\n", (int)degree);
	/*cosine*/
	ftoa(cos(radians), buf, 6);
	printf("cos: %s\n", buf);
	hfunit_comp_float(cos(radians),expected, "cos(315.0)");

}void cos_test17(){
	float pi = 4 * atan(1);
	//float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	float degree = 330.0;	
	float radians;
	float expected = 0.86602540378f;
	char buf[30];
	radians = 5.75959f;// degree * pi / 180;
	printf("\nAngle is %d degrees.\n", (int)degree);
	/*cosine*/
	ftoa(cos(radians), buf, 6);
	printf("cos: %s\n", buf);
	hfunit_comp_float(cos(radians),expected, "cos(330.0)");

}
/*void cos1_test(){
	//float pi = 4 * atan(1);
	float pi = 3.14159265359;	
	float degrees[] = {0.0, 30.0, 45.0, 60.0, 90.0, 120.0, 135.0, 150.0, 180.0, 210.0, 225.0, 240.0, 270.0, 300.0, 315.0, 330.0, 360.0};
	//float degree = 180.0;	
	float radians;
	float expected = 1.0;
	char buf[30];
	char buf_rad[30];
	int i;
	for (i = 0; i < sizeof(degrees) / sizeof(float); i++){
		radians = degrees[i] * pi / 180;
		ftoa(radians, buf_rad, 6);		
		printf("\nAngle is %d degrees (%s rad).\n", (int)degrees[i], buf_rad);
		/*cosine*/
		/*ftoa(cos(radians), buf, 6);
		printf("cos: %s\n", buf);
		hfunit_comp_float(cos(radians),expected, "cos(0.0)");
	}
}
*/
