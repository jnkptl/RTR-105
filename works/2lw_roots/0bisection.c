#include <stdio.h>
#include <math.h>

float modified_fun(float x,float c);
int intersect(float a, float b, float c, float delta_x);
int roots(float a, float b, float delta_x);
void table(float a, float b, float c, float delta_x);

int main(){
	float a,x,delta_x,b,y,c;

	printf("investigating intersection points (or roots) of cos(x/2)*cos(x/2):\n");

	printf("please define range...\nstart (a): ");
	scanf(" %f",&a);

	printf("end (b): ");
	scanf(" %f",&b);

	printf("please define a horizontal line (c):");
	scanf(" %f",&c);

	printf("please define precision: "); // please define the degree of accuracy of which you wish to find where the line intersects the function
	scanf(" %f",&delta_x);
	printf("\n");

	if(c==0.00000)
	 roots(a,b,delta_x);
	else
	 intersect(a,b,c,delta_x);

	return 0;
}

int intersect(float a, float b, float c, float delta_x){ // investigates where a chosen horizontal line intersect the function
	float  x, fun_a, fun_b, a0=a, b0=b; //,a=0.01, b=1.5*M_PI, delta_x=1.e-3, fun_x;
	int k=0;

	fun_a = cos(a/2)*cos(a/2)-c;
	fun_b = cos(b/2)*cos(b/2)-c;

	if(fun_a*fun_b>0){ // if product of f(a), f(b) is positive then there are no roots between a, b
	// if product is negative, a or b is negative and therefore the line passes through the x-axis (y=0, root)
	 printf("in range: %.2f < x < %.2f, f(x)=cos(x/2)*cos(x/2) ",a,b);
	 printf("does not intersect y=%.2f (or intersects an even number of times)\n",c);
	 return 1;
	}

//	printf("		cos^2(%.3f/2)-c=%7.3f\t\t\t\t",a,(cos(a/2)*cos(a/2)-c));
//	printf("cos^2(%.3f/2)-c=%7.3f\n",b,(cos(b/2)*cos(b/2)-c));

	while((b-a)>delta_x){
	 k++; //k=k+1;//k+=1;
	 x = (a+b)/2.;
	 if(fun_a*(cos(x/2)*cos(x/2)-c)>0) // comparing midpoint with a and b
	  a=x; // root is left of midpoint
	 else
	  b=x; // root is right of midpoint
//	 printf("iteration %02d: cos^2(%.3f/2)=%.3f\t",k,a,cos(a/2)*cos(a/2)-c);
//	 printf("cos^2(%.3f/2)=%.3f\t",x,cos(x/2)*cos(x/2)-c);
//	 printf("cos^2(%.3f/2)=%.3f\n",b,cos(b/2)*cos(b/2)-c);
	 }

	printf("cos(x/2)*cos(x/2) intersects y = %2.2f, in range %.2f > x > %.2f, when x=%2.2f\n",c,a0,b0,x);
	printf("verification: f(%.3f) = %f\n",x,cos(x/2)*cos(x/2));
	printf("intersect found in %d steps\n",k);

	return 0;
}

int roots(float a, float b, float delta_x){
	float  x, fun_a, fun_b, a0=a, b0=b; //,a=0.01, b=1.5*M_PI, delta_x=1.e-3, fun_x;
	int k=0;


	fun_a = cos(a/2)*cos(a/2);
	fun_b = cos(b/2)*cos(b/2);

	if(fun_a*fun_b>0){ // if product of f(a), f(b) is positive then there are no roots between a, b
	// if product is negative, a or b is negative and therefore the line passes through the x-axis (y=0, root)
	 printf("in range: %.2f < x < %.2f, cos(x/2)*cos(x/2) function ",a,b);
	 printf("has no roots (or has an even number of roots)\n");
	 return 1;
	}

//	printf("		cos^2(%.3f/2)=%.3f\t\t\t\t",a,(cos(a/2)*cos(a/2)));
//	printf("cos^2(%.3f/2)=%.3f\n",b,(cos(b/2)*cos(b/2)));

	while((b-a)>delta_x){
	 k++; //k=k+1;//k+=1;
	 x = (a+b)/2.;
	 if(fun_a*(cos(x/2)*cos(x/2))>0) // comparing midpoint with a and b
	  a=x; // root is left of midpoint
	 else
	  b=x; // root is right of midpoint
//	 printf("iteration %02d: cos^2(%.3f/2)=%.3f\t",k,a,cos(a/2)*cos(a/2));
//	 printf("cos^2(%.3f/2)=%.3f\t",x,cos(x/2)*cos(x/2));
//	 printf("cos^2(%.3f/2)=%.3f\n",b,cos(b/2)*cos(b/2));
	}

	printf("root in range %.2f>x>%.2f is located at x=%.3f, when cos^2(x) is %.3f\n",a0,b0,x,cos(x/2)*cos(x/2));
	printf("f(%.3f) = %f\n",x,cos(x/2)*cos(x/2));
	printf("root found in %d steps\n",k);

	return 0;
}

float modified_fun(float x, float c){
	return (cos(x/2)*cos(x/2))-c;
}

void table(float a, float b, float c, float delta_x){ // prints values of function between range
	float x,y; //,c,a,b,delta_x; a=0; b=2*M_PI;

	x = a;
	printf("\tx\ty\n");
	while(x<b){
	 printf("%10.1f%10.1f\n",x,modified_fun(x,c));
	 x+=delta_x;
	}
}
