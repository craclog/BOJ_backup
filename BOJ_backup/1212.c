 #include <stdio.h>
void func(char tmp)
{
 switch(tmp)
 {
 	case '1':
     printf("001");
     break;
    case '2':
     printf("010");
     break;
     case '3':
     printf("011");
     break;
    case '4':
     printf("100");
     break;
     case '5':
     printf("101");
     break;
    case '6':
     printf("110");
     break;
     case '7':
     printf("111");
     break;
    case '0':
     printf("000");
     break;
 }
    
}
int main()
{
    char tmp;
    scanf("%c",&tmp);
    if(tmp<'4')
    {
     	if(tmp=='1')
            printf("1");
        else if(tmp=='2')
            printf("10");
        else if(tmp=='3')
            printf("11");
        else
        {   
            printf("0\n");
            return 0;
        }
        scanf("%c",&tmp);
    }
    
     //	scanf("%c",&tmp);
        while(tmp!='\n')
        {    
            func(tmp);
        	scanf("%c",&tmp);
        }
    
    return 0;
    
}