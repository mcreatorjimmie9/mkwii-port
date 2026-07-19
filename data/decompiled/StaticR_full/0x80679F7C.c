/* Function at 0x80679F7C, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80679F7C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80679F8C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80679F94
    r30 = r3;
    if (==) goto 0x0x8067a000;
    /* lis r4, 0 */ // 0x80679FA0
    r4 = r4 + 0; // 0x80679FA4
    *(0 + r3) = r4; // stw @ 0x80679FA8
    r3 = *(0xc44 + r3); // lwz @ 0x80679FAC
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* lis r4, 0 */ // 0x80679FB4
    r3 = r30 + 0x380; // 0x80679FB8
    r4 = r4 + 0; // 0x80679FBC
    /* li r5, 0x174 */ // 0x80679FC0
    /* li r6, 6 */ // 0x80679FC4
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30 + 0x20c; // 0x80679FCC
}