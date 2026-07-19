/* Function at 0x805E9CFC, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805E9CFC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r30, 0 */ // 0x805E9D10
    *(0x14 + r1) = r29; // stw @ 0x805E9D14
    r29 = r4;
    r31 = *(0xc + r3); // lwz @ 0x805E9D1C
    if (==) goto 0x0x805e9d58;
    /* lis r4, 0 */ // 0x805E9D28
    r3 = r31;
    r4 = r4 + 0; // 0x805E9D30
    *(8 + r1) = r4; // stw @ 0x805E9D34
    r12 = *(0 + r31); // lwz @ 0x805E9D3C
    r12 = *(8 + r12); // lwz @ 0x805E9D40
    /* mtctr r12 */ // 0x805E9D44
    /* bctrl  */ // 0x805E9D48
    if (==) goto 0x0x805e9d58;
    /* li r30, 1 */ // 0x805E9D54
    if (==) goto 0x0x805e9d68;
    r3 = r31;
    /* b 0x805e9d6c */ // 0x805E9D64
    /* li r3, 0 */ // 0x805E9D68
    r12 = *(0 + r3); // lwz @ 0x805E9D6C
    r4 = r29;
    r12 = *(0x4c + r12); // lwz @ 0x805E9D74
    /* mtctr r12 */ // 0x805E9D78
    /* bctrl  */ // 0x805E9D7C
    r0 = *(0x24 + r1); // lwz @ 0x805E9D80
    r31 = *(0x1c + r1); // lwz @ 0x805E9D84
    r30 = *(0x18 + r1); // lwz @ 0x805E9D88
    r29 = *(0x14 + r1); // lwz @ 0x805E9D8C
    return;
}