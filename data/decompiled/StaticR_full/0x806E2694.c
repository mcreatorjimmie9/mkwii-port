/* Function at 0x806E2694, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806E2694(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806E26A0
    r31 = r3;
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 0 */ // 0x806E26B4
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x806E26BC
    r31 = *(0xc + r1); // lwz @ 0x806E26C0
    return;
}