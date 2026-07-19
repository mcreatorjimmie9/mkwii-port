/* Function at 0x806A737C, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806A737C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806A738C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806A7394
    r30 = r3;
    if (==) goto 0x0x806a73c8;
    /* li r4, -1 */ // 0x806A73A0
    r3 = r3 + 0x44; // 0x806A73A4
    FUN_80668158(r4, r3); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x806A73B0
    FUN_806711C4(r4, r3, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806a73c8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806A73CC
    r30 = *(8 + r1); // lwz @ 0x806A73D0
    r0 = *(0x14 + r1); // lwz @ 0x806A73D4
    return;
}