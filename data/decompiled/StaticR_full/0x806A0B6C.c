/* Function at 0x806A0B6C, size=220 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806A0B6C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    r3 = r3 + 0xa8; // 0x806A0B80
    *(8 + r1) = r30; // stw @ 0x806A0B84
    r30 = r4;
    FUN_806669DC(r3); // bl 0x806669DC
    if (==) goto 0x0x806a0ba0;
    FUN_8065634C(); // bl 0x8065634C
    /* b 0x806a0c30 */ // 0x806A0B9C
    r4 = r30;
    r3 = r31 + 0xa8; // 0x806A0BA4
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    r30 = r3;
    if (!=) goto 0x0x806a0bc0;
    /* li r30, 0 */ // 0x806A0BB8
    /* b 0x806a0c10 */ // 0x806A0BBC
    /* lis r31, 0 */ // 0x806A0BC0
    r31 = r31 + 0; // 0x806A0BC4
    if (==) goto 0x0x806a0c0c;
    r12 = *(0 + r3); // lwz @ 0x806A0BCC
    r12 = *(0xc + r12); // lwz @ 0x806A0BD0
    /* mtctr r12 */ // 0x806A0BD4
    /* bctrl  */ // 0x806A0BD8
    /* b 0x806a0bf4 */ // 0x806A0BDC
    if (!=) goto 0x0x806a0bf0;
    /* li r0, 1 */ // 0x806A0BE8
    /* b 0x806a0c00 */ // 0x806A0BEC
    r3 = *(0 + r3); // lwz @ 0x806A0BF0
    if (!=) goto 0x0x806a0be0;
    /* li r0, 0 */ // 0x806A0BFC
    if (==) goto 0x0x806a0c0c;
    /* b 0x806a0c10 */ // 0x806A0C08
    /* li r30, 0 */ // 0x806A0C0C
    r12 = *(0 + r30); // lwz @ 0x806A0C10
    /* lis r4, 0 */ // 0x806A0C14
    r3 = r30;
    /* li r5, 0 */ // 0x806A0C1C
    r12 = *(0x7c + r12); // lwz @ 0x806A0C20
    r4 = r4 + 0; // 0x806A0C24
    /* mtctr r12 */ // 0x806A0C28
    /* bctrl  */ // 0x806A0C2C
    r0 = *(0x14 + r1); // lwz @ 0x806A0C30
    r31 = *(0xc + r1); // lwz @ 0x806A0C34
    r30 = *(8 + r1); // lwz @ 0x806A0C38
    return;
}