/*--- Reads in waveform data records (wdr) in j20/c20 format specified by
    the structure in the .h file, outputs important info to be used in
    noise assessment, figures, etc. ---*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "jason20hz.h"

int main( int argc, char *argv[] )
{
    int nwav = 20; /* use 20 for Jason */
    int tide, delay, hgt, h0, issb, ioff, boff, nstr, tide_scr, bline;
    int loop, wavno, ns=0;

    double lat[nwav], lon[nwav], trec[nwav];
    double ylin[nwav], hmdiff[nwav], hmdiffdet[nwav], swh20[nwav];
    double slat, swh, slon, tnow, tprev, hstdev, hmed, stime;

    struct JASON20HZ c;
    FILE *fpin;



}
