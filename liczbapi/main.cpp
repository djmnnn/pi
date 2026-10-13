#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    int tab[10000],poz=0;
    string maks="";
    ifstream wejscie("pi.txt");
    for(int i=0;i<10000;i++)
    {
    wejscie>>tab[i];
        
    }
    for(int i=0;i<10000;i++)
    {
        bool ros=true, mal=false,tak=false;
        int j=0;
        string ciag="";
        while(i+j+1<10000)
        {
            if(ros){
            if(tab[i+j]<tab[i+j+1])
            {
                ciag+=to_string(tab[i+j]);

            }
            else if(tab[i+j]>tab[i+j+1])
            {
                if(j==0)
                {
                    break;
                }
                ciag+=to_string(tab[i+j]);
                mal=true;
                ros=false;
                j++;
                continue;
            }
            else
            {
                break;
            }
            }
            if(mal)
            {
                if(tab[i+j]>tab[i+j+1]){
                    ciag+=to_string(tab[i+j]);
                    tak=true;
                }
                else
                {
                    ciag+=to_string(tab[i+j]);
                    break;
                }
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
