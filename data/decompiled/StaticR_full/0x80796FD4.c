/* Function at 0x80796FD4, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80796FD4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80796FE0
    r31 = r3;
    r0 = *(0xe8 + r3); // lbz @ 0x80796FE8
    if (!=) goto 0x0x80797000;
    /* li r0, 0 */ // 0x80796FF4
    *(0xb4 + r3) = r0; // stb @ 0x80796FF8
    /* b 0x80797068 */ // 0x80796FFC
    r4 = *(0xdc + r3); // lwz @ 0x80797000
    r4 = *(0 + r4); // lwz @ 0x80797004
    r4 = *(4 + r4); // lwz @ 0x80797008
    r0 = *(8 + r4); // lwz @ 0x8079700C
    /* rlwinm. r0, r0, 0, 6, 6 */ // 0x80797010
    if (==) goto 0x0x80797024;
    /* li r0, 1 */ // 0x80797018
    *(0xb4 + r3) = r0; // stb @ 0x8079701C
    /* b 0x80797030 */ // 0x80797020
    /* li r0, 0 */ // 0x80797024
    *(0xb4 + r3) = r0; // stb @ 0x80797028
    /* b 0x80797068 */ // 0x8079702C
    r12 = *(0 + r3); // lwz @ 0x80797030
    r12 = *(0x134 + r12); // lwz @ 0x80797034
    /* mtctr r12 */ // 0x80797038
    /* bctrl  */ // 0x8079703C
    r4 = r3;
    if (!=) goto 0x0x80797050;
    /* li r4, 0x159 */ // 0x8079704C
    r12 = *(0 + r31); // lwz @ 0x80797050
    r3 = r31;
    r5 = r31 + 0xc0; // 0x80797058
    r12 = *(0xf8 + r12); // lwz @ 0x8079705C
    /* mtctr r12 */ // 0x80797060
    /* bctrl  */ // 0x80797064
    r0 = *(0x14 + r1); // lwz @ 0x80797068
    r31 = *(0xc + r1); // lwz @ 0x8079706C
    return;
}