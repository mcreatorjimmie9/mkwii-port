/* Function at 0x806EEF0C, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806EEF0C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    r5 = *(0 + r4); // lwz @ 0x806EEF14
    r3 = r3 + 0x5c; // 0x806EEF18
    *(0x14 + r1) = r0; // stw @ 0x806EEF1C
    r6 = *(4 + r4); // lwz @ 0x806EEF20
    FUN_805E3430(r3); // bl 0x805E3430
}