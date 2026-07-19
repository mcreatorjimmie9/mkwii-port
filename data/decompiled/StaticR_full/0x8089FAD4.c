/* Function at 0x8089FAD4, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8089FAD4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8089FAEC
    r29 = r3;
    r0 = *(0xa8 + r3); // lbz @ 0x8089FAF4
    if (==) goto 0x0x8089fb48;
    r12 = *(0 + r3); // lwz @ 0x8089FB00
    r12 = *(0xb4 + r12); // lwz @ 0x8089FB04
    /* mtctr r12 */ // 0x8089FB08
    /* bctrl  */ // 0x8089FB0C
    r31 = r3;
    r3 = r30;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8089FB1C
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8089FB24
    r4 = r31 + 4; // 0x8089FB28
    r3 = *(0x68 + r3); // lwz @ 0x8089FB2C
    /* lwzx r3, r3, r0 */ // 0x8089FB30
    FUN_80735EF0(r4); // bl 0x80735EF0
    r3 = r30;
    FUN_8061E010(r4, r3); // bl 0x8061E010
    r4 = r29;
    FUN_80797204(r3, r4); // bl 0x80797204
    r0 = *(0x24 + r1); // lwz @ 0x8089FB48
    r31 = *(0x1c + r1); // lwz @ 0x8089FB4C
    r30 = *(0x18 + r1); // lwz @ 0x8089FB50
    r29 = *(0x14 + r1); // lwz @ 0x8089FB54
    return;
}