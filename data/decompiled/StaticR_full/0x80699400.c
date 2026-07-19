/* Function at 0x80699400, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80699400(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80699414
    r30 = r3;
    r0 = *(0x2e4 + r3); // lbz @ 0x8069941C
    *(0x2e0 + r3) = r4; // stw @ 0x80699420
    if (==) goto 0x0x80699434;
    r3 = r3 + 0x21c; // 0x8069942C
    FUN_806692E0(r3); // bl 0x806692E0
    r0 = *(0x52c + r30); // lbz @ 0x80699434
    *(0x528 + r30) = r31; // stw @ 0x80699438
    if (==) goto 0x0x80699450;
    r4 = r31;
    r3 = r30 + 0x464; // 0x80699448
    FUN_806692E0(r4, r3); // bl 0x806692E0
    *(0xa0 + r30) = r31; // stw @ 0x80699450
    r31 = *(0xc + r1); // lwz @ 0x80699454
    r30 = *(8 + r1); // lwz @ 0x80699458
    r0 = *(0x14 + r1); // lwz @ 0x8069945C
    return;
}