/* Function at 0x80668B74, size=224 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80668B74(int r3, int r4, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r8, 0 */ // 0x80668B7C
    /* li r7, 1 */ // 0x80668B80
    *(0x14 + r1) = r0; // stw @ 0x80668B84
    r0 = r7 << r8; // slw
    /* and. r0, r4, r0 */ // 0x80668B8C
    *(0xc + r1) = r31; // stw @ 0x80668B90
    *(8 + r1) = r30; // stw @ 0x80668B94
    if (==) goto 0x0x80668ba0;
    /* li r8, 1 */ // 0x80668B9C
    /* li r0, 1 */ // 0x80668BA0
    r0 = r7 << r0; // slw
    /* and. r0, r4, r0 */ // 0x80668BA8
    if (==) goto 0x0x80668bb4;
    r8 = r8 + 1; // 0x80668BB0
    /* li r0, 2 */ // 0x80668BB4
    r0 = r7 << r0; // slw
    /* and. r0, r4, r0 */ // 0x80668BBC
    if (==) goto 0x0x80668bc8;
    r8 = r8 + 1; // 0x80668BC4
    /* li r0, 3 */ // 0x80668BC8
    r0 = r7 << r0; // slw
    /* and. r0, r4, r0 */ // 0x80668BD0
    if (==) goto 0x0x80668bdc;
    r8 = r8 + 1; // 0x80668BD8
    /* li r0, 4 */ // 0x80668BDC
    r0 = r7 << r0; // slw
    /* and. r0, r4, r0 */ // 0x80668BE4
    if (==) goto 0x0x80668bf0;
    r8 = r8 + 1; // 0x80668BEC
    if (<=) goto 0x0x80668bfc;
    /* li r6, 1 */ // 0x80668BF8
    /* li r0, 0 */ // 0x80668BFC
    *(4 + r3) = r4; // stw @ 0x80668C00
    r31 = r3 + 0x40; // 0x80668C04
    /* li r30, 0 */ // 0x80668C08
    *(8 + r3) = r5; // stw @ 0x80668C0C
    *(0xc + r3) = r0; // stb @ 0x80668C10
    *(0xd + r3) = r6; // stb @ 0x80668C14
    r12 = *(0 + r31); // lwz @ 0x80668C18
    r3 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x80668C20
    /* mtctr r12 */ // 0x80668C24
    /* bctrl  */ // 0x80668C28
    r30 = r30 + 1; // 0x80668C2C
    r31 = r31 + 0x34; // 0x80668C30
    if (<) goto 0x0x80668c18;
    r0 = *(0x14 + r1); // lwz @ 0x80668C3C
    r31 = *(0xc + r1); // lwz @ 0x80668C40
    r30 = *(8 + r1); // lwz @ 0x80668C44
    return;
}