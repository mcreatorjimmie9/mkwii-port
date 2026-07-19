/* Function at 0x805FC6C0, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805FC6C0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x805FC6C8
    *(0x14 + r1) = r0; // stw @ 0x805FC6CC
    *(0xc + r1) = r31; // stw @ 0x805FC6D0
    r31 = r3;
    FUN_806200C4(r5); // bl 0x806200C4
    /* lis r4, 0 */ // 0x805FC6DC
    r3 = r31;
    r4 = r4 + 0; // 0x805FC6E4
    *(0xc + r31) = r4; // stw @ 0x805FC6E8
    r31 = *(0xc + r1); // lwz @ 0x805FC6EC
    r0 = *(0x14 + r1); // lwz @ 0x805FC6F0
    return;
}