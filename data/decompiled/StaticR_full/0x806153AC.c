/* Function at 0x806153AC, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806153AC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806153B8
    r31 = r3;
    FUN_80605800(); // bl 0x80605800
    /* lis r3, 0 */ // 0x806153C4
    /* lis r4, 0 */ // 0x806153C8
    /* lfs f0, 0(r3) */ // 0x806153CC
    r4 = r4 + 0; // 0x806153D0
    *(0xc + r31) = r4; // stw @ 0x806153D4
    r3 = r31;
    /* stfs f0, 0x294(r31) */ // 0x806153DC
    r31 = *(0xc + r1); // lwz @ 0x806153E0
    r0 = *(0x14 + r1); // lwz @ 0x806153E4
    return;
}