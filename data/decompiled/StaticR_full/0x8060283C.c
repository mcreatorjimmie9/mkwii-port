/* Function at 0x8060283C, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8060283C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80602848
    r31 = r3;
    r3 = r3 + 4; // 0x80602850
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    r4 = *(0x250 + r3); // lwz @ 0x80602858
    /* li r0, 0 */ // 0x8060285C
    r4 = r4 | 4; // 0x80602860
    *(0x250 + r3) = r4; // stw @ 0x80602864
    /* li r3, -1 */ // 0x80602868
    r4 = *(4 + r31); // lwz @ 0x8060286C
    r4 = *(4 + r4); // lwz @ 0x80602870
    *(0x78 + r4) = r0; // stw @ 0x80602874
    r31 = *(0xc + r1); // lwz @ 0x80602878
    r0 = *(0x14 + r1); // lwz @ 0x8060287C
    return;
}