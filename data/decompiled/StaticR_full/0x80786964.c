/* Function at 0x80786964, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80786964(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80786978
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80786980
    r29 = r3;
    if (==) goto 0x0x807869ec;
    /* addic. r31, r3, 0x14 */ // 0x8078698C
    if (==) goto 0x0x807869dc;
    /* lis r3, 0 */ // 0x80786994
    /* lis r4, 0 */ // 0x80786998
    r3 = r3 + 0; // 0x8078699C
    *(0 + r31) = r3; // stw @ 0x807869A0
    r3 = *(0 + r4); // lwz @ 0x807869A4
    if (==) goto 0x0x807869d0;
    /* li r0, 0 */ // 0x807869B0
    *(0 + r4) = r0; // stw @ 0x807869B4
    if (==) goto 0x0x807869d0;
    r12 = *(0 + r3); // lwz @ 0x807869BC
    /* li r4, 1 */ // 0x807869C0
    r12 = *(8 + r12); // lwz @ 0x807869C4
    /* mtctr r12 */ // 0x807869C8
    /* bctrl  */ // 0x807869CC
    r3 = r31;
    /* li r4, 0 */ // 0x807869D4
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807869ec;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x807869EC
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x807869F4
    r29 = *(0x14 + r1); // lwz @ 0x807869F8
    r0 = *(0x24 + r1); // lwz @ 0x807869FC
    return;
}