/* Function at 0x805E9C4C, size=176 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805E9C4C(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* stfd f31, 0x28(r1) */ // 0x805E9C58
    /* fmr f31, f1 */ // 0x805E9C5C
    *(0x24 + r1) = r31; // stw @ 0x805E9C60
    *(0x20 + r1) = r30; // stw @ 0x805E9C64
    /* li r30, 0 */ // 0x805E9C68
    *(0x1c + r1) = r29; // stw @ 0x805E9C6C
    r29 = r4;
    r31 = *(0xc + r3); // lwz @ 0x805E9C74
    if (==) goto 0x0x805e9cb0;
    /* lis r4, 0 */ // 0x805E9C80
    r3 = r31;
    r4 = r4 + 0; // 0x805E9C88
    *(8 + r1) = r4; // stw @ 0x805E9C8C
    r12 = *(0 + r31); // lwz @ 0x805E9C94
    r12 = *(8 + r12); // lwz @ 0x805E9C98
    /* mtctr r12 */ // 0x805E9C9C
    /* bctrl  */ // 0x805E9CA0
    if (==) goto 0x0x805e9cb0;
    /* li r30, 1 */ // 0x805E9CAC
    if (==) goto 0x0x805e9cc0;
    r3 = r31;
    /* b 0x805e9cc4 */ // 0x805E9CBC
    /* li r3, 0 */ // 0x805E9CC0
    r12 = *(0 + r3); // lwz @ 0x805E9CC4
    /* fmr f1, f31 */ // 0x805E9CC8
    r4 = r29;
    r12 = *(0x48 + r12); // lwz @ 0x805E9CD0
    /* mtctr r12 */ // 0x805E9CD4
    /* bctrl  */ // 0x805E9CD8
    r0 = *(0x34 + r1); // lwz @ 0x805E9CDC
    /* lfd f31, 0x28(r1) */ // 0x805E9CE0
    r31 = *(0x24 + r1); // lwz @ 0x805E9CE4
    r30 = *(0x20 + r1); // lwz @ 0x805E9CE8
    r29 = *(0x1c + r1); // lwz @ 0x805E9CEC
    return;
}