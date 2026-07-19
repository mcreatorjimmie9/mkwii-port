/* Function at 0x808C8844, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_808C8844(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    r5 = r3;
    *(0x14 + r1) = r0; // stw @ 0x808C8850
    r3 = *(4 + r3); // lwz @ 0x808C8858
    FUN_805E3430(r5); // bl 0x805E3430
}