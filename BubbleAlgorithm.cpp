KeyInt* BubbleAlgorithm(int N, KeyInt *p)	//冒泡排序
{
	int i, j;
	KeyInt temp;
//#pragma omp parallel for
	for (i = 0; i<N-1; i++)
		for (j = 0; j<N-1-i; j++)
			if (p[j]>p[j+1])
			{
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
	return (p);
}

