/* Function at 0x806ABC84, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806ABC84(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806ABC90
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806ABC9C
    /* lis r4, 0 */ // 0x806ABCA0
    r3 = r3 + 0; // 0x806ABCA4
    *(0 + r31) = r3; // stw @ 0x806ABCA8
    /* lis r7, 0 */ // 0x806ABCAC
    r4 = r4 + 0; // 0x806ABCB0
    r6 = *(0 + r7); // lwzu @ 0x806ABCB4
    r3 = r31 + 0x58; // 0x806ABCB8
    *(8 + r1) = r6; // stw @ 0x806ABCBC
    r5 = *(4 + r7); // lwz @ 0x806ABCC0
    r0 = *(8 + r7); // lwz @ 0x806ABCC4
    *(0xc + r1) = r5; // stw @ 0x806ABCC8
    *(0x10 + r1) = r0; // stw @ 0x806ABCCC
    *(0x44 + r31) = r4; // stw @ 0x806ABCD0
    *(0x48 + r31) = r31; // stw @ 0x806ABCD4
    *(0x4c + r31) = r6; // stw @ 0x806ABCD8
    *(0x50 + r31) = r5; // stw @ 0x806ABCDC
    *(0x54 + r31) = r0; // stw @ 0x806ABCE0
    FUN_80668134(); // bl 0x80668134
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x806ABCEC
    r0 = *(0x24 + r1); // lwz @ 0x806ABCF0
    return;
}