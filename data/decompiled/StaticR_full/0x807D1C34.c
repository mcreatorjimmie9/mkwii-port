/* Function at 0x807D1C34, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_807D1C34(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    *(0x24 + r1) = r0; // stw @ 0x807D1C40
    /* stmw r27, 0xc(r1) */ // 0x807D1C44
    r27 = r3;
    r28 = r4;
    if (==) goto 0x0x807d1cc8;
    r0 = *(0xbc + r3); // lwz @ 0x807D1C54
    /* lis r4, 0 */ // 0x807D1C58
    r4 = r4 + 0; // 0x807D1C5C
    *(0x34 + r3) = r4; // stw @ 0x807D1C60
    if (==) goto 0x0x807d1c90;
    if (==) goto 0x0x807d1c88;
    r3 = r0;
    /* li r4, 1 */ // 0x807D1C74
    r12 = *(0 + r3); // lwz @ 0x807D1C78
    r12 = *(8 + r12); // lwz @ 0x807D1C7C
    /* mtctr r12 */ // 0x807D1C80
    /* bctrl  */ // 0x807D1C84
    /* li r0, 0 */ // 0x807D1C88
    *(0xbc + r27) = r0; // stw @ 0x807D1C8C
    r30 = r27;
    /* li r29, 0 */ // 0x807D1C94
    /* li r31, 0 */ // 0x807D1C98
    r3 = *(0xc0 + r30); // lwz @ 0x807D1C9C
    FUN_805E3430(); // bl 0x805E3430
    r29 = r29 + 1; // 0x807D1CA4
    *(0xc0 + r30) = r31; // stw @ 0x807D1CA8
    r30 = r30 + 4; // 0x807D1CB0
    if (<) goto 0x0x807d1c9c;
}