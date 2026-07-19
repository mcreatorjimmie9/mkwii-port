/* Function at 0x806E02A4, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806E02A4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806E02B0
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806E02BC
    r3 = r31 + 0x44; // 0x806E02C0
    r4 = r4 + 0; // 0x806E02C4
    *(0 + r31) = r4; // stw @ 0x806E02C8
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r3 = r31 + 0x54; // 0x806E02D0
    FUN_806A0418(r3, r4, r3); // bl 0x806A0418
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806E02DC
    r0 = *(0x14 + r1); // lwz @ 0x806E02E0
    return;
}