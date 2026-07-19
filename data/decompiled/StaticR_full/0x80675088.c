/* Function at 0x80675088, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80675088(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80675098
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806750A0
    r30 = r3;
    if (==) goto 0x0x806750f0;
    /* lis r5, 0 */ // 0x806750AC
    /* lis r4, 0 */ // 0x806750B0
    r5 = r5 + 0; // 0x806750B4
    *(0 + r3) = r5; // stw @ 0x806750B8
    r3 = *(0x294 + r3); // lwz @ 0x806750BC
    r4 = r4 + 0; // 0x806750C0
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
    r3 = r30 + 0x210; // 0x806750C8
    /* li r4, -1 */ // 0x806750CC
    FUN_806691A0(r4, r3, r4); // bl 0x806691A0
    r3 = r30;
    /* li r4, 0 */ // 0x806750D8
    FUN_806A0540(r3, r4, r3, r4); // bl 0x806A0540
}