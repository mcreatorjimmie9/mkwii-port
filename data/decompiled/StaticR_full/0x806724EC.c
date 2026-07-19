/* Function at 0x806724EC, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806724EC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806724F4
    *(0x14 + r1) = r0; // stw @ 0x806724F8
    /* li r0, -1 */ // 0x806724FC
    /* lfs f0, 0(r4) */ // 0x80672500
    /* lis r4, 0 */ // 0x80672504
    *(0xc + r1) = r31; // stw @ 0x80672508
    /* li r31, 0 */ // 0x8067250C
    r4 = r4 + 0; // 0x80672510
    *(8 + r1) = r30; // stw @ 0x80672514
    r30 = r3;
    *(4 + r3) = r0; // stw @ 0x8067251C
    *(0 + r3) = r4; // stw @ 0x80672520
    *(8 + r3) = r31; // stw @ 0x80672524
    *(0xc + r3) = r31; // stb @ 0x80672528
    *(0x10 + r3) = r31; // stw @ 0x8067252C
    /* stfs f0, 0x14(r3) */ // 0x80672530
    /* stfs f0, 0x18(r3) */ // 0x80672534
    *(0x1c + r3) = r0; // stw @ 0x80672538
    *(0x20 + r3) = r0; // stw @ 0x8067253C
    r3 = r3 + 0x24; // 0x80672540
    FUN_8064DAF0(r3); // bl 0x8064DAF0
    /* lis r4, 0 */ // 0x80672548
    /* li r0, 6 */ // 0x8067254C
    r4 = r4 + 0; // 0x80672550
    *(0x38 + r30) = r31; // stw @ 0x80672554
    r3 = r30;
    *(0x3c + r30) = r31; // stw @ 0x8067255C
    *(0x40 + r30) = r0; // stw @ 0x80672560
    *(0 + r30) = r4; // stw @ 0x80672564
    r31 = *(0xc + r1); // lwz @ 0x80672568
    r30 = *(8 + r1); // lwz @ 0x8067256C
    r0 = *(0x14 + r1); // lwz @ 0x80672570
    return;
}