KeyInt* InsertSort(int N, KeyInt *p)//ζε₯ζεΊ
{
	int temp;
	for (int i = 1; i < N; i++) {
		for (int j = i; (j > 0) && (p[j] < p[j - 1]); j--) {
			temp = p[j];
			p[j] = p[j - 1];
			p[j - 1] = temp;
		}
	}
	return p;
}
