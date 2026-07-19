/* Function at 0x805E8BEC, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */

int FUN_805E8BEC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x805E8BFC
    /* li r30, 0 */ // 0x805E8C00
    r31 = *(0xc + r3); // lwz @ 0x805E8C04
    if (==) goto 0x0x805e8c40;
    /* lis r4, 0 */ // 0x805E8C10
    r3 = r31;
    r4 = r4 + 0; // 0x805E8C18
    *(8 + r1) = r4; // stw @ 0x805E8C1C
    r12 = *(0 + r31); // lwz @ 0x805E8C24
    r12 = *(8 + r12); // lwz @ 0x805E8C28
    /* mtctr r12 */ // 0x805E8C2C
    /* bctrl  */ // 0x805E8C30
    if (==) goto 0x0x805e8c40;
    /* li r30, 1 */ // 0x805E8C3C
    if (==) goto 0x0x805e8c50;
    r3 = r31;
    /* b 0x805e8c54 */ // 0x805E8C4C
    /* li r3, 0 */ // 0x805E8C50
    r12 = *(0 + r3); // lwz @ 0x805E8C54
    r12 = *(0x44 + r12); // lwz @ 0x805E8C58
    /* mtctr r12 */ // 0x805E8C5C
    /* bctrl  */ // 0x805E8C60
    r0 = *(0x24 + r1); // lwz @ 0x805E8C64
    r31 = *(0x1c + r1); // lwz @ 0x805E8C68
    r30 = *(0x18 + r1); // lwz @ 0x805E8C6C
    return;
}