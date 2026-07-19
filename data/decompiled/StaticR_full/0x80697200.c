/* Function at 0x80697200, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_80697200(int r3, int r6)
{
    /* Stack frame: -16(r1) */
    r6 = r3;
    *(0x14 + r1) = r0; // stw @ 0x8069720C
    r3 = *(4 + r3); // lwz @ 0x80697214
    FUN_805E3430(r6); // bl 0x805E3430
}