#include <iostream>
#include <fstream>
#include <cstdlib>
#include <math.h>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
		int ile=0;
		int poprzednia=0;
		string ciag;
        bool dwucykliczny(string ciag){
        if(ciag.length()%2==0)
        {
        for(int i=0; i<=(ciag.length()/2)-1;i++)
        {
            if(ciag[i]!=ciag[ciag.length()/2+i])
            {
                return false;
            }
        }
        for(int i=0; i<=ciag.length()-1;i++)
        {   	
        cout<<ciag[i];
        }
        		cout<<endl;
		    }
		}
		
		bool spr(string ciag){
			
        	for (int i = 0; i < ciag.length()-1; i++)
		 	{
				if (ciag[i] == '1' && ciag[i+1] == '1') 
				{
					return false;
				}
			}
       		 ile++;
			return true;
		}
		
int main(int argc, char** argv) {
    fstream plik;
            plik.open("ciagi.txt", ios::in); 
            if(plik.good()) 
            while(!plik.eof()) 
                  {
                  plik>>ciag;
               	 dwucykliczny(ciag);
                }
          plik.close();                 
		        plik.open("ciagi.txt", ios::in); 
		        if(plik.good()) 
		        while(!plik.eof()) 
                  {          
					plik>>ciag;                    
                    spr(ciag);
                }
                    cout<<ile;
                 plik.close(); 
    return 0;
}
