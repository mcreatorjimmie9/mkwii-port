/* Function at 0x8085816C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8085816C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* li r4, 0 */ // 0x80858174
    *(0x14 + r1) = r0; // stw @ 0x80858178
    r3 = *(0x6c + r3); // lwz @ 0x8085817C
    r3 = *(0x28 + r3); // lwz @ 0x80858180
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x80858188
    r12 = *(0xc + r12); // lwz @ 0x8085818C
    /* mtctr r12 */ // 0x80858190
    /* bctrl  */ // 0x80858194
    r0 = *(0x14 + r1); // lwz @ 0x80858198
    return;
}