/* Function at 0x806A55A8, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806A55A8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806A55B4
    r31 = r3;
    r3 = r3 + 0xa8; // 0x806A55BC
    FUN_806669DC(r3); // bl 0x806669DC
    *(0x298 + r31) = r3; // stw @ 0x806A55C4
    r31 = *(0xc + r1); // lwz @ 0x806A55C8
    r0 = *(0x14 + r1); // lwz @ 0x806A55CC
    return;
}