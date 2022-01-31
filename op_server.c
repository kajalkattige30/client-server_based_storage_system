/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "op.h"

double *
sum_1_svc(inputs *argp, struct svc_req *rqstp)
{
	static double  result;

	printf("SUM() function called...\n");
	
	double sum=0;
	int i;
	// logic to compute sum of array elements
	for(i=0;i<argp->num_size;i++)
		sum+=argp->num.num_val[i];
		
	result=sum;
	
	return &result;
}

double *
maxi_1_svc(inputs *argp, struct svc_req *rqstp)
{
	static double  result;

	printf("MAX() function called...\n");

	int i;
	// logic to compute maximum of array elements
	double mx=-999999;

	
	for(i=0;i<argp->num_size;i++)
		if(argp->num.num_val[i]>mx)
			mx=argp->num.num_val[i];
			
	result = mx;
	return &result;
}

double *
mini_1_svc(inputs *argp, struct svc_req *rqstp)
{
	static double  result;

	printf("MIN() function called...\n");

	int i;
	// logic to compute minimum of array elements
	double mn=999999;

	
	for(i=0;i<argp->num_size;i++)
		if(argp->num.num_val[i]<mn)
			mn=argp->num.num_val[i];
	result = mn;
	return &result;
}
