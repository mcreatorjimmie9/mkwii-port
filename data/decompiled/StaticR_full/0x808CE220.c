/* Function at 0x808CE220, size=168 bytes */
/* Stack frame: 0 bytes */

int FUN_808CE220(int r3, int r4)
{
    /* lis r3, 0 */ // 0x808CE220
    r3 = *(0 + r3); // lwz @ 0x808CE224
    r0 = *(0xb70 + r3); // lwz @ 0x808CE228
    if (==) goto 0x0x808ce248;
    if (==) goto 0x0x808ce25c;
    if (==) goto 0x0x808ce280;
    /* b 0x808ce2c0 */ // 0x808CE244
    r3 = *(0xb8c + r3); // lbz @ 0x808CE248
    r0 = r3 + -3; // 0x808CE24C
    /* cntlzw r0, r0 */ // 0x808CE250
    /* srwi r3, r0, 5 */ // 0x808CE254
    return;
    /* lis r3, 0 */ // 0x808CE25C
    r3 = *(0 + r3); // lwz @ 0x808CE260
    r4 = *(0x98 + r3); // lwz @ 0x808CE264
    r3 = *(0x60 + r4); // lwz @ 0x808CE268
    r0 = *(0x64 + r4); // lwz @ 0x808CE26C
    /* subf r0, r3, r0 */ // 0x808CE270
    /* cntlzw r0, r0 */ // 0x808CE274
    /* srwi r3, r0, 5 */ // 0x808CE278
    return;
    /* lis r3, 0 */ // 0x808CE280
    r3 = *(0 + r3); // lwz @ 0x808CE284
    r4 = *(0x98 + r3); // lwz @ 0x808CE288
    r3 = *(0x64 + r4); // lwz @ 0x808CE28C
    r0 = *(0x68 + r4); // lwz @ 0x808CE290
    if (>) goto 0x0x808ce2a4;
    /* li r3, 1 */ // 0x808CE29C
    return;
    r0 = *(0x6c + r4); // lwz @ 0x808CE2A4
    if (>) goto 0x0x808ce2b8;
    /* li r3, 1 */ // 0x808CE2B0
    return;
    /* li r3, 0 */ // 0x808CE2B8
    return;
    /* li r3, 0 */ // 0x808CE2C0
    return;
}