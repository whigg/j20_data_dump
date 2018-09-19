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

    if (argc != 4 || (fpin = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "usage j20_data_dump input.j20 nstruct baseline\n");
        fprintf(stderr, "        nstruct (1) - use 2-parameter retracking result \n");
        fprintf(stderr, "        nstruct (2) - use 3-parameter retracking result \n");
        fprintf(stderr, "        nstruct (3) - use threshold retracking result \n");
        fprintf(stderr, " \n");
        fprintf(stderr, "        baseline (1) - Baseline A \n");
        fprintf(stderr, "        baseline (2) - Baseline B \n");
        return EXIT_FAILURE;
    }
    
    nstr  = atoi(argv[2]);
    bline = atoi(argv[3]);
}
