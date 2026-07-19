/* Function at 0x80863A24, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80863A24(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80863A2C
    *(0x14 + r1) = r0; // stw @ 0x80863A30
    *(0xc + r1) = r31; // stw @ 0x80863A34
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x80863A3C
    r0 = *(0xb70 + r4); // lwz @ 0x80863A40
    if (==) goto 0x0x80863a94;
    r3 = *(0xa8 + r3); // lwz @ 0x80863A4C
    if (==) goto 0x0x80863a6c;
    r12 = *(0 + r3); // lwz @ 0x80863A58
    /* li r4, 1 */ // 0x80863A5C
    r12 = *(0xc + r12); // lwz @ 0x80863A60
    /* mtctr r12 */ // 0x80863A64
    /* bctrl  */ // 0x80863A68
    r3 = r31;
    FUN_80863AA8(r4, r3); // bl 0x80863AA8
    r3 = *(0xa8 + r31); // lwz @ 0x80863A74
    if (==) goto 0x0x80863a94;
    r12 = *(0 + r3); // lwz @ 0x80863A80
    /* li r4, 0 */ // 0x80863A84
    r12 = *(0xc + r12); // lwz @ 0x80863A88
    /* mtctr r12 */ // 0x80863A8C
    /* bctrl  */ // 0x80863A90
    r0 = *(0x14 + r1); // lwz @ 0x80863A94
    r31 = *(0xc + r1); // lwz @ 0x80863A98
    return;
}