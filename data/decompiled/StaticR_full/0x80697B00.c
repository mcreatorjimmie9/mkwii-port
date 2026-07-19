/* Function at 0x80697B00, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80697B00(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    r5 = r3;
    *(0x14 + r1) = r0; // stw @ 0x80697B0C
    r3 = *(4 + r3); // lwz @ 0x80697B14
    FUN_805E3430(r5); // bl 0x805E3430
}