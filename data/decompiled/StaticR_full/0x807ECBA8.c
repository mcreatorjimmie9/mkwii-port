/* Function at 0x807ECBA8, size=364 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_807ECBA8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r7, 0 */ // 0x807ECBB0
    r6 = r7 + 0; // 0x807ECBB8
    *(0x5c + r1) = r31; // stw @ 0x807ECBBC
    *(0x58 + r1) = r30; // stw @ 0x807ECBC0
    r30 = r5;
    *(0x54 + r1) = r29; // stw @ 0x807ECBC8
    r29 = r4;
    *(0x50 + r1) = r28; // stw @ 0x807ECBD0
    r28 = r3;
    /* lfs f2, 0(r7) */ // 0x807ECBD8
    /* lfs f1, 4(r6) */ // 0x807ECBDC
    /* lfs f0, 8(r6) */ // 0x807ECBE0
    /* stfs f2, 0x38(r1) */ // 0x807ECBE4
    /* stfs f1, 0x3c(r1) */ // 0x807ECBE8
    /* stfs f0, 0x40(r1) */ // 0x807ECBEC
    /* stfs f2, 0x2c(r1) */ // 0x807ECBF0
    /* stfs f1, 0x30(r1) */ // 0x807ECBF4
    /* stfs f0, 0x34(r1) */ // 0x807ECBF8
    /* stfs f2, 0x20(r1) */ // 0x807ECBFC
    /* stfs f1, 0x24(r1) */ // 0x807ECC00
    /* stfs f0, 0x28(r1) */ // 0x807ECC04
    r0 = *(0x168 + r3); // lwz @ 0x807ECC08
    if (>) goto 0x0x807ecc24;
    r12 = *(0x164 + r3); // lwzu @ 0x807ECC14
    r12 = *(0x18 + r12); // lwz @ 0x807ECC18
    /* mtctr r12 */ // 0x807ECC1C
    /* bctrl  */ // 0x807ECC20
    r4 = *(0x16c + r28); // lwz @ 0x807ECC24
    r3 = r29;
    r4 = *(0 + r4); // lwz @ 0x807ECC30
    FUN_808B04F0(r3, r5); // bl 0x808B04F0
    if (!=) goto 0x0x807ecc74;
    r0 = *(0x168 + r28); // lwz @ 0x807ECC40
    if (>) goto 0x0x807ecc60;
    r12 = *(0x164 + r28); // lwz @ 0x807ECC4C
    r3 = r28 + 0x164; // 0x807ECC50
    r12 = *(0x18 + r12); // lwz @ 0x807ECC54
    /* mtctr r12 */ // 0x807ECC58
    /* bctrl  */ // 0x807ECC5C
    r4 = *(0x16c + r28); // lwz @ 0x807ECC60
    r3 = r29;
    r4 = *(4 + r4); // lwz @ 0x807ECC6C
    FUN_808B04F0(r3, r5); // bl 0x808B04F0
    r31 = r3;
    if (!=) goto 0x0x807eccb8;
    r0 = *(0x168 + r28); // lwz @ 0x807ECC80
    if (>) goto 0x0x807ecca0;
    r12 = *(0x164 + r28); // lwz @ 0x807ECC8C
    r3 = r28 + 0x164; // 0x807ECC90
    r12 = *(0x18 + r12); // lwz @ 0x807ECC94
    /* mtctr r12 */ // 0x807ECC98
    /* bctrl  */ // 0x807ECC9C
    r4 = *(0x16c + r28); // lwz @ 0x807ECCA0
    r3 = r29;
    r4 = *(8 + r4); // lwz @ 0x807ECCAC
    FUN_808B04F0(r3, r5); // bl 0x808B04F0
    r31 = r3;
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    FUN_805A4464(r5, r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 8(r1) */ // 0x807ECCD8
    r3 = r31;
    /* stfs f0, 0(r30) */ // 0x807ECCE0
    /* lfs f0, 0xc(r1) */ // 0x807ECCE4
    /* stfs f0, 4(r30) */ // 0x807ECCE8
    /* lfs f0, 0x10(r1) */ // 0x807ECCEC
    /* stfs f0, 8(r30) */ // 0x807ECCF0
    r31 = *(0x5c + r1); // lwz @ 0x807ECCF4
    r30 = *(0x58 + r1); // lwz @ 0x807ECCF8
    r29 = *(0x54 + r1); // lwz @ 0x807ECCFC
    r28 = *(0x50 + r1); // lwz @ 0x807ECD00
    r0 = *(0x64 + r1); // lwz @ 0x807ECD04
    return;
}