struct inputs /* structure variable to pass as an argument to the functions */
{
	double num <100>;
	int num_size;
};


program OP_PROG /* procedure name */
{
	version OP_VERS { /* version name */
		double SUM(inputs) = 1;
		double MAXI(inputs) = 2;
		double MINI(inputs) = 3;
	} = 1; /* version number */
} = 2345611111; /* procedure number */
