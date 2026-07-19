/* Function at 0x8089FB64, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_8089FB64(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x8089FB7C
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8089FB84
    r28 = r3;
    r12 = *(0 + r3); // lwz @ 0x8089FB8C
    r12 = *(0xb4 + r12); // lwz @ 0x8089FB90
    /* mtctr r12 */ // 0x8089FB94
    /* bctrl  */ // 0x8089FB98
    r31 = r3;
    r3 = r29;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8089FBA8
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8089FBB0
    r5 = r30;
    r4 = r31 + 4; // 0x8089FBB8
    r3 = *(0x68 + r3); // lwz @ 0x8089FBBC
    /* lwzx r3, r3, r0 */ // 0x8089FBC0
    FUN_80735F4C(r5, r4); // bl 0x80735F4C
    r3 = r29;
    FUN_8061E010(r4, r3); // bl 0x8061E010
    r4 = r28;
    FUN_807973A0(r3, r4); // bl 0x807973A0
    r0 = *(0x24 + r1); // lwz @ 0x8089FBD8
    r31 = *(0x1c + r1); // lwz @ 0x8089FBDC
    r30 = *(0x18 + r1); // lwz @ 0x8089FBE0
    r29 = *(0x14 + r1); // lwz @ 0x8089FBE4
    r28 = *(0x10 + r1); // lwz @ 0x8089FBE8
    return;
}