/* Function at 0x8067113C, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8067113C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80671144
    *(0x14 + r1) = r0; // stw @ 0x80671148
    /* li r0, -1 */ // 0x8067114C
    /* lfs f0, 0(r4) */ // 0x80671150
    /* lis r4, 0 */ // 0x80671154
    *(0xc + r1) = r31; // stw @ 0x80671158
    /* li r31, 0 */ // 0x8067115C
    r4 = r4 + 0; // 0x80671160
    *(8 + r1) = r30; // stw @ 0x80671164
    r30 = r3;
    *(4 + r3) = r0; // stw @ 0x8067116C
    *(0 + r3) = r4; // stw @ 0x80671170
    *(8 + r3) = r31; // stw @ 0x80671174
    *(0xc + r3) = r31; // stb @ 0x80671178
    *(0x10 + r3) = r31; // stw @ 0x8067117C
    /* stfs f0, 0x14(r3) */ // 0x80671180
    /* stfs f0, 0x18(r3) */ // 0x80671184
    *(0x1c + r3) = r0; // stw @ 0x80671188
    *(0x20 + r3) = r0; // stw @ 0x8067118C
    r3 = r3 + 0x24; // 0x80671190
    FUN_8064DAF0(r3); // bl 0x8064DAF0
    /* li r0, 6 */ // 0x80671198
    *(0x38 + r30) = r31; // stw @ 0x8067119C
    r3 = r30;
    *(0x3c + r30) = r31; // stw @ 0x806711A4
    *(0x40 + r30) = r0; // stw @ 0x806711A8
    r31 = *(0xc + r1); // lwz @ 0x806711AC
    r30 = *(8 + r1); // lwz @ 0x806711B0
    r0 = *(0x14 + r1); // lwz @ 0x806711B4
    return;
}