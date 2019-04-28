#include <conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace::std;
main()
{
   string nama;
   char nim[20];
   int G[20];
   int s, t,tmp, nilai,batas,baru,u,v,w,x,y;
   cout<<"\nInputkan Nama     :";cin>>nama;
   cout<<"\nInputkan NIM      :";cin>>gets(nim);

   cout<<"\nInputkan Jumlah Data : ";cin>>batas;
   cout<<"\n==========================================================================";
   cout<<endl;
   system("CLS");

    for(s=0;s<batas;s++)
    {
        cout<<"\nData Indeks ["<<s<<"]= ";cin>>G[s];
    }
    cout<<endl;
    system("cls");

    cout<<"Hasil Sorting Dari Nilai Terkecil"<<endl;
    for(int i=1; i<batas; i++)
    {
        for(int j=0; j<batas-i; j++)
        {
            if(G[j]>G[j+1])
            {
                tmp = G[j];
                G[j]= G[j+1];
                G[j+1]=tmp;
            }
        }
    }

    for(int i=0; i<batas; i++){
        cout<<"\nData Indeks ["<<i<<"]= "<<G[i];
    }
    cout<<endl;


    cout<<"\nInputkan nilai yang dicari= ";
    cin>>nilai;
    for(t=0;t<batas;t++)
    {
    if(G[t]==nilai)
    {
    cout<<"\nAngka yang dicari terdapat pada INDEKS ["<<t<<"]";
    }
   }
   cout<<"\n\n============================================================================";

cout<<endl;
cout<<"\nInputkan indeks yang ingin diganti : ";
cin>>w;
cout<<"\nInputkan data pengganti : ";
cin>>baru;
u = w;
G[u] = baru;
cout<<"\nData yang baru  : \n";

for(v=0;v<batas;v++)
{
 cout<<"\nData["<<v<<"]="<<G[v]<<"\n";
}

cout<<"\n============================================================================";
cout<<endl;
cout<<"\nInputkan indeks yang ingin dihapus : ";
cin>>x;
s=x;
cout<<"\nAngka yang dihapus : ";
cout<<" "<<G[s]<<" pada INDEKS ["<<s<<"] \n";
cout<<"\nAngka akhir : \n";
for(t=x;t<batas;t++)
{
 G[t]=G[t+1];
}
for(y=0;y<batas-1;y++)
{
 cout<<"\nData["<<y<<"]="<<G[y];
}
getch();
}
