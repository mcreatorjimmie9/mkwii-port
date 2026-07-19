/* Function at 0x808BB994, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808BB994(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808BB99C
    /* slwi r0, r3, 2 */ // 0x808BB9A4
    *(0xc + r1) = r31; // stw @ 0x808BB9A8
    *(8 + r1) = r30; // stw @ 0x808BB9AC
    r3 = *(0 + r4); // lwz @ 0x808BB9B0
    r3 = *(0 + r3); // lwz @ 0x808BB9B4
    r3 = r3 + r0; // 0x808BB9B8
    r30 = *(8 + r3); // lwz @ 0x808BB9BC
    if (!=) goto 0x0x808bb9d0;
    /* li r30, 0 */ // 0x808BB9C8
    /* b 0x808bba24 */ // 0x808BB9CC
    /* lis r31, 0 */ // 0x808BB9D0
    r31 = r31 + 0; // 0x808BB9D4
    if (==) goto 0x0x808bba20;
    r12 = *(0 + r30); // lwz @ 0x808BB9DC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808BB9E4
    /* mtctr r12 */ // 0x808BB9E8
    /* bctrl  */ // 0x808BB9EC
    /* b 0x808bba08 */ // 0x808BB9F0
    if (!=) goto 0x0x808bba04;
    /* li r0, 1 */ // 0x808BB9FC
    /* b 0x808bba14 */ // 0x808BBA00
    r3 = *(0 + r3); // lwz @ 0x808BBA04
    if (!=) goto 0x0x808bb9f4;
    /* li r0, 0 */ // 0x808BBA10
    if (==) goto 0x0x808bba20;
    /* b 0x808bba24 */ // 0x808BBA1C
    /* li r30, 0 */ // 0x808BBA20
    if (!=) goto 0x0x808bba34;
    /* li r30, 0 */ // 0x808BBA2C
    /* b 0x808bba88 */ // 0x808BBA30
    /* lis r31, 0 */ // 0x808BBA34
    r31 = r31 + 0; // 0x808BBA38
    if (==) goto 0x0x808bba84;
    r12 = *(0 + r30); // lwz @ 0x808BBA40
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808BBA48
    /* mtctr r12 */ // 0x808BBA4C
    /* bctrl  */ // 0x808BBA50
    /* b 0x808bba6c */ // 0x808BBA54
    if (!=) goto 0x0x808bba68;
    /* li r0, 1 */ // 0x808BBA60
    /* b 0x808bba78 */ // 0x808BBA64
    r3 = *(0 + r3); // lwz @ 0x808BBA68
    if (!=) goto 0x0x808bba58;
    /* li r0, 0 */ // 0x808BBA74
    if (==) goto 0x0x808bba84;
    /* b 0x808bba88 */ // 0x808BBA80
    /* li r30, 0 */ // 0x808BBA84
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808BBA8C
    r30 = *(8 + r1); // lwz @ 0x808BBA90
    r0 = *(0x14 + r1); // lwz @ 0x808BBA94
    return;
}