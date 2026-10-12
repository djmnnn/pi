#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    int tab[10000],poz=0;
    string maks="";
    ifstream wejscie("pi.txt");
    //ifstream wejscie("pi_przyklad.txt");
    for(int i=0;i<10000;i++)
    {
        wejscie>>tab[i];
    }
    for(int i=0;i<10000-4;i++)
    {
        bool ros=true, mal=false,tak=false;
        int j=0;
        string ciag="";
        while(i+j+1!=9999)
        {
            if(ros){
            if(tab[i+j]<tab[i+j+1])
            {
                ciag+=tab[i+j];

            }
            else if(j==0)
            {
                break;
            }
            else if(tab[i+j]>tab[i+j+1]||tab[i+j]==tab[i+j+1])
            {
                ciag+=tab[i+j];
                mal=true;
                ros=false;
                j++;
                continue;
            }
            }
            if(mal)
            {
                if(tab[i+j]>tab[i+j+1]){
                    ciag+=tab[i+j];
                    tak=true;
                }
                else break;
            }
            j++;

        }
        if(ciag.size()>maks.size()&&mal&&ros==false&&tak)
        {
            maks=ciag;
            poz=i+1;
        }


    }
    cout<<maks<<"\n"<<poz;









}
