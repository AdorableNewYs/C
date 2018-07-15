//具体的可以参考csdn里面的对可变参数的详解

#include <stdio.h>
#include <stdarg.h>


void Print(int format, ...) {
	va_list vl;
	int num = format;
	char c;
	va_start(vl, format);
	do {
		c = va_arg(vl, char);
		printf("%c", c);
	} while (--num);
	va_end(vl);
	printf("\n");
}

int main() {
	Print(5,'h','e','l','l','o');
	system("pause");
	return 0;
}
