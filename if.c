# include <stdio.h>
int main()
{
	int prince = 0;
	int bill = 0;
	// 读入金额和票面
	printf("请输入金额: ");
	scanf("%d",&prince);
	printf("请输入票面: ");
	scanf("%d",&bill);
	// 计算找零
	if (bill >= prince)
	{
		printf("应该找您: %d\n",bill - prince);
	}else
	{
		printf("你的钱不够\n");
	}
	
	return 0;
}
