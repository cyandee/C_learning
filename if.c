# include <stdio.h>
int main()
{
	int prince = 0;
	int bill = 0;
	// �������Ʊ��
	printf("��������: ");
	scanf("%d",&prince);
	printf("������Ʊ��: ");
	scanf("%d",&bill);
	// ��������
	if (bill >= prince)
	{
		printf("Ӧ������: %d\n",bill - prince);
	}else
	{
		printf("���Ǯ����\n");
	}
	
	return 0;
}
