/* Function at 0x80603C9C, size=156 bytes */
/* Stack frame: 0 bytes */

int FUN_80603C9C(int r3, int r4, int r5)
{
    r0 = *(0x14 + r3); // lwz @ 0x80603C9C
    /* lis r5, 0 */ // 0x80603CA0
    r5 = r5 + 0; // 0x80603CA4
    if (!=) goto 0x0x80603cc4;
    /* lfs f0, 0x98(r5) */ // 0x80603CB0
    r0 = r5 + 8; // 0x80603CB4
    *(0x20 + r3) = r0; // stw @ 0x80603CB8
    /* stfs f0, 0x34(r3) */ // 0x80603CBC
    /* b 0x80603d04 */ // 0x80603CC0
    if (!=) goto 0x0x80603ce4;
    r4 = r5 + 8; // 0x80603CCC
    /* lfs f0, 0x9c(r5) */ // 0x80603CD0
    r0 = r4 + 0x10; // 0x80603CD4
    *(0x20 + r3) = r0; // stw @ 0x80603CD8
    /* stfs f0, 0x34(r3) */ // 0x80603CDC
    /* b 0x80603d04 */ // 0x80603CE0
    r0 = *(0x10 + r3); // lwz @ 0x80603CE4
    if (!=) goto 0x0x80603d04;
    r4 = r5 + 8; // 0x80603CF0
    /* lfs f0, 0xa0(r5) */ // 0x80603CF4
    r0 = r4 + 0x20; // 0x80603CF8
    *(0x20 + r3) = r0; // stw @ 0x80603CFC
    /* stfs f0, 0x34(r3) */ // 0x80603D00
    r4 = *(0x20 + r3); // lwz @ 0x80603D04
    /* lfs f2, 0(r5) */ // 0x80603D08
    /* lfs f0, 0(r4) */ // 0x80603D0C
    /* stfs f0, 0x28(r3) */ // 0x80603D10
    /* fmr f3, f2 */ // 0x80603D14
    /* lfs f1, 0x80(r5) */ // 0x80603D18
    /* fmr f4, f2 */ // 0x80603D1C
    /* lfs f0, 0xc(r4) */ // 0x80603D20
    /* stfs f0, 0x30(r3) */ // 0x80603D24
    /* stfs f2, 0x24(r3) */ // 0x80603D28
    /* stfs f1, 0x2c(r3) */ // 0x80603D2C
    r3 = r3 + 0x3c; // 0x80603D30
    /* b 0x805e3430 */ // 0x80603D34
}