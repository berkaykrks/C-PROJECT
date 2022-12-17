#include <stdio.h>

int main()
{
	int i;
	char harf;
	int enCok;
	char cumle[100];
	int kucukHarf[26]={0};
	
	printf("cumle gir: ");
	gets(cumle);
	
	while(cumle[i])
	{
		if(cumle[i]>='a' && cumle[i]<='z')
		{
			kucukHarf[cumle[i]-'a']++;
		}
		i++;
	}
	enCok=kucukHarf[0];
    for(int j=1; j<26; j++)
    {
        if(kucukHarf[j]!=0)
        {
            if(kucukHarf[j]>enCok)
            {
                enCok=kucukHarf[j];
                harf=j+'a';

            }
        }

    }

    printf("En Cok Kullanilan Harf : %c dir.",harf);

    return 0;
	
	
	
}
