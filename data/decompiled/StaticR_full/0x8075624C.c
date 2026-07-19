/* Function at 0x8075624C, size=136 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_8075624C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80756254
    /* lis r10, 0 */ // 0x80756258
    *(0x34 + r1) = r0; // stw @ 0x8075625C
    /* li r11, 0 */ // 0x80756260
    *(0x2c + r1) = r31; // stw @ 0x8075626C
    /* li r6, 3 */ // 0x80756270
    *(0x28 + r1) = r30; // stw @ 0x80756274
    r30 = *(0 + r5); // lwzu @ 0x80756278
    /* lbzu r9, 0(r10) */ // 0x8075627C
    r31 = *(4 + r5); // lwz @ 0x80756280
    r12 = *(8 + r5); // lwz @ 0x80756284
    r8 = *(1 + r10); // lbz @ 0x8075628C
    r0 = *(2 + r10); // lbz @ 0x80756290
    *(0x18 + r1) = r30; // stw @ 0x80756294
    *(0x1c + r1) = r31; // stw @ 0x80756298
    *(0x20 + r1) = r12; // stw @ 0x8075629C
    *(0xc + r1) = r11; // stw @ 0x807562A0
    *(0x10 + r1) = r11; // stw @ 0x807562A4
    *(0x14 + r1) = r11; // stw @ 0x807562A8
    *(8 + r1) = r9; // stb @ 0x807562AC
    *(9 + r1) = r8; // stb @ 0x807562B0
    *(0xa + r1) = r0; // stb @ 0x807562B4
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x34 + r1); // lwz @ 0x807562BC
    r31 = *(0x2c + r1); // lwz @ 0x807562C0
    r30 = *(0x28 + r1); // lwz @ 0x807562C4
    return;
}