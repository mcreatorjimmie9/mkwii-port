/* Function at 0x80876FEC, size=244 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80876FEC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80876FF4
    *(0xc + r1) = r31; // stw @ 0x80876FFC
    *(8 + r1) = r30; // stw @ 0x80877000
    r4 = *(0 + r4); // lwz @ 0x80877004
    r4 = *(0 + r4); // lwz @ 0x80877008
    r0 = *(0 + r4); // lwz @ 0x8087700C
    if (<) goto 0x0x80877020;
    if (<=) goto 0x0x80877030;
    if (<) goto 0x0x808770ac;
    if (>) goto 0x0x808770ac;
    r3 = *(0x64 + r3); // lwz @ 0x80877030
    r30 = *(0xc + r3); // lwz @ 0x80877034
    if (!=) goto 0x0x80877048;
    /* li r30, 0 */ // 0x80877040
    /* b 0x8087709c */ // 0x80877044
    /* lis r31, 0 */ // 0x80877048
    r31 = r31 + 0; // 0x8087704C
    if (==) goto 0x0x80877098;
    r12 = *(0 + r30); // lwz @ 0x80877054
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8087705C
    /* mtctr r12 */ // 0x80877060
    /* bctrl  */ // 0x80877064
    /* b 0x80877080 */ // 0x80877068
    if (!=) goto 0x0x8087707c;
    /* li r0, 1 */ // 0x80877074
    /* b 0x8087708c */ // 0x80877078
    r3 = *(0 + r3); // lwz @ 0x8087707C
    if (!=) goto 0x0x8087706c;
    /* li r0, 0 */ // 0x80877088
    if (==) goto 0x0x80877098;
    /* b 0x8087709c */ // 0x80877094
    /* li r30, 0 */ // 0x80877098
    if (==) goto 0x0x808770c4;
    r3 = *(0x64 + r30); // lwz @ 0x808770A4
    /* b 0x808770c8 */ // 0x808770A8
    /* lis r5, 0 */ // 0x808770AC
    r4 = *(0x190 + r3); // lbz @ 0x808770B0
    r3 = *(0 + r5); // lwz @ 0x808770B4
    FUN_805C14C8(r5); // bl 0x805C14C8
    /* clrlwi r3, r3, 0x18 */ // 0x808770BC
    /* b 0x808770c8 */ // 0x808770C0
    /* li r3, -1 */ // 0x808770C4
    r0 = *(0x14 + r1); // lwz @ 0x808770C8
    r31 = *(0xc + r1); // lwz @ 0x808770CC
    r30 = *(8 + r1); // lwz @ 0x808770D0
    return;
}