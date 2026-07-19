/* Function at 0x806AA678, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806AA678(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806AA684
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806AA690
    r3 = r31 + 0x48; // 0x806AA694
    r4 = r4 + 0; // 0x806AA698
    *(0 + r31) = r4; // stw @ 0x806AA69C
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    /* lis r7, 0 */ // 0x806AA6A4
    r6 = *(0 + r7); // lwzu @ 0x806AA6A8
    /* lis r4, 0 */ // 0x806AA6AC
    r3 = r31;
    r5 = *(4 + r7); // lwz @ 0x806AA6B4
    r4 = r4 + 0; // 0x806AA6B8
    r0 = *(8 + r7); // lwz @ 0x806AA6BC
    *(0x68 + r31) = r0; // stw @ 0x806AA6C0
    *(0x58 + r31) = r4; // stw @ 0x806AA6C4
    *(0x5c + r31) = r31; // stw @ 0x806AA6C8
    *(0x60 + r31) = r6; // stw @ 0x806AA6CC
    *(0x64 + r31) = r5; // stw @ 0x806AA6D0
    *(0x10 + r1) = r0; // stw @ 0x806AA6D4
    r31 = *(0x1c + r1); // lwz @ 0x806AA6D8
    r0 = *(0x24 + r1); // lwz @ 0x806AA6DC
    *(8 + r1) = r6; // stw @ 0x806AA6E0
    *(0xc + r1) = r5; // stw @ 0x806AA6E4
    return;
}