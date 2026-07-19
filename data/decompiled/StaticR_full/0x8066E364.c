/* Function at 0x8066E364, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8066E364(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8066E374
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8066E37C
    r30 = r3;
    if (==) goto 0x0x8066e398;
    FUN_8066E3B0(); // bl 0x8066E3B0
    r3 = r30;
    r4 = r31;
    FUN_8066E240(r3, r4); // bl 0x8066E240
    r0 = *(0x14 + r1); // lwz @ 0x8066E398
    r31 = *(0xc + r1); // lwz @ 0x8066E39C
    r30 = *(8 + r1); // lwz @ 0x8066E3A0
    return;
}