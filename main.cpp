#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <stdio.h>
#include <climits>
#include <cstring>
using namespace std;
int main() {
    int green[3];
    int brown[3];
    int clear[3];
    int comb[6];
    int bcg,bgc,cbg,cgb,gbc,gcb = 0;
    while(cin >> brown[0] >> green[0] >>clear[0]>> brown[1] >> green[1] >>clear[1]>> brown[2] >> green[2] >>clear[2]){
        bcg= clear[0] + green[0] + brown[1] + green[1] + brown[2] + clear[2];
        bgc= clear[0] + green[0] + brown[1] + clear[1] + brown[2] + green[2];
        cbg= brown[0] + green[0] + clear[1] + green[1] + brown[2] + clear[2];
        cgb= brown[0] + green[0] + brown[1] + clear[1] + green[2] + clear[2];
        gbc= clear[0] + brown[0] + clear[1] + green[1] + brown[2] + green[2];
        gcb= clear[0] + brown[0] + brown[1] + green[1] + green[2] + clear[2];
        comb[0] = bcg;
        comb[1] = bgc;
        comb[2] = cbg;
        comb[3] = cgb;
        comb[4] = gbc;
        comb[5] = gcb;
        int min = INT_MAX;
        int location= 0;
        for (int c = 0; c < 6; c++)
        {
            if (comb[c] < min)
            {
                min = comb[c];
                location = c;
            }
        }
        if(location == 0){
            cout << "BCG" << " " << min << endl;
        }
        else if(location == 1){
            cout << "BGC" << " " << min << endl;
        }
        else if(location == 2){
            cout << "CBG" << " " << min << endl;
        }
        else if(location == 3){
            cout << "CGB" << " " << min << endl;
        }
        else if(location == 4){
            cout << "GBC" << " " << min << endl;
        }
        else if(location == 5){
            cout << "GCB" << " " << min << endl;
        }

    }


}
