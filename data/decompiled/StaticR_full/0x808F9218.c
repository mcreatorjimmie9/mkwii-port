/* Function at 0x808F9218, size=116 bytes */
/* Stack frame: 0 bytes */

void FUN_808F9218(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* addis r0, r4, 1 */ // 0x808F9218
    /* beqlr  */ // 0x808F9220
    r0 = *(0x26 + r3); // lbz @ 0x808F9224
    /* bltlr  */ // 0x808F922C
    r0 = *(0x18 + r3); // lwz @ 0x808F9230
    /* li r6, 1 */ // 0x808F9234
    r7 = *(0x20 + r3); // lwz @ 0x808F9238
    /* subf r0, r0, r4 */ // 0x808F923C
    r8 = r6 << r0; // slw
    /* and. r0, r7, r8 */ // 0x808F9244
    if (!=) goto 0x0x808f9260;
    r6 = *(0x24 + r3); // lha @ 0x808F924C
    r0 = r7 | r8; // 0x808F9250
    *(0x20 + r3) = r0; // stw @ 0x808F9254
    r0 = r6 + 1; // 0x808F9258
    *(0x24 + r3) = r0; // sth @ 0x808F925C
    if (==) goto 0x0x808f9284;
    r5 = *(0x24 + r3); // lha @ 0x808F9268
    r0 = *(0x26 + r3); // lbz @ 0x808F926C
    if (<) goto 0x0x808f9284;
    /* li r0, 0 */ // 0x808F9278
    *(0x20 + r3) = r0; // stw @ 0x808F927C
    *(0x24 + r3) = r0; // sth @ 0x808F9280
    *(0x1c + r3) = r4; // stw @ 0x808F9284
    return;
}