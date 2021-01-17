#include <stdio.h>

int main(void)
{
	int i,j;

	for(i=1;i<=9;i++)//以下を１の段から９の段まで実行する
	{
		for(j=1;j<=9;j++)//jを1から9まで変化させて繰り返すことで、iの段の１番目から9番目まで表示する
		{
			printf("%2d ",i*j);//iの段のj番目を表示、％2dで二桁分のスペースを作る
		}

		printf("\n");//改行する
	}

	return 0;
}
