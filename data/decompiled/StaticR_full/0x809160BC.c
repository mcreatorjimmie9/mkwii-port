/* Function at 0x809160BC, size=136 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_809160BC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x809160C4
    /* lis r10, 0 */ // 0x809160C8
    *(0x34 + r1) = r0; // stw @ 0x809160CC
    /* li r11, 0 */ // 0x809160D0
    *(0x2c + r1) = r31; // stw @ 0x809160DC
    /* li r6, 3 */ // 0x809160E0
    *(0x28 + r1) = r30; // stw @ 0x809160E4
    r30 = *(0 + r5); // lwzu @ 0x809160E8
    /* lbzu r9, 0(r10) */ // 0x809160EC
    r31 = *(4 + r5); // lwz @ 0x809160F0
    r12 = *(8 + r5); // lwz @ 0x809160F4
    r8 = *(1 + r10); // lbz @ 0x809160FC
    r0 = *(2 + r10); // lbz @ 0x80916100
    *(0x18 + r1) = r30; // stw @ 0x80916104
    *(0x1c + r1) = r31; // stw @ 0x80916108
    *(0x20 + r1) = r12; // stw @ 0x8091610C
    *(0xc + r1) = r11; // stw @ 0x80916110
    *(0x10 + r1) = r11; // stw @ 0x80916114
    *(0x14 + r1) = r11; // stw @ 0x80916118
    *(8 + r1) = r9; // stb @ 0x8091611C
    *(9 + r1) = r8; // stb @ 0x80916120
    *(0xa + r1) = r0; // stb @ 0x80916124
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x34 + r1); // lwz @ 0x8091612C
    r31 = *(0x2c + r1); // lwz @ 0x80916130
    r30 = *(0x28 + r1); // lwz @ 0x80916134
    return;
}