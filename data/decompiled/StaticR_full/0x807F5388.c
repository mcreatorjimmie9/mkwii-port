/* Function at 0x807F5388, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807F5388(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807F5398
    r4 = r31 + 0; // 0x807F539C
    *(0x18 + r1) = r30; // stw @ 0x807F53A0
    /* lis r30, 0 */ // 0x807F53A4
    r30 = r30 + 0; // 0x807F53A8
    *(0x14 + r1) = r29; // stw @ 0x807F53AC
    /* lis r29, 0 */ // 0x807F53B0
    r29 = r29 + 0; // 0x807F53B4
    /* lfs f2, 0(r30) */ // 0x807F53B8
    r3 = r29 + 0xc; // 0x807F53BC
    /* lfs f1, 0x50(r30) */ // 0x807F53C0
    /* lfs f0, 0x54(r30) */ // 0x807F53C4
    r5 = r29 + 0; // 0x807F53C8
    /* stfs f2, 0xc(r29) */ // 0x807F53CC
    /* stfs f1, 4(r3) */ // 0x807F53D0
    /* stfs f0, 8(r3) */ // 0x807F53D4
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0(r30) */ // 0x807F53DC
    r3 = r29 + 0x24; // 0x807F53E0
    /* lfs f1, 0x58(r30) */ // 0x807F53E4
    r4 = r31 + 0; // 0x807F53E8
    /* lfs f0, 0x5c(r30) */ // 0x807F53EC
    r5 = r29 + 0x18; // 0x807F53F0
    /* stfs f2, 0x24(r29) */ // 0x807F53F4
    /* stfs f1, 4(r3) */ // 0x807F53F8
    /* stfs f0, 8(r3) */ // 0x807F53FC
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    r0 = *(0x24 + r1); // lwz @ 0x807F5404
    r31 = *(0x1c + r1); // lwz @ 0x807F5408
    r30 = *(0x18 + r1); // lwz @ 0x807F540C
    r29 = *(0x14 + r1); // lwz @ 0x807F5410
    return;
}