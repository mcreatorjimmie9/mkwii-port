/* Function at 0x806986C8, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806986C8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806986D4
    r31 = r3;
    r0 = *(0x20 + r3); // lbz @ 0x806986DC
    if (==) goto 0x0x806986f0;
    /* li r0, 0 */ // 0x806986E8
    *(0x20 + r3) = r0; // stb @ 0x806986EC
    r3 = r3 + 0x34; // 0x806986F0
    FUN_8067EF84(r3); // bl 0x8067EF84
    r3 = *(0 + r31); // lwz @ 0x806986F8
    FUN_8068558C(r3); // bl 0x8068558C
    r0 = *(0x14 + r1); // lwz @ 0x80698700
    r31 = *(0xc + r1); // lwz @ 0x80698704
    return;
}