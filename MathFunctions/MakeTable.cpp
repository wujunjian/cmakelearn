// һ���򵥵����ڹ���ƽ������ĳ���
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int i;
	double result;

	// ȷ�����㹻��Ĳ���
	if (argc < 2)
	{
		return 1;
	}

	// ������ļ�
	FILE *fout = fopen(argv[1], "w");
	if (!fout)
	{
		return 1;
	}

	// ����һ������ƽ�������Դ�ļ�
	fprintf(fout,"double sqrtTable[] = {\n");
	for (i = 0; i < 10; ++i)
	{
		result = sqrt(static_cast<double>(i));
		fprintf(fout, "%g,\n", result);
	}

	// �ñ���0��β
	fprintf(fout, "0};\n");
	fclose(fout);
	return 0;
}
