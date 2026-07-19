/* Function at 0x80660020, size=264 bytes */
/* Stack frame: 448 bytes */
/* Saved registers: r31 */
/* Calls: 10 function(s) */

int FUN_80660020(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -448(r1) */
    /* saved r31 */
    *(0x1c4 + r1) = r0; // stw @ 0x8066002C
    *(0x1bc + r1) = r31; // stw @ 0x80660030
    r31 = r3;
    if (==) goto 0x0x8066009c;
    r3 = *(0x308 + r3); // lwz @ 0x8066003C
    r4 = r31 + 0x30c; // 0x80660040
    FUN_805ACDE0(r4); // bl 0x805ACDE0
    r4 = r31 + 0x30c; // 0x8066004C
    FUN_805ABFC4(r4, r3, r4); // bl 0x805ABFC4
    /* lis r3, 0 */ // 0x80660054
    r4 = r31 + 0x30c; // 0x80660058
    r3 = *(0 + r3); // lwz @ 0x8066005C
    FUN_805C1484(r4, r3, r4); // bl 0x805C1484
    /* lis r3, 0 */ // 0x80660064
    r3 = *(0 + r3); // lwz @ 0x8066006C
    /* li r4, 0 */ // 0x80660070
    r3 = *(0x98 + r3); // lwz @ 0x80660074
    r3 = r3 + 0x188; // 0x80660078
    FUN_8066DDCC(r5, r4, r3); // bl 0x8066DDCC
    /* lis r4, 0 */ // 0x80660080
    r4 = r4 + 0; // 0x80660088
    /* li r5, 0xc */ // 0x8066008C
    /* li r6, 5 */ // 0x80660090
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* b 0x8066012c */ // 0x80660098
    /* lis r3, 0 */ // 0x8066009C
    r31 = *(0 + r3); // lwz @ 0x806600A0
    r3 = *(0x18 + r31); // lwz @ 0x806600A4
    FUN_805ABD4C(r3); // bl 0x805ABD4C
    if (==) goto 0x0x806600bc;
    r4 = *(0x18 + r31); // lwz @ 0x806600B4
    /* b 0x806600c0 */ // 0x806600B8
    /* li r4, 0 */ // 0x806600BC
    /* lis r3, 0 */ // 0x806600C0
    r3 = *(0 + r3); // lwz @ 0x806600C4
    FUN_805C1484(r4, r3); // bl 0x805C1484
    /* lis r3, 0 */ // 0x806600CC
    r31 = *(0 + r3); // lwz @ 0x806600D0
    r3 = *(0x18 + r31); // lwz @ 0x806600D4
    FUN_805ABD4C(r3); // bl 0x805ABD4C
    if (==) goto 0x0x806600ec;
    r4 = *(0x18 + r31); // lwz @ 0x806600E4
    /* b 0x806600f0 */ // 0x806600E8
    /* li r4, 0 */ // 0x806600EC
    FUN_805ABFC4(r4, r3); // bl 0x805ABFC4
    /* lis r3, 0 */ // 0x806600F8
    r3 = *(0 + r3); // lwz @ 0x80660100
    /* li r4, 0 */ // 0x80660104
    r3 = *(0x98 + r3); // lwz @ 0x80660108
    r3 = r3 + 0x188; // 0x8066010C
    FUN_8066DDCC(r5, r4, r3); // bl 0x8066DDCC
    /* lis r4, 0 */ // 0x80660114
    r4 = r4 + 0; // 0x8066011C
    /* li r5, 0xc */ // 0x80660120
    /* li r6, 5 */ // 0x80660124
}