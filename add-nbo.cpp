#include <stddef.h> // for size_t
#include <stdint.h> // for uint8_t
#include <stdio.h> // for printf
#include <netinet/in.h>

void write_0x(FILE* f1,FILE* f2) {
	uint32_t m1;
    uint32_t m2;
	fread(&m1,sizeof(1),4,f1);
    fread(&m2,sizeof(1),4,f2);
    m1 = ntohl(m1);
	m2 = ntohl(m2);
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", m1,m1,m2,m2,m1+m2,m1+m2);
}

int main(int argc,char* argv[]) {
    FILE* fp1 = fopen(argv[1],"r");
    FILE* fp2 = fopen(argv[2],"r");

    if (fp1 == NULL)
	{
		printf("파일개방에 실패 했습니다.");
		return 1;
	}
    if (fp1 == NULL)
	{
		printf("파일개방에 실패 했습니다.");
		return 1;
	}

	write_0x(fp1,fp2);

    fclose(fp1);
    fclose(fp2);
    return 0;
}

