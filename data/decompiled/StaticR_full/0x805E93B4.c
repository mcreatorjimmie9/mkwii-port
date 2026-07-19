/* Function at 0x805E93B4, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */

int FUN_805E93B4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x805E93C4
    /* li r30, 0 */ // 0x805E93C8
    r31 = *(0xc + r3); // lwz @ 0x805E93CC
    if (==) goto 0x0x805e9408;
    /* lis r4, 0 */ // 0x805E93D8
    r3 = r31;
    r4 = r4 + 0; // 0x805E93E0
    *(8 + r1) = r4; // stw @ 0x805E93E4
    r12 = *(0 + r31); // lwz @ 0x805E93EC
    r12 = *(8 + r12); // lwz @ 0x805E93F0
    /* mtctr r12 */ // 0x805E93F4
    /* bctrl  */ // 0x805E93F8
    if (==) goto 0x0x805e9408;
    /* li r30, 1 */ // 0x805E9404
    if (==) goto 0x0x805e9418;
    r3 = r31;
    /* b 0x805e941c */ // 0x805E9414
    /* li r3, 0 */ // 0x805E9418
    r12 = *(0 + r3); // lwz @ 0x805E941C
    r12 = *(0x44 + r12); // lwz @ 0x805E9420
    /* mtctr r12 */ // 0x805E9424
    /* bctrl  */ // 0x805E9428
    r0 = *(0x24 + r1); // lwz @ 0x805E942C
    r31 = *(0x1c + r1); // lwz @ 0x805E9430
    r30 = *(0x18 + r1); // lwz @ 0x805E9434
    return;
}