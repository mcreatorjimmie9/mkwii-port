/* Function at 0x80672B88, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80672B88(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80672B94
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x80672BA0
    r3 = r31;
    r4 = r4 + 0; // 0x80672BA8
    *(0 + r31) = r4; // stw @ 0x80672BAC
    r31 = *(0xc + r1); // lwz @ 0x80672BB0
    r0 = *(0x14 + r1); // lwz @ 0x80672BB4
    return;
}