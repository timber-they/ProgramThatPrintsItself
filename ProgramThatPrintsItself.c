#include <stdio.h>

void printLiterally(char *s);

int main()
{
	char *s[] = {"#include <stdio.h>\n\nvoid printLiterally(char *s);\n\nint main()\n{\n	char *s[] = {\"",
"\",\n\"",
"\"};\n",
"	printf(\"%s\", s[0]);\n	for (int i = 0; i < 4; i++)\n	{\n		printLiterally(s[i]);\n		printf(\"%s\", s[1]);\n	}\n	printLiterally(s[4]);\n	printf(\"%s\", s[2]);\n	printf(\"%s\", s[3]);\n	printf(\"%s\", s[4]);",
"\n	return 0;\n}\n\nvoid printLiterally(char *s)\n{\n	for (char *iter = s; *iter != '\\0'; iter++)\n	{\n		switch(*iter)\n		{\n			case '\\n':\n				printf(\"\\\\n\");\n				break;\n			case '\\\"':\n				printf(\"\\\\\\\"\");\n				break;\n			case '\\\\':\n				printf(\"\\\\\\\\\");\n				break;\n			default:\n				putchar(*iter);\n				break;\n		}\n	}\n}\n"};
	printf("%s", s[0]);
	for (int i = 0; i < 4; i++)
	{
		printLiterally(s[i]);
		printf("%s", s[1]);
	}
	printLiterally(s[4]);
	printf("%s", s[2]);
	printf("%s", s[3]);
	printf("%s", s[4]);
	return 0;
}

void printLiterally(char *s)
{
	for (char *iter = s; *iter != '\0'; iter++)
	{
		switch(*iter)
		{
			case '\n':
				printf("\\n");
				break;
			case '\"':
				printf("\\\"");
				break;
			case '\\':
				printf("\\\\");
				break;
			default:
				putchar(*iter);
				break;
		}
	}
}
