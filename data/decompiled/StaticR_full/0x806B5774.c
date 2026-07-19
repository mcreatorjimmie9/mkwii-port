/* Function at 0x806B5774, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806B5774(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806B5780
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806B578C
    r3 = r31;
    r4 = r4 + 0; // 0x806B5794
    *(0 + r31) = r4; // stw @ 0x806B5798
    r31 = *(0xc + r1); // lwz @ 0x806B579C
    r0 = *(0x14 + r1); // lwz @ 0x806B57A0
    return;
}