#include<stdio.h>
int main()
{
	int c_pre,c_current;
	int word=0;
	c_current=getchar();
	while(c_current!=EOF)
	{
		c_pre=c_current;
		c_current=getchar();
         while((c_current=' ')||(c_current==';')||(c_current==',')||(c_current=='\t')||(c_current==' '))
         {
           word=word+1;
           if((c_pre==' ')||(c_pre==';')||(c_pre=',')||(c_pre=='\t')||(c_pre=='.'))
             continue;
         }
      
		//if(((c_pre==',')||(c_pre=='\t')||(c_pre=='.')||(c_pre==';')||(c_pre==' '))||(((c_pre==',')||(c_pre=='\t')||(c_pre=='.')||(c_pre==';')||(c_pre==' '))&&((c_current==',')||(c_current=='\t')||(c_current=='.')||(c_current==';')||(c_current==' '))))
	}
	printf("%d",word);
	return 0;
}
