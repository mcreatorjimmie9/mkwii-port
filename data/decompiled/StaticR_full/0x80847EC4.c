/* Function at 0x80847EC4, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80847EC4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x80847ECC
    *(0x14 + r1) = r0; // stw @ 0x80847ED0
    *(0xc + r1) = r31; // stw @ 0x80847ED4
    r31 = *(0 + r3); // lwz @ 0x80847ED8
    if (==) goto 0x0x80847ef8;
    r3 = *(0 + r31); // lwz @ 0x80847EE4
    /* li r4, 1 */ // 0x80847EE8
    FUN_808433FC(r4); // bl 0x808433FC
    r3 = r31;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x80847EF8
    /* li r0, 0 */ // 0x80847EFC
    *(0 + r3) = r0; // stw @ 0x80847F00
    r31 = *(0xc + r1); // lwz @ 0x80847F04
    r0 = *(0x14 + r1); // lwz @ 0x80847F08
    return;
}