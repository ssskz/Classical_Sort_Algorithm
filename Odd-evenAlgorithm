KeyInt* BubbleAlgorithmParallel(int N, KeyInt *p)	//奇偶排序Odd-even Sort
{
	int i, j;
	for (i = 1; i < N; i++) {
		if ((i&0x1) == 1) {
#pragma omp parallel for
			for (j = 0; j < N - 1; j += 2) {
				if (p[j] > p[j + 1]) {
					int temp = p[j];
					p[j] = p[j + 1];
					p[j + 1] = temp;
				}
			}
		}
		else {
#pragma omp parallel for
			for (j = 2; j < N; j += 2) {
				if (p[j-1] > p[j]) {
					int temp = p[j-1];
					p[j-1] = p[j];
					p[j] = temp;
				}
			}
		}
	}
	return (p);
}
