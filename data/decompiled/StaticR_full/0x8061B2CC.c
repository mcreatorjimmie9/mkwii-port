/* Function at 0x8061B2CC, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8061B2CC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8061B2D8
    r31 = r3;
    r4 = *(0 + r3); // lwz @ 0x8061B2E0
    r4 = *(4 + r4); // lwz @ 0x8061B2E4
    r0 = *(4 + r4); // lwz @ 0x8061B2E8
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x8061B2EC
    if (!=) goto 0x0x8061b30c;
    FUN_8061ECC8(); // bl 0x8061ECC8
    r5 = *(0 + r31); // lwz @ 0x8061B2F8
    r4 = *(0xa0 + r3); // lbz @ 0x8061B2FC
    r3 = *(4 + r5); // lwz @ 0x8061B300
    /* extsb r4, r4 */ // 0x8061B304
    FUN_806234D8(); // bl 0x806234D8
    r0 = *(0x14 + r1); // lwz @ 0x8061B30C
    r31 = *(0xc + r1); // lwz @ 0x8061B310
    return;
}