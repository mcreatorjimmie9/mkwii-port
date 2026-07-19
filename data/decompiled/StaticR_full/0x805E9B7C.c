/* Function at 0x805E9B7C, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */

int FUN_805E9B7C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x805E9B8C
    /* li r30, 0 */ // 0x805E9B90
    r31 = *(0xc + r3); // lwz @ 0x805E9B94
    if (==) goto 0x0x805e9bd0;
    /* lis r4, 0 */ // 0x805E9BA0
    r3 = r31;
    r4 = r4 + 0; // 0x805E9BA8
    *(8 + r1) = r4; // stw @ 0x805E9BAC
    r12 = *(0 + r31); // lwz @ 0x805E9BB4
    r12 = *(8 + r12); // lwz @ 0x805E9BB8
    /* mtctr r12 */ // 0x805E9BBC
    /* bctrl  */ // 0x805E9BC0
    if (==) goto 0x0x805e9bd0;
    /* li r30, 1 */ // 0x805E9BCC
    if (==) goto 0x0x805e9be0;
    r3 = r31;
    /* b 0x805e9be4 */ // 0x805E9BDC
    /* li r3, 0 */ // 0x805E9BE0
    r12 = *(0 + r3); // lwz @ 0x805E9BE4
    r12 = *(0x44 + r12); // lwz @ 0x805E9BE8
    /* mtctr r12 */ // 0x805E9BEC
    /* bctrl  */ // 0x805E9BF0
    r0 = *(0x24 + r1); // lwz @ 0x805E9BF4
    r31 = *(0x1c + r1); // lwz @ 0x805E9BF8
    r30 = *(0x18 + r1); // lwz @ 0x805E9BFC
    return;
}