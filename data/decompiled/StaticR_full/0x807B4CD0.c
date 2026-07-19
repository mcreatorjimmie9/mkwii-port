/* Function at 0x807B4CD0, size=272 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 8 function(s) */

int FUN_807B4CD0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r4, 1 */ // 0x807B4CD8
    /* li r5, 6 */ // 0x807B4CDC
    /* li r6, 7 */ // 0x807B4CE4
    *(0x2c + r1) = r31; // stw @ 0x807B4CE8
    *(0x28 + r1) = r30; // stw @ 0x807B4CEC
    *(0x24 + r1) = r29; // stw @ 0x807B4CF0
    *(0x20 + r1) = r28; // stw @ 0x807B4CF4
    r28 = r3;
    FUN_807B0D98(); // bl 0x807B0D98
    /* li r0, 0 */ // 0x807B4D00
    *(0x1e4 + r28) = r0; // stw @ 0x807B4D04
    /* lis r30, 0 */ // 0x807B4D08
    /* lis r31, 0 */ // 0x807B4D0C
    *(0x1e8 + r28) = r0; // stw @ 0x807B4D10
    /* li r4, 5 */ // 0x807B4D14
    r3 = *(4 + r28); // lwz @ 0x807B4D18
    /* lfs f1, 0(r30) */ // 0x807B4D1C
    r3 = *(0x28 + r3); // lwz @ 0x807B4D20
    /* lfs f2, 0(r31) */ // 0x807B4D24
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(0x1c + r28); // lwz @ 0x807B4D2C
    /* li r4, 0 */ // 0x807B4D30
    /* lfs f1, 0(r30) */ // 0x807B4D34
    r3 = *(0x28 + r3); // lwz @ 0x807B4D38
    /* lfs f2, 0(r31) */ // 0x807B4D3C
    FUN_805E70EC(r4); // bl 0x805E70EC
    r29 = *(0x210 + r28); // lwz @ 0x807B4D44
    /* lis r3, 0 */ // 0x807B4D48
    /* lfs f3, 0(r3) */ // 0x807B4D4C
    /* li r4, 3 */ // 0x807B4D50
    r12 = *(0 + r29); // lwz @ 0x807B4D54
    r3 = r29;
    /* lfs f1, 0(r30) */ // 0x807B4D5C
    r12 = *(0xc + r12); // lwz @ 0x807B4D60
    /* lfs f2, 0(r31) */ // 0x807B4D64
    /* mtctr r12 */ // 0x807B4D68
    /* bctrl  */ // 0x807B4D6C
    /* lfs f0, 0(r30) */ // 0x807B4D70
    /* stfs f0, 0x14(r29) */ // 0x807B4D74
    /* stfs f0, 0x18(r29) */ // 0x807B4D78
    r29 = *(0x208 + r28); // lwz @ 0x807B4D7C
    r3 = r29;
    FUN_807AE7DC(r3); // bl 0x807AE7DC
    r3 = r29;
    FUN_807AE934(r3, r3); // bl 0x807AE934
    /* lis r5, 0 */ // 0x807B4D90
    r4 = r28;
    r5 = r5 + 0; // 0x807B4D9C
    FUN_807B2D44(r5, r4, r3, r5); // bl 0x807B2D44
    r3 = r29;
    /* li r5, 1 */ // 0x807B4DAC
    FUN_807AEC18(r5, r3, r4, r5); // bl 0x807AEC18
    r3 = r29;
    /* li r4, 1 */ // 0x807B4DB8
    FUN_807AED3C(r4, r5, r3, r4); // bl 0x807AED3C
    r0 = *(0x34 + r1); // lwz @ 0x807B4DC0
    r31 = *(0x2c + r1); // lwz @ 0x807B4DC4
    r30 = *(0x28 + r1); // lwz @ 0x807B4DC8
    r29 = *(0x24 + r1); // lwz @ 0x807B4DCC
    r28 = *(0x20 + r1); // lwz @ 0x807B4DD0
    return;
}