/* Function at 0x80654DE0, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80654DE0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80654DE8
    r3 = r3 + 0xa8; // 0x80654DEC
    *(0x14 + r1) = r0; // stw @ 0x80654DF0
    r5 = r5 + 0; // 0x80654DF4
    *(0xc + r1) = r31; // stw @ 0x80654DF8
    r31 = r4;
    r4 = r5 + 0xc1; // 0x80654E00
    FUN_80665D1C(r5, r4); // bl 0x80665D1C
    r0 = *(0xbb + r3); // lbz @ 0x80654E08
    r0 = r0 rlwinm 0; // rlwinm
    r0 = r0 | r31; // 0x80654E10
    *(0xbb + r3) = r0; // stb @ 0x80654E14
    r31 = *(0xc + r1); // lwz @ 0x80654E18
    r0 = *(0x14 + r1); // lwz @ 0x80654E1C
    return;
}