/* Function at 0x80654BE0, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80654BE0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80654BEC
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x80654BF8
    r3 = r31;
    r4 = r4 + 0; // 0x80654C00
    *(0 + r31) = r4; // stw @ 0x80654C04
    r31 = *(0xc + r1); // lwz @ 0x80654C08
    r0 = *(0x14 + r1); // lwz @ 0x80654C0C
    return;
}