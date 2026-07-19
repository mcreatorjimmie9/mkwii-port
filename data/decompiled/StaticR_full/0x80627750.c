/* Function at 0x80627750, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_80627750(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r6;
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x8062776C
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80627774
    r28 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r3, 0 */ // 0x80627780
    /* lis r4, 0 */ // 0x80627784
    /* lfs f0, 0(r3) */ // 0x80627788
    r4 = r4 + 0; // 0x8062778C
    /* li r0, 0 */ // 0x80627790
    *(0xc + r28) = r4; // stw @ 0x80627794
    r3 = r28;
    *(0x14 + r28) = r0; // stw @ 0x8062779C
    *(0x18 + r28) = r30; // stw @ 0x806277A0
    *(0x1c + r28) = r31; // stw @ 0x806277A4
    *(0x20 + r28) = r29; // stw @ 0x806277A8
    /* stfs f0, 0x38(r28) */ // 0x806277AC
    r31 = *(0x1c + r1); // lwz @ 0x806277B0
    r30 = *(0x18 + r1); // lwz @ 0x806277B4
    r29 = *(0x14 + r1); // lwz @ 0x806277B8
    r28 = *(0x10 + r1); // lwz @ 0x806277BC
    r0 = *(0x24 + r1); // lwz @ 0x806277C0
    return;
}