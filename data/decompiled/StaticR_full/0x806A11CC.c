/* Function at 0x806A11CC, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806A11CC(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r3 = r3 + 0xa8; // 0x806A11D4
    *(0x14 + r1) = r0; // stw @ 0x806A11D8
    *(0xc + r1) = r31; // stw @ 0x806A11DC
    r31 = r5;
    FUN_80665D1C(r3); // bl 0x80665D1C
    r0 = *(0xbb + r3); // lbz @ 0x806A11E8
    r0 = r0 rlwinm 0; // rlwinm
    r0 = r0 | r31; // 0x806A11F0
    *(0xbb + r3) = r0; // stb @ 0x806A11F4
    r31 = *(0xc + r1); // lwz @ 0x806A11F8
    r0 = *(0x14 + r1); // lwz @ 0x806A11FC
    return;
}