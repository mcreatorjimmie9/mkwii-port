/* Function at 0x806AAC7C, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806AAC7C(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    r5 = r3;
    *(0x14 + r1) = r0; // stw @ 0x806AAC88
    r3 = *(4 + r3); // lwz @ 0x806AAC90
    FUN_805E3430(r5); // bl 0x805E3430
}