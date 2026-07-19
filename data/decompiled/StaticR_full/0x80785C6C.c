/* Function at 0x80785C6C, size=200 bytes */
/* Stack frame: 16 bytes */

void FUN_80785C6C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    r4 = *(0xbc + r3); // lwz @ 0x80785C70
    if (<) goto 0x0x80785c8c;
    r0 = *(0x400 + r3); // lbz @ 0x80785C7C
    if (==) goto 0x0x80785c8c;
    *(0x404 + r3) = r4; // stw @ 0x80785C88
    r7 = *(0x404 + r3); // lwz @ 0x80785C8C
    if (!=) goto 0x0x80785cdc;
    r4 = *(0xbc + r3); // lwz @ 0x80785C98
    /* lis r0, 0x4330 */ // 0x80785C9C
    *(0xc + r1) = r4; // stw @ 0x80785CA0
    /* lis r5, 0 */ // 0x80785CA4
    /* lis r4, 0 */ // 0x80785CA8
    /* lfd f3, 0(r5) */ // 0x80785CAC
    *(8 + r1) = r0; // stw @ 0x80785CB0
    /* lfs f2, 0(r4) */ // 0x80785CB4
    /* lfd f0, 8(r1) */ // 0x80785CB8
    /* lfs f1, 0x410(r3) */ // 0x80785CBC
    /* fsubs f3, f0, f3 */ // 0x80785CC0
    /* lfs f0, 0x3b0(r3) */ // 0x80785CC4
    /* fmuls f2, f2, f3 */ // 0x80785CC8
    /* fsubs f1, f1, f2 */ // 0x80785CCC
    /* fadds f0, f0, f1 */ // 0x80785CD0
    /* stfs f0, 0x3b0(r3) */ // 0x80785CD4
    /* b 0x80785d2c */ // 0x80785CD8
    r4 = *(0xbc + r3); // lwz @ 0x80785CDC
    /* lis r0, 0x4330 */ // 0x80785CE0
    /* lis r5, 0 */ // 0x80785CE4
    /* lis r6, 0 */ // 0x80785CE8
    /* subf r4, r7, r4 */ // 0x80785CEC
    *(0xc + r1) = r4; // stw @ 0x80785CF0
    /* lfd f1, 0(r5) */ // 0x80785CF4
    /* lis r4, 0 */ // 0x80785CF8
    *(8 + r1) = r0; // stw @ 0x80785CFC
    /* lfs f4, 0(r6) */ // 0x80785D00
    /* lfd f0, 8(r1) */ // 0x80785D04
    /* lfs f3, 0x410(r3) */ // 0x80785D08
    /* fsubs f2, f0, f1 */ // 0x80785D0C
    /* lfs f1, 0(r4) */ // 0x80785D10
    /* fmuls f3, f4, f3 */ // 0x80785D14
    /* lfs f0, 0x3b0(r3) */ // 0x80785D18
    /* fmuls f1, f1, f2 */ // 0x80785D1C
    /* fsubs f1, f3, f1 */ // 0x80785D20
    /* fadds f0, f0, f1 */ // 0x80785D24
    /* stfs f0, 0x3b0(r3) */ // 0x80785D28
    return;
}