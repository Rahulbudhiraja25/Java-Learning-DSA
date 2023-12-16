#include<stdio.h>
#include<string.h>
int main()
{
    struct emp
    {
        char name[30];
        int age;
    };
    struct emp e;
    int recsize;
    recsize = sizeof(e);
    FILE *fp;
    FILE *ft;
    printf("What you want to do?\n");
    printf("1.Enter new data\n2.Modify data\n3.Delete data\n4.list\n5.delete all\n");
    char res,ename[30];
    res = getche();
    fp = fopen("data.DAT","rb+");
    if(fp == NULL)
    {
        fp = fopen("data.DAT","wb+");
        if(fp == NULL)
        {
            ("Can't open file");
        }
    }
    char again;
    if(res == '1')
    {
        do
        {
            fseek(fp,0,SEEK_END);
            printf("Enter the name of the employee\n");
            gets(e.name);
            printf("Enter the age of the employee\n");
            scanf("%d",&e.age);
            printf("Do you want enter new data?");
            fflush(stdin);
            again = getche();
            fwrite(&e,sizeof(e),1,fp);
        }while(again == 'y');
    }
    else if (res == '2')
    {
        printf("Whice name you want to modify");
        gets(ename);
        again = 'y';
        while(again == 'y')
        {
            rewind(fp);
            while(fread(&e,sizeof(e),1,fp) != 0)
            {
                if(strcmp(ename,e.name)== 0)
                {
                    printf("Enter the new name of the employe\n");
                    gets(e.name);
                    printf("Enter the new age of the employe\n");
                    scanf("%d",&e.age);
                    fseek(fp,-recsize,SEEK_CUR);
                    fwrite(&e,sizeof(e),1,fp);
                    fflush(stdin);
                    break;
                }

            }
            printf("Do you want to modify more?");
            again = getche();

        }
    }
    else if(res == '3')
    {
        printf("Wich name you want to delete?\n");
        gets(ename);
        rewind(fp);
        ft = fopen("temp.DAT","rb+");
        again ='y';
        while (again == 'y')
        {
            again = 'y';
            while(fread(&e,sizeof(e),1,fp)!=0)
            {
                if(strcmp(ename,e.name)!=0)
                {
                    fwrite(&e,sizeof(e),1,ft);
                }

            }
            fclose(ft);
            fclose(fp);
            remove("data.DAT");
            rename("temp.DAT","data.DAT");
            printf("Do you want to delete again?");
            again = getche();
        }
    }
    else if(res == '4')
    {
        rewind(fp);
        if(fp == NULL)
        {
            printf("Can't open file");
        }
        while(fread(&e,sizeof(e),1,fp) != 0)
        {
            printf("%s\t%d\n",e.name,e.age);
        }
    }
    else if(res == '5')
    {
        fclose(fp);
        remove("data.DAT");
    }
    return 0;

}
