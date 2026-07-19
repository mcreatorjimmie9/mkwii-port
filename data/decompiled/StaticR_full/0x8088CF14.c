/* Function at 0x8088CF14, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8088CF14(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r6 = r3;
    *(0x24 + r1) = r0; // stw @ 0x8088CF20
    *(0x1c + r1) = r31; // stw @ 0x8088CF28
    r31 = r4;
    r4 = r5;
    r5 = r6 + 0x30; // 0x8088CF34
    FUN_805A4498(r3, r4, r5); // bl 0x805A4498
    /* lfs f0, 8(r1) */ // 0x8088CF3C
    /* stfs f0, 8(r31) */ // 0x8088CF40
    r0 = *(0 + r31); // lwz @ 0x8088CF44
    /* lfs f0, 0xc(r1) */ // 0x8088CF48
    /* stfs f0, 0xc(r31) */ // 0x8088CF4C
    r0 = r0 | 0x40; // 0x8088CF50
    /* lfs f0, 0x10(r1) */ // 0x8088CF54
    /* stfs f0, 0x10(r31) */ // 0x8088CF58
    *(0 + r31) = r0; // stw @ 0x8088CF5C
    r31 = *(0x1c + r1); // lwz @ 0x8088CF60
    r0 = *(0x24 + r1); // lwz @ 0x8088CF64
    return;
}