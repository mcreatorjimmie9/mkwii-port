/* Function at 0x80646968, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80646968(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80646974
    r31 = r3;
    r0 = *(0x3d + r3); // lbz @ 0x8064697C
    if (==) goto 0x0x806469cc;
    FUN_8061DC48(); // bl 0x8061DC48
    /* lis r4, 0 */ // 0x8064698C
    /* li r0, 1 */ // 0x80646990
    /* lfs f0, 0(r4) */ // 0x80646994
    *(0x171 + r3) = r0; // stb @ 0x80646998
    r3 = r31;
    /* stfs f0, 8(r1) */ // 0x806469A0
    /* stfs f0, 0xc(r1) */ // 0x806469A4
    /* stfs f0, 0x10(r1) */ // 0x806469A8
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lfs f0, 8(r1) */ // 0x806469B0
    /* stfs f0, 0x74(r3) */ // 0x806469B4
    /* lfs f0, 0xc(r1) */ // 0x806469B8
    /* stfs f0, 0x78(r3) */ // 0x806469BC
    /* lfs f0, 0x10(r1) */ // 0x806469C0
    /* stfs f0, 0x7c(r3) */ // 0x806469C4
    /* b 0x806469d8 */ // 0x806469C8
    FUN_8061DC48(); // bl 0x8061DC48
    /* li r0, 0 */ // 0x806469D0
    *(0x171 + r3) = r0; // stb @ 0x806469D4
    r0 = *(0x24 + r1); // lwz @ 0x806469D8
    r31 = *(0x1c + r1); // lwz @ 0x806469DC
    return;
}