    #include<stdio.h>
    #include<conio.h>
    #include<string.h>
    void main()
    {
        char s[100],w[50][50];
        int i=0,j=0,c=0,r=0,len=0,max=0,k[10];
        printf("\n Enter any string: \n");
        gets(s);
        len=strlen(s);
        for(i=0;i<len;i++)
        {
            if(s[i]!=' ')
            {
                w[r][c]=s[i];
                c++;
            }
            else
            {
                w[r][c]='\0';
                r++;
                c=0;
            }
        }
        w[r][c]='\0';
        for(j=0;j<=r;j++)
        {
            if(strlen(w[j])>max)
            {
                c=0;
                max=strlen(w[j]);
                k[c]=j;
                c++;
            }
            else if(strlen(w[j])==max)
            {
                k[c]=j;
                c++;
            }
        }
        if(c==1)
        {
            printf("\n The largest word is: ");
            puts(w[k[0]]);
        }
       
        getch();
    }
