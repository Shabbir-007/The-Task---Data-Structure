/*Name : Shabbir Ahmed
    ID : 1602044
    Level : II
    Semester : I
    Assignment : C++ programming*/

#include<bits/stdc++.h>
#define mx 10000

using namespace std;

int i,j,n,x=0;

void clr()
{
    char ch1 = getchar();
    cout<<"Press any key and then enter to clear screen: ";
    char ch2 = getchar();
    system("CLS");
}

int main()
{
    int *arr;
    arr = new int [mx];
    while(1)
    {
        cout<<"0 - Exit"<<endl;
        cout<<"1 - View all elements"<<endl;
        cout<<"2 - Search an element"<<endl;
        cout<<"3 - Insert new element"<<endl;
        cout<<"4 - Delete an element"<<endl;
        cout<<"5 - Sort elements in ascending order"<<endl;
        cout<<"6 - Sort elements in descending order"<<endl;
        cout<<"7 - Find memory location of an element"<<endl<<endl;
        cin>>n;
        if(n==0)
            break;
        else if(n==1)
        {
            for(j=1 ; j<=x ; j++)
                cout<<arr[j]<<endl;
            cout<<endl;
            clr();
        }
        else if(n==2)
        {
            int k;
            cout<<"Enter a number to find :"<<endl;
            cin>>k;
            for(j=1 ; j<=x ; j++)
            {
                if(k==arr[j])
                {
                    cout<<k<<" is found at the "<<j<<"th position of the array"<<endl;
                    break;
                }
                else
                    cout<<k<<" is not found in the array"<<endl;
            }
            clr();
        }
        else if(n==3)
        {
            int a;
            cout<<"Enter a new element to be inserted :"<<endl;
            cin>>a;
            arr[++x] = a;
            cout<<arr[x]<<" is inserted in the array successfully"<<endl;
            clr();
        }
        else if(n==4)
        {
            cout<<"Enter a data to be deleted:"<<endl;
            int m, p = 0,mark=0;
            cin>>m;
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
                cout<<m<<" is deleted from the array successfully"<<endl;
            }
            else
                cout<<m<<" is not found in the array"<<endl;
            clr();
        }
        else if(n==5)
        {
            cout<<"The elements in the array is being sorted in ascending form..."<<endl;
            for(i=1; i<=x; i++)
            {
                for(j=i+1; j<=x; j++)
                {
                    if(arr[i]>arr[j])
                        swap(arr[i], arr[j]);
                }
            }
            clr();
        }
        else if(n==6)
        {
            cout<<"The elements in the array is being sorted in descending form..."<<endl;
            for(i=1; i<=x; i++)
            {
                for(j=i+1; j<=x; j++)
                {
                    if(arr[i]<arr[j])
                        swap(arr[i], arr[j]);
                }
            }
            clr();
        }
        else if(n==7)
        {
            cout<<"Enter an index of at which the element is placed :"<<endl;
            int index;
            cin>>index;
            if(index<1 || index>x)
                cout<<"There's no such index, sorry..."<<endl;
            else
                cout<<&arr[index]<<" is the location of the element of index "<<index<<endl;
            clr();
        }
        else
        {
            cout<<"Invalid keyword, please try again..."<<endl;
            clr();
        }
    }
    return 0;
}

