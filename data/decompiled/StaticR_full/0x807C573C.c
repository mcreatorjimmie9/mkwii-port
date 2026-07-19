/* Function at 0x807C573C, size=236 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_807C573C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807C5748
    r31 = r3;
    r3 = *(0x168 + r3); // lwz @ 0x807C5750
    r12 = *(0 + r3); // lwz @ 0x807C5754
    r12 = *(0xc + r12); // lwz @ 0x807C5758
    /* mtctr r12 */ // 0x807C575C
    /* bctrl  */ // 0x807C5760
    r3 = *(0x16c + r31); // lwz @ 0x807C5764
    r12 = *(0 + r3); // lwz @ 0x807C5768
    r12 = *(0xc + r12); // lwz @ 0x807C576C
    /* mtctr r12 */ // 0x807C5770
    /* bctrl  */ // 0x807C5774
    r3 = *(0x170 + r31); // lwz @ 0x807C5778
    r12 = *(0 + r3); // lwz @ 0x807C577C
    r12 = *(0xc + r12); // lwz @ 0x807C5780
    /* mtctr r12 */ // 0x807C5784
    /* bctrl  */ // 0x807C5788
    r4 = *(0x190 + r31); // lwz @ 0x807C578C
    /* li r0, 0 */ // 0x807C5790
    /* lis r3, 0 */ // 0x807C5794
    *(0 + r4) = r0; // stw @ 0x807C5798
    /* lfs f0, 0(r3) */ // 0x807C579C
    /* stfs f0, 4(r4) */ // 0x807C57A0
    FUN_807C02E4(r3); // bl 0x807C02E4
    if (==) goto 0x0x807c57d0;
    /* lis r4, 0 */ // 0x807C57B0
    r3 = r31;
    r4 = *(0 + r4); // lwz @ 0x807C57B8
    r0 = *(0xb8c + r4); // lbz @ 0x807C57BC
    /* cntlzw r0, r0 */ // 0x807C57C0
    /* srwi r4, r0, 5 */ // 0x807C57C4
    FUN_807C5EC0(r3); // bl 0x807C5EC0
    /* b 0x807c57ec */ // 0x807C57CC
    /* lis r4, 0 */ // 0x807C57D0
    r3 = r31;
    r4 = *(0 + r4); // lwz @ 0x807C57D8
    r0 = *(0xb8c + r4); // lbz @ 0x807C57DC
    /* cntlzw r0, r0 */ // 0x807C57E0
    /* srwi r4, r0, 5 */ // 0x807C57E4
    FUN_807C5BE4(r3); // bl 0x807C5BE4
    /* li r5, 0 */ // 0x807C57EC
    /* li r0, 1 */ // 0x807C57F0
    *(0x174 + r31) = r5; // stw @ 0x807C57F4
    r3 = r31;
    r4 = r31 + 0x38; // 0x807C57FC
    *(0x180 + r31) = r5; // stw @ 0x807C5800
    *(0x184 + r31) = r5; // stw @ 0x807C5804
    *(0x188 + r31) = r5; // stw @ 0x807C5808
    *(0x18c + r31) = r0; // stb @ 0x807C580C
    FUN_807CF1B4(r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807C5814
    r31 = *(0xc + r1); // lwz @ 0x807C5818
    return;
}