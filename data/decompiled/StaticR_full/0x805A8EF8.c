/* Function at 0x805A8EF8, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805A8EF8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805A8F04
    r31 = r3;
    r0 = *(0x20 + r3); // lwz @ 0x805A8F0C
    if (!=) goto 0x0x805a8f20;
    r3 = *(4 + r3); // lwz @ 0x805A8F18
    FUN_805E3430(); // bl 0x805E3430
    r4 = *(8 + r31); // lwz @ 0x805A8F20
    if (==) goto 0x0x805a8f50;
    r3 = *(0x10 + r31); // lwz @ 0x805A8F2C
    r12 = *(0 + r3); // lwz @ 0x805A8F30
    r12 = *(0x18 + r12); // lwz @ 0x805A8F34
    /* mtctr r12 */ // 0x805A8F38
    /* bctrl  */ // 0x805A8F3C
    /* li r0, 0 */ // 0x805A8F40
    *(8 + r31) = r0; // stw @ 0x805A8F44
    *(0xc + r31) = r0; // stw @ 0x805A8F48
    *(0x10 + r31) = r0; // stw @ 0x805A8F4C
    r4 = *(0x14 + r31); // lwz @ 0x805A8F50
    if (==) goto 0x0x805a8f80;
    r3 = *(0x1c + r31); // lwz @ 0x805A8F5C
    r12 = *(0 + r3); // lwz @ 0x805A8F60
    r12 = *(0x18 + r12); // lwz @ 0x805A8F64
    /* mtctr r12 */ // 0x805A8F68
    /* bctrl  */ // 0x805A8F6C
    /* li r0, 0 */ // 0x805A8F70
    *(0x14 + r31) = r0; // stw @ 0x805A8F74
    *(0x18 + r31) = r0; // stw @ 0x805A8F78
    *(0x1c + r31) = r0; // stw @ 0x805A8F7C
    /* li r0, 0 */ // 0x805A8F80
    *(0x20 + r31) = r0; // stw @ 0x805A8F84
    r0 = *(0x14 + r1); // lwz @ 0x805A8F88
    r31 = *(0xc + r1); // lwz @ 0x805A8F8C
    return;
}