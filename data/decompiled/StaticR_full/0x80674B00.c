/* Function at 0x80674B00, size=304 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_80674B00(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x80674B18
    r29 = r4;
    r3 = r29;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r30;
    /* li r4, 1 */ // 0x80674B2C
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* lis r3, 0 */ // 0x80674B34
    r3 = *(0 + r3); // lwz @ 0x80674B38
    r3 = *(0 + r3); // lwz @ 0x80674B3C
    r30 = *(0x18c + r3); // lwz @ 0x80674B40
    if (!=) goto 0x0x80674b54;
    /* li r30, 0 */ // 0x80674B4C
    /* b 0x80674ba8 */ // 0x80674B50
    /* lis r31, 0 */ // 0x80674B54
    r31 = r31 + 0; // 0x80674B58
    if (==) goto 0x0x80674ba4;
    r12 = *(0 + r30); // lwz @ 0x80674B60
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x80674B68
    /* mtctr r12 */ // 0x80674B6C
    /* bctrl  */ // 0x80674B70
    /* b 0x80674b8c */ // 0x80674B74
    if (!=) goto 0x0x80674b88;
    /* li r0, 1 */ // 0x80674B80
    /* b 0x80674b98 */ // 0x80674B84
    r3 = *(0 + r3); // lwz @ 0x80674B88
    if (!=) goto 0x0x80674b78;
    /* li r0, 0 */ // 0x80674B94
    if (==) goto 0x0x80674ba4;
    /* b 0x80674ba8 */ // 0x80674BA0
    /* li r30, 0 */ // 0x80674BA4
    r3 = r29;
    FUN_8064A384(r3); // bl 0x8064A384
    /* li r0, 1 */ // 0x80674BB0
    *(0x668 + r30) = r0; // stb @ 0x80674BB4
    /* lis r3, 0 */ // 0x80674BB8
    *(0x66c + r30) = r0; // stw @ 0x80674BBC
    /* stfs f1, 0x670(r30) */ // 0x80674BC0
    r3 = *(0 + r3); // lwz @ 0x80674BC4
    r4 = *(0 + r3); // lwz @ 0x80674BC8
    r0 = *(0 + r4); // lwz @ 0x80674BCC
    if (==) goto 0x0x80674be0;
    if (!=) goto 0x0x80674c14;
    /* li r4, 0x41 */ // 0x80674BE0
    /* li r5, 1 */ // 0x80674BE4
    FUN_80698C44(r4, r5); // bl 0x80698C44
    /* lis r4, 0 */ // 0x80674BEC
    r3 = r29;
    r30 = *(0 + r4); // lwz @ 0x80674BF4
    FUN_8064A384(r5, r4, r3); // bl 0x8064A384
    /* fctiwz f0, f1 */ // 0x80674BFC
    r3 = r30;
    /* li r5, 0xff */ // 0x80674C04
    /* stfd f0, 8(r1) */ // 0x80674C08
    r4 = *(0xc + r1); // lwz @ 0x80674C0C
    FUN_80698CD0(r3, r5); // bl 0x80698CD0
    r0 = *(0x24 + r1); // lwz @ 0x80674C14
    r31 = *(0x1c + r1); // lwz @ 0x80674C18
    r30 = *(0x18 + r1); // lwz @ 0x80674C1C
    r29 = *(0x14 + r1); // lwz @ 0x80674C20
    return;
}