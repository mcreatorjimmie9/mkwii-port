/* Function at 0x805EAE48, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805EAE48(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x805EAE58
    *(0x18 + r1) = r30; // stw @ 0x805EAE5C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805EAE64
    r29 = r3;
    r0 = r31 rlwinm 2; // rlwinm
    r4 = r30;
    r3 = r29 + r0; // 0x805EAE74
    r3 = *(4 + r3); // lwz @ 0x805EAE78
    r12 = *(0 + r3); // lwz @ 0x805EAE7C
    r12 = *(0xc + r12); // lwz @ 0x805EAE80
    /* mtctr r12 */ // 0x805EAE84
    /* bctrl  */ // 0x805EAE88
    r31 = r31 + 1; // 0x805EAE8C
    if (<) goto 0x0x805eae6c;
    r0 = *(0x24 + r1); // lwz @ 0x805EAE98
    r31 = *(0x1c + r1); // lwz @ 0x805EAE9C
    r30 = *(0x18 + r1); // lwz @ 0x805EAEA0
    r29 = *(0x14 + r1); // lwz @ 0x805EAEA4
    return;
}