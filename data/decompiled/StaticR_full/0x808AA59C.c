/* Function at 0x808AA59C, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808AA59C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x808AA5AC
    r30 = r3;
    r4 = *(0xc8 + r3); // lwz @ 0x808AA5B4
    r31 = *(0xc4 + r3); // lwz @ 0x808AA5B8
    r3 = *(0x20 + r4); // lwz @ 0x808AA5BC
    r0 = *(0x46 + r3); // lha @ 0x808AA5C0
    r3 = *(8 + r3); // lwz @ 0x808AA5C4
    /* slwi r0, r0, 4 */ // 0x808AA5C8
    r3 = r3 + r0; // 0x808AA5CC
    r0 = *(0xc + r3); // lhz @ 0x808AA5D0
    if (==) goto 0x0x808aa5e0;
    r31 = r4;
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r4 = r31 + 0x58; // 0x808AA5EC
    r5 = r30 + 0xb8; // 0x808AA5F0
    FUN_805E3430(r3, r3, r4, r5); // bl 0x805E3430
}