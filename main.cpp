//
//  main.cpp
//  etutor
//
//  Created by Leroy on 02/04/2019.
//  Copyright © 2019 Leroy. All rights reserved.
//
#include<iostream>
#include<string>

using namespace std;
void reverse()
{
    int a,b;
    int **m;
    while(cin>>a>>b)
    {
        /* Dynamic allocate Array */
        m = new int *[a];
        for(int i = 0; i < b; i++)
            m[i] = new int [b];
        
        for(int i = 0; i < a; i++)
            for(int j = 0; j < b; j++)
                cin>>m[i][j];
        for(int i = 0; i < b; i++)
        {
            for(int j = 0; j < a; j++)
            {
                cout<<m[j][i];
                if(j != a-1)
                    cout<<" ";
            }
            cout<<endl;
        }
        
        /*Relase Memory*/
        for(int i = 0; i < a; i++)
            delete [] m[i];
        delete [] m;
    }
}
int main()
{
    reverse();
}

