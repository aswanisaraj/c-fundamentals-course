#include <stdio.h>
#include <string.h>

int main()
{
	// paragraph picked from https://www.britannica.com/science/life
	char x[2000] = "life, ........ biology.";
	printf("%s", x);
	
// char to_find[]="reveal";
// if(strstr(x,to_find)){
// 	printf("\n\nThe word has been found\n");
// }else{
// 	printf("\n\nThe word has NOT been found\n");
// }
	int count = 0;
	for (int i = 0; x[i] != 0; i++)
	{ // Use space,comma and full stop for counting
		if (x[i] == ' ' ||x[i]=='.'||x[i]==',')
		{
			count++;
		}
	}printf("\n\n\nTotal words in the Paragraph: %d\n",count);

	int count1 = 0;
	for (int i = 0; x[i] != 0; i++)
	{ // Use space,comma and full stop for counting
		if (x[i]=='.')
		{
			count1++;
		}
	}printf("\n\n\nTotal sentence in the Paragraph: %d\n",count1);

	return 0;
}


