// 2017/4/20
//------------------------------------------------------
//  (Autonomous 2-D PWC )
//   parameters: gama1 = 1.12, gama2 = 7.8, beta = 11.0,
//   Attractor: changing parameter D2
//------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <kgraph.h>
#define gama2_start 0.0
#define gama2_final 2.1
#define beta_start 1.1
#define beta_final 50.1
#define grid 1000
#define gama2_delta (gama2_final-gama2_start)/grid
#define beta_delta (beta_final-beta_start)/grid
#define p 0.5
int main()
{
	
	FILE *fp1;
// parameters 
	double  gama1, gama2, beta; 
	double f1;
	double a_beta2, b_beta2, c_beta2, delta_beta2;
	double a_beta2R, b_beta2R, c_beta2R, delta_beta2R;
	double a_beta3, b_beta3, c_beta3, delta_beta3;
	double a_beta3R, b_beta3R, c_beta3R, delta_beta3R;
	double a_beta4, b_beta4, c_beta4, delta_beta4;
	double a_beta4R, b_beta4R, c_beta4R, delta_beta4R;
	double a_beta5, b_beta5, c_beta5, delta_beta5;
	double a_beta5R, b_beta5R, c_beta5R, delta_beta5R;
	double a_beta6, b_beta6, c_beta6, delta_beta6;
	double a_beta6R, b_beta6R, c_beta6R, delta_beta6R;
	double a_beta7, b_beta7, c_beta7, delta_beta7;
	double a_beta7R, b_beta7R, c_beta7R, delta_beta7R;
	double a_beta8, b_beta8, c_beta8, delta_beta8;
	double a_beta8R, b_beta8R, c_beta8R, delta_beta8R;
	double a_beta9, b_beta9, c_beta9, delta_beta9;
	double a_beta9R, b_beta9R, c_beta9R, delta_beta9R;
	double a_beta10, b_beta10, c_beta10, delta_beta10;
	double a_beta10R, b_beta10R, c_beta10R, delta_beta10R;
	double a_beta11, b_beta11, c_beta11, delta_beta11;
	double a_beta11R, b_beta11R, c_beta11R, delta_beta11R;
	fp1 = fopen("gama2.dat", "w");
	//fp2 = fopen("beta.dat", "w");
	// PARAMETERS ----------------------------------------
	// inputing parameters 
	printf("gama1 = "); scanf("%lf", &gama1);
	
// main routine for calculation of solution
	for(gama2=gama2_start+gama2_delta; gama2<=gama2_final; gama2+=gama2_delta)
	{   
		a_beta2 = 1;
		b_beta2 = -1*(3*gama1+gama2);
		c_beta2 = gama1+3*gama2-1;
		delta_beta2 = b_beta2*b_beta2-4*a_beta2*c_beta2;
		
		a_beta2R = 1;
		b_beta2R = -(3*gama1-gama2);
		c_beta2R = -(gama1-3*gama2+1);
		delta_beta2R = b_beta2R*b_beta2R-4*a_beta2R*c_beta2R;
		
		a_beta3 = 1;
		b_beta3 = -1*(5*gama1+gama2);
		c_beta3 = gama1+5*gama2-1;
		delta_beta3 = b_beta3*b_beta3-4*a_beta3*c_beta3;
		
		a_beta3R = 1;
		b_beta3R = -(5*gama1-gama2);
		c_beta3R = -(gama1-5*gama2+1);
		delta_beta3R = b_beta3R*b_beta3R-4*a_beta3R*c_beta3R;
		
		a_beta4 = 1;
		b_beta4 = -1*(7*gama1+gama2);
		c_beta4 = gama1+7*gama2-1;
		delta_beta4 = b_beta4*b_beta4-4*a_beta4*c_beta4;
		
		a_beta4R = 1;
		b_beta4R = -(7*gama1-gama2);
		c_beta4R = -(gama1-7*gama2+1);
		delta_beta4R = b_beta4R*b_beta4R-4*a_beta4R*c_beta4R;		
		
		a_beta5 = 1;
		b_beta5 = -1*(9*gama1+gama2);
		c_beta5 = gama1+9*gama2-1;
		delta_beta5 = b_beta5*b_beta5-4*a_beta5*c_beta5;
		
		a_beta5R = 1;
		b_beta5R = -(9*gama1-gama2);
		c_beta5R = -(gama1-9*gama2+1);
		delta_beta5R = b_beta5R*b_beta5R-4*a_beta5R*c_beta5R;	
		
		a_beta6 = 1;
		b_beta6 = -(11*gama1+gama2);
		c_beta6 = gama1+11*gama2-1;
		delta_beta6 = b_beta6*b_beta6-4*a_beta6*c_beta6;
		
		a_beta6R = 1;
		b_beta6R = -(11*gama1-gama2);
		c_beta6R = -gama1+11*gama2-1;
		delta_beta6R = b_beta6R*b_beta6R-4*a_beta6R*c_beta6R;

		a_beta7 = 1;
		b_beta7 = -(13*gama1+gama2);
		c_beta7 = gama1+13*gama2-1;
		delta_beta7 = b_beta7*b_beta7-4*a_beta7*c_beta7;
		
		a_beta7R = 1;
		b_beta7R = -(13*gama1-gama2);
		c_beta7R = -gama1+13*gama2-1;
		delta_beta7R = b_beta7R*b_beta7R-4*a_beta7R*c_beta7R;	

		a_beta8 = 1;
		b_beta8 = -(15*gama1+gama2);
		c_beta8 = gama1+15*gama2-1;
		delta_beta8 = b_beta8*b_beta8-4*a_beta8*c_beta8;
		
		a_beta8R = 1;
		b_beta8R = -(15*gama1-gama2);
		c_beta8R = -gama1+15*gama2-1;
		delta_beta8R = b_beta8R*b_beta8R-4*a_beta8R*c_beta8R;

		a_beta9 = 1;
		b_beta9 = -(17*gama1+gama2);
		c_beta9 = gama1+17*gama2-1;
		delta_beta9 = b_beta9*b_beta9-4*a_beta9*c_beta9;
		
		a_beta9R = 1;
		b_beta9R = -(17*gama1-gama2);
		c_beta9R = -gama1+17*gama2-1;
		delta_beta9R = b_beta9R*b_beta9R-4*a_beta9R*c_beta9R;
		
		a_beta10 = 1;
		b_beta10 = -(19*gama1+gama2);
		c_beta10 = gama1+19*gama2-1;
		delta_beta10 = b_beta10*b_beta10-4*a_beta10*c_beta10;
		
		a_beta10R = 1;
		b_beta10R = -(19*gama1-gama2);
		c_beta10R = -gama1+19*gama2-1;
		delta_beta10R = b_beta10R*b_beta10R-4*a_beta10R*c_beta10R;

		a_beta11 = 1;
		b_beta11 = -(21*gama1+gama2);
		c_beta11 = gama1+21*gama2-1;
		delta_beta11 = b_beta11*b_beta11-4*a_beta11*c_beta11;
		
		a_beta11R = 1;
		b_beta11R = -(23*gama1-gama2);
		c_beta11R = -gama1+23*gama2-1;
		delta_beta11R = b_beta11R*b_beta11R-4*a_beta11R*c_beta11R;
		
		fprintf(fp1, "%3.20f, %3.20f, %3.20f, %3.20f, %3.20f, %3.20f, %3.20f, %3.20f, %3.20f, %3.20f, %3.20f, %3.20f, %3.20f, %3.20f, %3.20f, %3.20f, %3.20f, %3.20f, %3.20f, %3.20f, %3.20f, %3.20f, %3.20f\n", 
																   gama2, gama1+gama2-1,gama1-gama2+1,
		                                                       (-b_beta2+sqrt(delta_beta2))/2/a_beta2,
															   (-b_beta2R+sqrt(delta_beta2R))/2/a_beta2R,
															   (-b_beta3+sqrt(delta_beta3))/2/a_beta3,
															   (-b_beta3R+sqrt(delta_beta3R))/2/a_beta3R,
															   (-b_beta4+sqrt(delta_beta4))/2/a_beta4,
															   (-b_beta4R+sqrt(delta_beta4R))/2/a_beta4R,
															   (-b_beta5+sqrt(delta_beta5))/2/a_beta5,
															   (-b_beta5R+sqrt(delta_beta5R))/2/a_beta5R,
															   (-b_beta6+sqrt(delta_beta6))/2/a_beta6,
															   (-b_beta6R+sqrt(delta_beta6R))/2/a_beta6R,
															   (-b_beta7+sqrt(delta_beta7))/2/a_beta7,
															   (-b_beta7R+sqrt(delta_beta7R))/2/a_beta7R,
															   (-b_beta8+sqrt(delta_beta8))/2/a_beta8,
															   (-b_beta8R+sqrt(delta_beta8R))/2/a_beta8R,
															   (-b_beta9+sqrt(delta_beta9))/2/a_beta9,
															   (-b_beta9R+sqrt(delta_beta9R))/2/a_beta9R,
															   (-b_beta10+sqrt(delta_beta10))/2/a_beta10,
															   (-b_beta10R+sqrt(delta_beta10R))/2/a_beta10R,
															   (-b_beta11+sqrt(delta_beta11))/2/a_beta11,
															   (-b_beta11R+sqrt(delta_beta11R))/2/a_beta11R);
    }
	
	/*for(beta=beta_start; beta<=beta_final; beta+=beta_delta)
	{     
	fprintf(fp2, "%3.20f, %3.20f, %3.20f\n", beta, 1+beta-gama1,beta*gama1);
    }*/
	fclose(fp1);
//	fclose(fp2);
	gclear_();
	
}
