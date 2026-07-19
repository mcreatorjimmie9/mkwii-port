/* Function at 0x8086E474, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8086E474(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8086E480
    r31 = r3;
    *(8 + r3) = r4; // stw @ 0x8086E488
    r4 = *(4 + r3); // lwz @ 0x8086E48C
    *(0xc + r3) = r5; // stb @ 0x8086E490
    r3 = *(0 + r3); // lwz @ 0x8086E494
    FUN_805ECA00(); // bl 0x805ECA00
    r4 = *(0 + r31); // lwz @ 0x8086E49C
    /* lis r3, 0 */ // 0x8086E4A0
    /* lis r5, 0 */ // 0x8086E4A4
    /* lfs f1, 0(r3) */ // 0x8086E4A8
    r3 = *(0x28 + r4); // lwz @ 0x8086E4AC
    /* li r4, 4 */ // 0x8086E4B0
    /* lfs f2, 0(r5) */ // 0x8086E4B4
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r0 = *(0x14 + r1); // lwz @ 0x8086E4BC
    r31 = *(0xc + r1); // lwz @ 0x8086E4C0
    return;
}