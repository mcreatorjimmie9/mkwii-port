/* Function at 0x80867B78, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80867B78(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80867B88
    r4 = r31 + 0; // 0x80867B8C
    *(0x18 + r1) = r30; // stw @ 0x80867B90
    /* lis r30, 0 */ // 0x80867B94
    r30 = r30 + 0; // 0x80867B98
    *(0x14 + r1) = r29; // stw @ 0x80867B9C
    /* lis r29, 0 */ // 0x80867BA0
    r29 = r29 + 0; // 0x80867BA4
    /* lfs f2, 0(r30) */ // 0x80867BA8
    r3 = r29 + 0x10; // 0x80867BAC
    /* lfs f1, 0x110(r30) */ // 0x80867BB0
    /* lfs f0, 0x114(r30) */ // 0x80867BB4
    r5 = r29 + 4; // 0x80867BB8
    /* stfs f2, 0x10(r29) */ // 0x80867BBC
    /* stfs f1, 4(r3) */ // 0x80867BC0
    /* stfs f0, 8(r3) */ // 0x80867BC4
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f0, 0(r30) */ // 0x80867BCC
    r3 = r29 + 0x28; // 0x80867BD0
    /* stfs f0, 0x28(r29) */ // 0x80867BD4
    r4 = r31 + 0; // 0x80867BD8
    r5 = r29 + 0x1c; // 0x80867BDC
    /* stfs f0, 4(r3) */ // 0x80867BE0
    /* stfs f0, 8(r3) */ // 0x80867BE4
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    r0 = *(0x24 + r1); // lwz @ 0x80867BEC
    r31 = *(0x1c + r1); // lwz @ 0x80867BF0
    r30 = *(0x18 + r1); // lwz @ 0x80867BF4
    r29 = *(0x14 + r1); // lwz @ 0x80867BF8
    return;
}