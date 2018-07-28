/*Name : Shabbir Ahmed
    ID : 1602044
    Level : II
    Semester : I
    Assignment : C programming*/

#include<stdio.h>
#include<string.h>
#define max 10000

int i,j,n,x=0;

void clr()
{
    char ch1 = getchar();
    printf("Press any key and then enter to clear screen: ");
    char ch2 = getchar();
    system("CLS");
}


int main()
{
    int *arr = malloc(max * sizeof(int));
    while(1)
    {
        printf("0 - Exit\n");
        printf("1 - View all elements\n");
        printf("2 - Search an element\n");
        printf("3 - Insert new element\n");
        printf("4 - Delete an element\n");
        printf("5 - Sort elements in ascending order\n");
        printf("6 - Sort elements in descending order\n");
        printf("7 - Find memory location of an element\n\n");
        scanf("%d",&n);
        if(n==0)
            break;
        else if(n==1)
        {
            for(j=1 ; j<=x ; j++)
                printf("%d\n",arr[j]);
            printf("\n");
            clr();
        }
        else if(n==2)
        {
            int k;
            printf("Enter a number to find :\n");
            scanf("%d",&k);
            for(j=1 ; j<=x ; j++)
            {
                if(k==arr[j])
                {
                    printf("%d is found at the %dth position of the array\n",k,j);
                    break;
                }
                else
                    printf("%d is not found in the array\n",k);
                clr();
            }
        }
        else if(n==3)
        {
            int a;
            printf("Enter a new element to be inserted :\n");
            scanf("%d",&a);
            arr[++x] = a;
            printf("%d is inserted in the array successfully\n", arr[x]);
            clr();
        }
        else if(n==4)
        {
            printf("Enter a data to be deleted: \n");
            int m, p = 0,mark=0;
            scanf("%d", &m);
            for(i=1; i<=x; i++)
            {
                if(m==arr[i])
                {
                    p = i;
                    x--;
                    mark++;
                    break;
                }
            }
            if(mark)
            {
                for(i=p; i<=x; i++)
                {
                    arr[i] = arr[i+1];
                }
                printf("%d is deleted from the array successfully\n", m);
            }
            else
                printf("%d is not found in the array\n", m);
            clr();
        }
        else if(n==5)
        {
            printf("The elements in the array is being sorted in ascending form... \n\n");
            for(i=1; i<=x; i++)
            {
                for(j=i+1; j<=x; j++)
                {
                    if(arr[i]>arr[j])
                    {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
            clr();
        }
        else if(n==6)
        {
            printf("The elements in the array is being sorted in descending form... \n\n");
            for(i=1; i<=x; i++)
            {
                for(j=i+1; j<=x; j++)
                {
                    if(arr[i]<arr[j])
                    {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
            clr();
        }
        else if(n==7)
        {
            printf("Enter an index of at which the element is placed :\n");
            int index;
            scanf("%d",&index);
            if(index<1 || index>x)
                printf("There's no such index, sorry...\n");
            else
                printf("%d is the location of the element of index %d\n",&arr[index],index);
            clr();
        }
        else
        {
            printf("Invalid keyword, please try again...\n");
            clr();
        }
    }
    return 0;
}
