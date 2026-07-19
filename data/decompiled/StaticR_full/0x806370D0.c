/* Function at 0x806370D0, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806370D0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806370E0
    r4 = r31 + 0; // 0x806370E4
    *(0x18 + r1) = r30; // stw @ 0x806370E8
    /* lis r30, 0 */ // 0x806370EC
    r30 = r30 + 0; // 0x806370F0
    *(0x14 + r1) = r29; // stw @ 0x806370F4
    /* lis r29, 0 */ // 0x806370F8
    r29 = r29 + 0; // 0x806370FC
    /* lfs f2, 0x60(r30) */ // 0x80637100
    r3 = r29 + 0xc; // 0x80637104
    /* lfs f1, 0x64(r30) */ // 0x80637108
    /* lfs f0, 0x68(r30) */ // 0x8063710C
    r5 = r29 + 0; // 0x80637110
    /* stfs f2, 0xc(r29) */ // 0x80637114
    /* stfs f1, 4(r3) */ // 0x80637118
    /* stfs f0, 8(r3) */ // 0x8063711C
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x64(r30) */ // 0x80637124
    r3 = r29 + 0x24; // 0x80637128
    /* lfs f1, 4(r30) */ // 0x8063712C
    r4 = r31 + 0; // 0x80637130
    /* lfs f0, 0(r30) */ // 0x80637134
    r5 = r29 + 0x18; // 0x80637138
    /* stfs f2, 0x24(r29) */ // 0x8063713C
    /* stfs f1, 4(r3) */ // 0x80637140
    /* stfs f0, 8(r3) */ // 0x80637144
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    r0 = *(0x24 + r1); // lwz @ 0x8063714C
    r31 = *(0x1c + r1); // lwz @ 0x80637150
    r30 = *(0x18 + r1); // lwz @ 0x80637154
    r29 = *(0x14 + r1); // lwz @ 0x80637158
    return;
}