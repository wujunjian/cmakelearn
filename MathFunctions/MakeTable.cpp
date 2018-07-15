// 一个简单的用于构建平方根表的程序
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int i;
	double result;

	// 确保有足够多的参数
	if (argc < 2)
	{
		return 1;
	}

	// 打开输出文件
	FILE *fout = fopen(argv[1], "w");
	if (!fout)
	{
		return 1;
	}

	// 创建一个带有平方根表的源文件
	fprintf(fout,"double sqrtTable[] = {\n");
	for (i = 0; i < 10; ++i)
	{
		result = sqrt(static_cast<double>(i));
		fprintf(fout, "%g,\n", result);
	}

	// 该表以0结尾
	fprintf(fout, "0};\n");
	fclose(fout);
	return 0;
}
