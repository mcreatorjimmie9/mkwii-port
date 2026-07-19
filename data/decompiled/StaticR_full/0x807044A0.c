/* Function at 0x807044A0, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807044A0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x807044A8
    /* li r5, 2 */ // 0x807044AC
    *(0x14 + r1) = r0; // stw @ 0x807044B0
    r6 = r6 + 0; // 0x807044B4
    *(0xc + r1) = r31; // stw @ 0x807044B8
    r31 = r3;
    r7 = r31;
    *(0x18 + r3) = r4; // stw @ 0x807044C4
    /* lis r3, 0 */ // 0x807044C8
    /* lis r4, 0 */ // 0x807044CC
    r3 = *(0 + r3); // lwz @ 0x807044D0
    r4 = r4 + 0; // 0x807044D4
    FUN_805E3430(r3, r4, r4); // bl 0x805E3430
}