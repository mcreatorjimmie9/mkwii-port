/* Function at 0x80674C84, size=264 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80674C84(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x80674C8C
    /* li r4, 1 */ // 0x80674C90
    *(0x14 + r1) = r0; // stw @ 0x80674C94
    /* lfs f1, 0(r5) */ // 0x80674C98
    *(0xc + r1) = r31; // stw @ 0x80674C9C
    *(8 + r1) = r30; // stw @ 0x80674CA0
    FUN_80671C48(r4); // bl 0x80671C48
    /* lis r3, 0 */ // 0x80674CA8
    r3 = *(0 + r3); // lwz @ 0x80674CAC
    r3 = *(0 + r3); // lwz @ 0x80674CB0
    r30 = *(0x18c + r3); // lwz @ 0x80674CB4
    if (!=) goto 0x0x80674cc8;
    /* li r30, 0 */ // 0x80674CC0
    /* b 0x80674d1c */ // 0x80674CC4
    /* lis r31, 0 */ // 0x80674CC8
    r31 = r31 + 0; // 0x80674CCC
    if (==) goto 0x0x80674d18;
    r12 = *(0 + r30); // lwz @ 0x80674CD4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x80674CDC
    /* mtctr r12 */ // 0x80674CE0
    /* bctrl  */ // 0x80674CE4
    /* b 0x80674d00 */ // 0x80674CE8
    if (!=) goto 0x0x80674cfc;
    /* li r0, 1 */ // 0x80674CF4
    /* b 0x80674d0c */ // 0x80674CF8
    r3 = *(0 + r3); // lwz @ 0x80674CFC
    if (!=) goto 0x0x80674cec;
    /* li r0, 0 */ // 0x80674D08
    if (==) goto 0x0x80674d18;
    /* b 0x80674d1c */ // 0x80674D14
    /* li r30, 0 */ // 0x80674D18
    /* li r0, 1 */ // 0x80674D1C
    *(0x668 + r30) = r0; // stb @ 0x80674D20
    /* lis r4, 0 */ // 0x80674D24
    /* lis r3, 0 */ // 0x80674D28
    *(0x66c + r30) = r0; // stw @ 0x80674D2C
    /* lfs f0, 0(r4) */ // 0x80674D30
    /* stfs f0, 0x670(r30) */ // 0x80674D34
    r3 = *(0 + r3); // lwz @ 0x80674D38
    r4 = *(0 + r3); // lwz @ 0x80674D3C
    r0 = *(0 + r4); // lwz @ 0x80674D40
    if (==) goto 0x0x80674d54;
    if (!=) goto 0x0x80674d74;
    /* li r4, 0x41 */ // 0x80674D54
    /* li r5, 1 */ // 0x80674D58
    FUN_80698C44(r4, r5); // bl 0x80698C44
    /* lis r3, 0 */ // 0x80674D60
    /* li r4, 0 */ // 0x80674D64
    r3 = *(0 + r3); // lwz @ 0x80674D68
    /* li r5, 0xff */ // 0x80674D6C
    FUN_80698CD0(r3, r4, r5); // bl 0x80698CD0
    r0 = *(0x14 + r1); // lwz @ 0x80674D74
    r31 = *(0xc + r1); // lwz @ 0x80674D78
    r30 = *(8 + r1); // lwz @ 0x80674D7C
    return;
}