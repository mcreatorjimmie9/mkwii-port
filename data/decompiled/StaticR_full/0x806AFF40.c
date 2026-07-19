/* Function at 0x806AFF40, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806AFF40(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806AFF50
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806AFF58
    r30 = r3;
    if (==) goto 0x0x806aff98;
    /* li r4, -1 */ // 0x806AFF64
    r3 = r3 + 0x54; // 0x806AFF68
    FUN_8066D0F8(r4, r3); // bl 0x8066D0F8
    r3 = r30 + 0x44; // 0x806AFF70
    /* li r4, -1 */ // 0x806AFF74
    FUN_80668158(r4, r3, r3, r4); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x806AFF80
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806aff98;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806AFF9C
    r30 = *(8 + r1); // lwz @ 0x806AFFA0
    r0 = *(0x14 + r1); // lwz @ 0x806AFFA4
    return;
}