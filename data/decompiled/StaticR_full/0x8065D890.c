/* Function at 0x8065D890, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8065D890(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0x98 */ // 0x8065D89C
    *(0xc + r1) = r31; // stw @ 0x8065D8A0
    r31 = r3;
    *(0x11a8 + r3) = r0; // stw @ 0x8065D8A8
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 0 */ // 0x8065D8B8
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x8065D8C0
    r31 = *(0xc + r1); // lwz @ 0x8065D8C4
    return;
}