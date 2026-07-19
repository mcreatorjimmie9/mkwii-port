/* Function at 0x806BDA70, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806BDA70(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x806BDA7C
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r3, 0 */ // 0x806BDA88
    /* lis r4, 0 */ // 0x806BDA8C
    r3 = r3 + 0; // 0x806BDA90
    *(0 + r31) = r3; // stw @ 0x806BDA94
    /* lis r7, 0 */ // 0x806BDA98
    r4 = r4 + 0; // 0x806BDA9C
    r6 = *(0 + r7); // lwzu @ 0x806BDAA0
    r3 = r31;
    *(8 + r1) = r6; // stw @ 0x806BDAA8
    r5 = *(4 + r7); // lwz @ 0x806BDAAC
    r0 = *(8 + r7); // lwz @ 0x806BDAB0
    *(0x184 + r31) = r0; // stw @ 0x806BDAB4
    *(0x174 + r31) = r4; // stw @ 0x806BDAB8
    *(0x178 + r31) = r31; // stw @ 0x806BDABC
    *(0x17c + r31) = r6; // stw @ 0x806BDAC0
    *(0x180 + r31) = r5; // stw @ 0x806BDAC4
    *(0x10 + r1) = r0; // stw @ 0x806BDAC8
    r31 = *(0x1c + r1); // lwz @ 0x806BDACC
    r0 = *(0x24 + r1); // lwz @ 0x806BDAD0
    *(0xc + r1) = r5; // stw @ 0x806BDAD4
    return;
}