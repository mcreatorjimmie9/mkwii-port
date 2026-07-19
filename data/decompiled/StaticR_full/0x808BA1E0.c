/* Function at 0x808BA1E0, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808BA1E0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808BA1E8
    *(0x18 + r1) = r30; // stw @ 0x808BA1F4
    *(0x14 + r1) = r29; // stw @ 0x808BA1F8
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x808BA200
    r3 = *(0 + r3); // lwz @ 0x808BA204
    r30 = *(0x250 + r3); // lwz @ 0x808BA208
    if (!=) goto 0x0x808ba21c;
    /* li r30, 0 */ // 0x808BA214
    /* b 0x808ba270 */ // 0x808BA218
    /* lis r31, 0 */ // 0x808BA21C
    r31 = r31 + 0; // 0x808BA220
    if (==) goto 0x0x808ba26c;
    r12 = *(0 + r30); // lwz @ 0x808BA228
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808BA230
    /* mtctr r12 */ // 0x808BA234
    /* bctrl  */ // 0x808BA238
    /* b 0x808ba254 */ // 0x808BA23C
    if (!=) goto 0x0x808ba250;
    /* li r0, 1 */ // 0x808BA248
    /* b 0x808ba260 */ // 0x808BA24C
    r3 = *(0 + r3); // lwz @ 0x808BA250
    if (!=) goto 0x0x808ba240;
    /* li r0, 0 */ // 0x808BA25C
    if (==) goto 0x0x808ba26c;
    /* b 0x808ba270 */ // 0x808BA268
    /* li r30, 0 */ // 0x808BA26C
    r3 = r30;
    /* li r4, -1 */ // 0x808BA274
    FUN_806A6BC8(r3, r4); // bl 0x806A6BC8
    /* lis r4, 0 */ // 0x808BA27C
    /* li r0, -1 */ // 0x808BA280
    /* lfs f1, 0(r4) */ // 0x808BA284
    r3 = r29;
    *(0x3e8 + r29) = r0; // stw @ 0x808BA28C
    /* li r4, 0 */ // 0x808BA290
    FUN_80671C48(r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x808BA298
    r31 = *(0x1c + r1); // lwz @ 0x808BA29C
    r30 = *(0x18 + r1); // lwz @ 0x808BA2A0
    r29 = *(0x14 + r1); // lwz @ 0x808BA2A4
    return;
}