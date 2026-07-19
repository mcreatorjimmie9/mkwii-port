/* Function at 0x8074DC78, size=128 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_8074DC78(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r29, 0 */ // 0x8074DC90
    r29 = r29 + 0; // 0x8074DC94
    *(0x20 + r1) = r28; // stw @ 0x8074DC98
    r28 = r3;
    FUN_8074BB7C(); // bl 0x8074BB7C
    r4 = r28 + 0x30; // 0x8074DCA8
    r5 = r28 + 0x148; // 0x8074DCAC
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    r0 = *(0x2c + r28); // lhz @ 0x8074DCB4
    /* lfs f0, 0x10(r1) */ // 0x8074DCBC
    /* lfs f1, 0xc(r1) */ // 0x8074DCC0
    r0 = r0 | 1; // 0x8074DCC4
    /* lfs f2, 8(r1) */ // 0x8074DCC8
    /* stfs f2, 0x30(r28) */ // 0x8074DCCC
    r4 = *(0x148 + r28); // lwz @ 0x8074DCD0
    *(0x2c + r28) = r0; // sth @ 0x8074DCD4
    r0 = *(0x14c + r28); // lwz @ 0x8074DCD8
    /* stfs f1, 0x34(r28) */ // 0x8074DCDC
    /* stfs f0, 0x38(r28) */ // 0x8074DCE0
    *(0x14 + r1) = r4; // stw @ 0x8074DCE4
    *(0x18 + r1) = r0; // stw @ 0x8074DCE8
    r0 = *(0x150 + r28); // lwz @ 0x8074DCEC
    *(0x1c + r1) = r0; // stw @ 0x8074DCF0
    FUN_805E3430(); // bl 0x805E3430
}