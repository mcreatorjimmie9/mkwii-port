/* Function at 0x806CFD44, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806CFD44(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806CFD54
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806CFD5C
    r30 = r3;
    if (==) goto 0x0x806cfda8;
    /* li r4, -1 */ // 0x806CFD68
    r3 = r3 + 0x1c8; // 0x806CFD6C
    FUN_806C9F28(r4, r3); // bl 0x806C9F28
    r3 = r30 + 0x54; // 0x806CFD74
    /* li r4, -1 */ // 0x806CFD78
    FUN_806A0540(r4, r3, r3, r4); // bl 0x806A0540
    r3 = r30 + 0x44; // 0x806CFD80
    /* li r4, -1 */ // 0x806CFD84
    FUN_80668158(r3, r4, r3, r4); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x806CFD90
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806cfda8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806CFDAC
    r30 = *(8 + r1); // lwz @ 0x806CFDB0
    r0 = *(0x14 + r1); // lwz @ 0x806CFDB4
    return;
}