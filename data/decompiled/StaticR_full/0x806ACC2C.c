/* Function at 0x806ACC2C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806ACC2C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0x8d */ // 0x806ACC38
    *(0xc + r1) = r31; // stw @ 0x806ACC3C
    r31 = r3;
    *(0xf30 + r3) = r0; // stw @ 0x806ACC44
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 0 */ // 0x806ACC54
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x806ACC5C
    r31 = *(0xc + r1); // lwz @ 0x806ACC60
    return;
}