/* Function at 0x8074F9D8, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8074F9D8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8074F9E4
    r31 = r3;
    r0 = *(0xe0 + r3); // lwz @ 0x8074F9EC
    if (!=) goto 0x0x8074fa8c;
    r4 = *(8 + r3); // lwz @ 0x8074F9F8
    /* lis r3, 0 */ // 0x8074F9FC
    /* lis r5, 0 */ // 0x8074FA00
    /* lfs f1, 0(r3) */ // 0x8074FA04
    r3 = *(0x28 + r4); // lwz @ 0x8074FA08
    /* li r4, 0 */ // 0x8074FA0C
    /* lfs f2, 0(r5) */ // 0x8074FA10
    /* li r5, 1 */ // 0x8074FA14
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    /* lis r3, 0 */ // 0x8074FA1C
    r3 = *(0 + r3); // lwz @ 0x8074FA20
    r3 = *(0x10 + r3); // lwz @ 0x8074FA24
    r0 = r3 + -0x32; // 0x8074FA28
    if (<=) goto 0x0x8074faac;
    r0 = *(0xee + r31); // lbz @ 0x8074FA34
    if (!=) goto 0x0x8074fa6c;
    r3 = *(0xec + r31); // lhz @ 0x8074FA40
    /* lis r0, 0x4330 */ // 0x8074FA44
    *(0xc + r1) = r3; // stw @ 0x8074FA48
    /* lis r3, 0 */ // 0x8074FA4C
    /* lfd f1, 0(r3) */ // 0x8074FA50
    r3 = r31;
    *(8 + r1) = r0; // stw @ 0x8074FA58
    /* li r4, 0x2f9 */ // 0x8074FA5C
    /* lfd f0, 8(r1) */ // 0x8074FA60
    /* fsubs f1, f0, f1 */ // 0x8074FA64
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    r3 = *(0xec + r31); // lhz @ 0x8074FA6C
    if (>=) goto 0x0x8074fa80;
    r0 = r3 + 1; // 0x8074FA78
    *(0xec + r31) = r0; // sth @ 0x8074FA7C
    /* li r0, 0x50 */ // 0x8074FA80
    *(0xea + r31) = r0; // sth @ 0x8074FA84
    /* b 0x8074faac */ // 0x8074FA88
    r4 = *(8 + r3); // lwz @ 0x8074FA8C
    /* lis r3, 0 */ // 0x8074FA90
    /* lis r5, 0 */ // 0x8074FA94
    /* lfs f1, 0(r3) */ // 0x8074FA98
    r3 = *(0x28 + r4); // lwz @ 0x8074FA9C
    /* li r4, 0 */ // 0x8074FAA0
    /* lfs f2, 0(r5) */ // 0x8074FAA4
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r0 = *(0x24 + r1); // lwz @ 0x8074FAAC
    r31 = *(0x1c + r1); // lwz @ 0x8074FAB0
    return;
}