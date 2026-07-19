/* Function at 0x806550E8, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806550E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806550F4
    /* lis r31, 0 */ // 0x806550F8
    r31 = r31 + 0; // 0x806550FC
    r3 = *(0 + r31); // lwz @ 0x80655100
    if (==) goto 0x0x80655110;
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(4 + r31); // lwz @ 0x80655110
    if (==) goto 0x0x80655120;
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(8 + r31); // lwz @ 0x80655120
    if (==) goto 0x0x80655140;
    r12 = *(0 + r3); // lwz @ 0x8065512C
    /* li r4, 1 */ // 0x80655130
    r12 = *(8 + r12); // lwz @ 0x80655134
    /* mtctr r12 */ // 0x80655138
    /* bctrl  */ // 0x8065513C
    /* li r0, 0 */ // 0x80655140
    *(0 + r31) = r0; // stw @ 0x80655144
    *(4 + r31) = r0; // stw @ 0x80655148
    *(8 + r31) = r0; // stw @ 0x8065514C
    r31 = *(0xc + r1); // lwz @ 0x80655150
    r0 = *(0x14 + r1); // lwz @ 0x80655154
    return;
}