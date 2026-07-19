/* Function at 0x805C9088, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805C9088(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x805C9090
    *(0xc + r1) = r31; // stw @ 0x805C9098
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x805C90A0
    r30 = r4;
    /* li r4, 4 */ // 0x805C90A8
    r3 = *(0 + r3); // lwz @ 0x805C90AC
    FUN_805C5788(r4); // bl 0x805C5788
    if (!=) goto 0x0x805c9128;
    /* lis r3, 0 */ // 0x805C90BC
    /* mulli r0, r30, 0xf0 */ // 0x805C90C0
    r4 = *(0 + r3); // lwz @ 0x805C90C4
    r3 = r4 + r0; // 0x805C90C8
    r5 = *(0xf4 + r3); // lwz @ 0x805C90CC
    if (!=) goto 0x0x805c90e0;
    /* li r0, 0 */ // 0x805C90D8
    /* b 0x805c9108 */ // 0x805C90DC
    /* mulli r0, r31, 0xf0 */ // 0x805C90E0
    r3 = r4 + r0; // 0x805C90E4
    r0 = *(0xf4 + r3); // lwz @ 0x805C90E8
    if (!=) goto 0x0x805c90fc;
    /* li r0, 0 */ // 0x805C90F4
    /* b 0x805c9108 */ // 0x805C90F8
    /* subf r0, r5, r0 */ // 0x805C90FC
    /* cntlzw r0, r0 */ // 0x805C9100
    /* srwi r0, r0, 5 */ // 0x805C9104
    if (!=) goto 0x0x805c9128;
    /* lis r3, 0 */ // 0x805C9110
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x805C9118
    r5 = r30;
    r6 = *(8 + r3); // lbz @ 0x805C9120
    FUN_8090A3FC(r3, r4, r5); // bl 0x8090A3FC
    r0 = *(0x14 + r1); // lwz @ 0x805C9128
    r31 = *(0xc + r1); // lwz @ 0x805C912C
    r30 = *(8 + r1); // lwz @ 0x805C9130
    return;
}