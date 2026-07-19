/* Function at 0x8079C294, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8079C294(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8079C2A0
    r31 = r3;
    FUN_807A03C8(); // bl 0x807A03C8
    if (!=) goto 0x0x8079c2d8;
    /* lis r4, 0 */ // 0x8079C2B4
    /* lis r3, 0 */ // 0x8079C2B8
    /* lfs f1, 0(r4) */ // 0x8079C2BC
    /* li r0, 3 */ // 0x8079C2C0
    /* lfs f0, 0(r3) */ // 0x8079C2C4
    *(0x10 + r31) = r0; // stw @ 0x8079C2C8
    /* stfs f1, 0x20(r31) */ // 0x8079C2CC
    /* stfs f1, 0x24(r31) */ // 0x8079C2D0
    /* stfs f0, 0x28(r31) */ // 0x8079C2D4
    r0 = *(0x14 + r1); // lwz @ 0x8079C2D8
    r31 = *(0xc + r1); // lwz @ 0x8079C2DC
    return;
}