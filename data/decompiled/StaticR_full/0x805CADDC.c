/* Function at 0x805CADDC, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805CADDC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r0 = r4 rlwinm 2; // rlwinm
    /* li r4, 4 */ // 0x805CADEC
    *(0x1c + r1) = r31; // stw @ 0x805CADF0
    *(0x18 + r1) = r30; // stw @ 0x805CADF4
    r30 = r5;
    r3 = *(4 + r3); // lwz @ 0x805CADFC
    r5 = *(0xc + r3); // lwz @ 0x805CAE00
    /* lwzx r31, r5, r0 */ // 0x805CAE04
    FUN_805C5788(); // bl 0x805C5788
    if (!=) goto 0x0x805cae50;
    *(0x22 + r31) = r30; // sth @ 0x805CAE14
    /* li r0, 0 */ // 0x805CAE18
    /* lis r3, 0 */ // 0x805CAE1C
    /* li r5, 1 */ // 0x805CAE20
    r3 = r3 + 0; // 0x805CAE24
    *(8 + r1) = r3; // stw @ 0x805CAE28
    r3 = r31;
    *(0x12 + r1) = r5; // stb @ 0x805CAE34
    /* li r5, 1 */ // 0x805CAE38
    /* li r6, 5 */ // 0x805CAE3C
    *(0xc + r1) = r0; // sth @ 0x805CAE40
    *(0xe + r1) = r0; // stb @ 0x805CAE44
    *(0x10 + r1) = r0; // sth @ 0x805CAE48
    FUN_805C3D4C(r5, r6); // bl 0x805C3D4C
    r0 = *(0x24 + r1); // lwz @ 0x805CAE50
    r31 = *(0x1c + r1); // lwz @ 0x805CAE54
    r30 = *(0x18 + r1); // lwz @ 0x805CAE58
    return;
}