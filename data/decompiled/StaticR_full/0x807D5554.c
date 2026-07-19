/* Function at 0x807D5554, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807D5554(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807D5564
    r4 = r31 + 0; // 0x807D5568
    *(0x18 + r1) = r30; // stw @ 0x807D556C
    /* lis r30, 0 */ // 0x807D5570
    r30 = r30 + 0; // 0x807D5574
    *(0x14 + r1) = r29; // stw @ 0x807D5578
    /* lis r29, 0 */ // 0x807D557C
    r29 = r29 + 0; // 0x807D5580
    /* lfs f1, 8(r30) */ // 0x807D5584
    r3 = r29 + 0xc; // 0x807D5588
    /* lfs f0, 0(r30) */ // 0x807D558C
    /* stfs f1, 0xc(r29) */ // 0x807D5590
    r5 = r29 + 0; // 0x807D5594
    /* stfs f1, 4(r3) */ // 0x807D5598
    /* stfs f0, 8(r3) */ // 0x807D559C
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f1, 0x28(r30) */ // 0x807D55A4
    r3 = r29 + 0x24; // 0x807D55A8
    /* lfs f0, 0(r30) */ // 0x807D55AC
    r4 = r31 + 0; // 0x807D55B0
    /* stfs f1, 0x24(r29) */ // 0x807D55B4
    r5 = r29 + 0x18; // 0x807D55B8
    /* stfs f1, 4(r3) */ // 0x807D55BC
    /* stfs f0, 8(r3) */ // 0x807D55C0
    FUN_8091EFA4(r4, r5); // bl 0x8091EFA4
    r0 = *(0x24 + r1); // lwz @ 0x807D55C8
    r31 = *(0x1c + r1); // lwz @ 0x807D55CC
    r30 = *(0x18 + r1); // lwz @ 0x807D55D0
    r29 = *(0x14 + r1); // lwz @ 0x807D55D4
    return;
}