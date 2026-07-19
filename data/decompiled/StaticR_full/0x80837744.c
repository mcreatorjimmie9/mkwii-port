/* Function at 0x80837744, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80837744(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80837754
    r30 = r3;
    r31 = *(0x2c8 + r3); // lwz @ 0x8083775C
    if (!=) goto 0x0x80837770;
    r3 = r3 + 0x44; // 0x80837768
    FUN_8083128C(r3); // bl 0x8083128C
    /* lis r3, 0 */ // 0x80837770
    /* lis r4, 0 */ // 0x80837774
    /* lfs f1, 0(r3) */ // 0x80837778
    r3 = r30;
    /* lfs f2, 0(r4) */ // 0x80837780
    FUN_80829DB0(r3, r4, r3); // bl 0x80829DB0
    if (==) goto 0x0x80837798;
    r3 = r30;
    FUN_80829DE0(r3); // bl 0x80829DE0
    if (<) goto 0x0x808377f4;
    if (!=) goto 0x0x808377b0;
    /* li r0, 1 */ // 0x808377A4
    *(0x334 + r30) = r0; // stb @ 0x808377A8
    /* b 0x808377cc */ // 0x808377AC
    if (!=) goto 0x0x808377cc;
    r3 = r30;
    FUN_80829F60(r3); // bl 0x80829F60
    r0 = *(0x7c + r30); // lwz @ 0x808377C0
    r0 = r0 | 0x100; // 0x808377C4
    *(0x7c + r30) = r0; // stw @ 0x808377C8
    if (<=) goto 0x0x808377f4;
    r0 = *(4 + r30); // lwz @ 0x808377D4
    /* lis r3, 0 */ // 0x808377D8
    r3 = *(0 + r3); // lwz @ 0x808377DC
    r4 = r30;
    /* mulli r0, r0, 0x24 */ // 0x808377E4
    r3 = r3 + r0; // 0x808377E8
    r3 = r3 + 0x48; // 0x808377EC
    FUN_80820FFC(r4, r3); // bl 0x80820FFC
    r0 = *(0x14 + r1); // lwz @ 0x808377F4
    r31 = *(0xc + r1); // lwz @ 0x808377F8
    r30 = *(8 + r1); // lwz @ 0x808377FC
    return;
}