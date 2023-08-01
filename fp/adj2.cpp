int temp[2][2];

int adj2(int mat[][3]; int nr)
{
mat[0][0] = temp[0][0];
mat[0][0] = mat[1][1];
mat[1][1] = temp[0][0];

mat[1][0] *= -1;
mat[0][1] *= -1;


	
	for (int i=0; i<nr; i++)
	{
		for (int j=0; j<nr; j++)
		{
			cout<<setw(4)<<" "<<mat[i][j];}
	cout<<"\n";
}

}
