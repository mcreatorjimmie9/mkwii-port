/* Function at 0x807E3A5C, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807E3A5C(int r3, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x807E3A68
    *(0xc + r1) = r31; // stw @ 0x807E3A6C
    r31 = r5;
    if (!=) goto 0x0x807e3a7c;
    FUN_807E3214(); // bl 0x807E3214
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x807E3A80
    r0 = *(0x14 + r1); // lwz @ 0x807E3A84
    return;
}