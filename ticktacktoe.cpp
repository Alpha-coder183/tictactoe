#include <iostream>
#include <stdlib.h>
using namespace std;
void print(char a[3][3])
{
    system("CLS");
    cout<<"  c o l u m n-->\n";
    cout<<"     1   2   3 \n";
    cout<<"       |   |   "<<endl;
    cout<<"r 1  "<<a[0][0]<<" | "<<a[0][1]<<" | "<<a[0][2]<<" "<<endl;
    cout<<"    ___|___|___"<<endl;
    cout<<"       |   |   "<<endl;
    cout<<"o 2  "<<a[1][0]<<" | "<<a[1][1]<<" | "<<a[1][2]<<" "<<endl;
    cout<<"    ___|___|___"<<endl;
    cout<<"       |   |   "<<endl;
    cout<<"w 3  "<<a[2][0]<<" | "<<a[2][1]<<" | "<<a[2][2]<<" "<<endl;
    cout<<"       |   |   "<<endl;
}
int dicission(char tt[3][3])
{
    int a;
    if 
    (
        ((tt[0][0]==tt[0][1])&&(tt[0][1]==tt[0][2])&&(tt[0][2]!=' '))||
        ((tt[0][0]==tt[1][0])&&(tt[1][0]==tt[2][0])&&(tt[2][0]!=' '))||
        ((tt[0][0]==tt[1][1])&&(tt[1][1]==tt[2][2])&&(tt[2][2]!=' '))||
        ((tt[0][1]==tt[1][1])&&(tt[1][1]==tt[2][1])&&(tt[2][1]!=' '))||
        ((tt[0][2]==tt[1][2])&&(tt[1][2]==tt[2][2])&&(tt[2][2]!=' '))||
        ((tt[0][2]==tt[1][1])&&(tt[1][1]==tt[2][0])&&(tt[2][0]!=' '))||
        ((tt[1][0]==tt[1][1])&&(tt[1][1]==tt[1][2])&&(tt[1][2]!=' '))||
        ((tt[2][0]==tt[2][1])&&(tt[2][1]==tt[2][2])&&(tt[2][2]!=' '))

    )
    {
        a= 1;
    }

    else
    {
        a= 0;
    }
    return a;
}
int takevaluex(char a[3][3])
{
    int row,col;
    cout<<"at the row ";
    cin>>row;
    cout<<"at the column ";
    cin>>col;
    if (a[row-1][col-1]==' ')
    {
        a[row-1][col-1]='x';
        return 1;
    }
    else
    {
        system("CLS");
        print(a);
        cout<<"sorry acess denied\nplease chose another value ";
        return 0;
    }
    
}
int takevalueo(char a[3][3])
{
    int row,col;
    cout<<"at the row ";
    cin>>row;
    cout<<"at the column ";
    cin>>col;
    if (a[row-1][col-1]==' ')
    {
        a[row-1][col-1]='o';
        return 1;
    }
    else
    {
        system("CLS");
        print(a);
        cout<<"sorry acess denied\nplease chose another value \n";
        return 0;
    }
}

int main()
{
    char yes;
    string nm1,nm2;
    system("CLS");
    cout<<"the name of the first player is ";
    getline(cin, nm1);

    cout<<"the name of the second player is ";
    getline(cin, nm2);

    int score1,score2;
    score1=0;
    score2=0;
    char a[3][3];
    do
    {
        for (int i = 0; i < 3; i++)//assigning value to ' '
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j]=' ';
            }
            
        }
        int ans,check;
        print(a);
        while (3)
        {
        
            cout<<"the "<<nm1<<" will put the x at \n";
            do
            {
                check=takevaluex(a);
            } while (check==0);
            
                
            print(a);
            ans=dicission(a);
            if (ans==1)
            {
                cout<<nm1<<" wins the match \n\n\n";
                score1++;
                break;
            }
            if (
                    a[0][0]!=' '&&
                    a[0][1]!=' '&&
                    a[0][2]!=' '&&
                    a[1][0]!=' '&&
                    a[1][1]!=' '&&
                    a[1][2]!=' '&&
                    a[2][0]!=' '&&
                    a[2][1]!=' '&&
                    a[2][2]!=' '
                )
            {
                cout<<"it's a draw\n";
                break;
            }
            cout<<"the "<<nm2<<" will put the o at \n";
            do
            {
                check=takevalueo(a);
            } while (check==0);    
            print(a);
            ans=dicission(a);
            if (ans==1)
            {
                cout<<nm2<<" wins the match \n\n\n";
                score2++;
                break;
            }    
        } 
        char psseudo;
        cout<<"type any key to see scores\n";
        cin>>psseudo;
        system("CLS");
        cout<<"the score of "<<nm1<<" is "<<score1<<endl;
        cout<<"the score of "<<nm2<<" is "<<score2<<endl;

        cout<<"do you want to play another round \nif yes press 'y'\nelse press 'n'\n";
        cin>>yes;
    }while(yes=='y');
    system("CLS");
    cout<<"GAME OVER!!\n\n";
    cout<<"the score of "<<nm1<<" is "<<score1<<endl;
    cout<<"the score of "<<nm2<<" is "<<score2<<endl;
    if (score1>score2)
    {
        cout<<"\n\nthe "<<nm1<<" wins"<<endl;
    }
    else if (score2>score1)
    {
        cout<<"\n\nthe "<<nm2<<" wins"<<endl;
    }
    else
    {
        cout<<"\n\nit's a draw";
    }
    cout<<"\n\nthank you for playing\n\n\n";
}//we need class object #oop to get the reverse function