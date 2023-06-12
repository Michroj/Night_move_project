#include <iostream>

using namespace std;

int main()
{
    int t[9][9];
    int i,j,m,n,k,g=0,h,f,x=0,z,y;

    for(i=1;i<9;i++)
    {
        for(j=1;j<9;j++)
            {
            t[i][j]=0;
            cout<<t[i][j]<<" ";
            }
    cout<<endl;
    }

    for(i=0;i<1;)
        {
            cout<<endl<<"Podaj pozycje konia\n";
            cin>>m>>n;
            cout<<endl;

            if(m>8 || m<1 || n>8 || n<1)
                cout<<"Blad\n";
            else
                {
                    i++;
                    t[m][n]=2;
                }
        }

         for(i=1;i<9;i++)
            {
                for(j=1;j<9;j++)
                    cout<<t[i][j]<<" ";
                cout<<endl;
            }

            cout<<endl;

        while(true)
        {
            k=0;

            if(m+2<9 and n+1<9 and t[m+2][n+1]==0)
                {
                cout<<"Kliknij 1 aby ruszyc konia na pozycje "<<m+2<<" "<<n+1<<endl;
                k++;
                }

             if(m+1<9 and n+2<9 and t[m+1][n+2]==0)
                {
                cout<<"Kliknij 2 aby ruszyc konia na pozycje "<<m+1<<" "<<n+2<<endl;
                k++;
                }

            if(m-1>0 and n+2<9 and t[m-1][n+2]==0)
                {
                cout<<"Kliknij 3 aby ruszyc konia na pozycje "<<m-1<<" "<<n+2<<endl;
                k++;
                }

             if(m-2>0 and n+1<9 and t[m-2][n+1]==0)
                {
                cout<<"Kliknij 4 aby ruszyc konia na pozycje "<<m-2<<" "<<n+1<<endl;
                k++;
                }

             if(m-2>0 and n-1>0 and t[m-2][n-1]==0)
                {
                cout<<"Kliknij 5 aby ruszyc konia na pozycje "<<m-2<<" "<<n-1<<endl;
                k++;
                }

             if(m-1>0 and n-2>0 and t[m-1][n-2]==0)
                {
                cout<<"Kliknij 6 aby ruszyc konia na pozycje "<<m-1<<" "<<n-2<<endl;
                k++;
                }

             if(m+1<9 and n-2>0 and t[m+1][n-2]==0)
                {
                cout<<"Kliknij 7 aby ruszyc konia na pozycje "<<m+1<<" "<<n-2<<endl;
                k++;
                }

             if(m+2<9 and n-1>0 and t[m+2][n-1]==0)
                {
                cout<<"Kliknij 8 aby ruszyc konia na pozycje "<<m+2<<" "<<n-1<<endl;
                k++;
                }

            if(k==0)
                break;

            for(i=0;i<1;)
                {
                cout<<endl<<"Wybierz ruch\n";
                cin>>h;
                cout<<endl<<endl;
                if(h>0 and h<9)
                    i++;
                else
                    cout<<"Blad\n";
                }

            z=m;
            y=n;

            switch(h)
            {
            case 1:t[z+2][y+1]=2;m=m+2;n=n+1;break;
            case 2:t[z+1][y+2]=2;m=m+1;n=n+2;break;
            case 3:t[z-1][y+2]=2;m=m-1;n=n+2;break;
            case 4:t[z-2][y+1]=2;m=m-2;n=n+1;break;
            case 5:t[z-2][y-1]=2;m=m-2;n=n-1;break;
            case 6:t[z-1][y-2]=2;m=m-1;n=n-2;break;
            case 7:t[z+1][y-2]=2;m=m+1;n=n-2;break;
            case 8:t[z+2][y-1]=2;m=m+2;n=n-1;break;
            }

            t[z][y]=1;

            if(m>8 || m<1 || n>8 || n<1)
            {
                cout<<" Zly ruch\n"<<endl;
                m=z;
                n=y;
                t[m][n]=2;
            }
            else
                x++;

            f=0;

            for(i=1;i<9;i++)
                for(j=1;j<9;j++)
                    if(t[i][j]==1)
                        f++;

            if(x!=f)
            {
                cout<<" Zly ruch\n"<<endl;
                t[m][n]=1;
                t[z][y]=2;
                m=z;
                n=y;
                x--;
            }

             for(i=1;i<9;i++)
            {
                for(j=1;j<9;j++)
                    cout<<t[i][j]<<" ";
                cout<<endl;
            }

            cout<<endl<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl<<endl;
        }

         for(i=1;i<9;i++)
                for(j=1;j<9;j++)
                    if(t[i][j]==1 || t[i][j]==2)
                    g++;

        if(g==64)
            cout<<" YOU WIN!!!";
        else
            cout<<" GAME OVER ";

        return 0;
}
