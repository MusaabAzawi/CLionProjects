//
// Created by Musaab on 12-11-2019.
//
#include <algorithm>
#include <iostream>
#include <string>
#include <functional>
#include <iterator>
#include <vector>

using namespace std;


int main() {

    string namen[] = {"Bjorn", "Henk", "Willem", "Cedric", "Cheniqua", "Chantal", "Patricia", "JanRoderikWillemFriso",
                      "Hans", "Heinrich", "Flip"};
    int nLength = 10;
    string nTemp;
    int iCv;

    for(iCv = 1; iCv < nLength; ++iCv) {
        //de uitkomst wordt in tijdelijk locatie gezet
        nTemp = namen[iCv];
        // k is the index of the number to the left of the iCv.
        int k;

        for (k = iCv-1; k >= 0 && namen[k] > nTemp; k--)
        {

            namen[k+1] = namen[k];

        }
        namen[k+1] = nTemp;
    }
    for(iCv=0;iCv<nLength;iCv++)
        cout<<namen[iCv]<< " ";
    cout<<endl;
    return 0;

}