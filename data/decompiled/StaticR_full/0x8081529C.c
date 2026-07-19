/* Function at 0x8081529C, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8081529C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808152A4
    *(0xc + r1) = r31; // stw @ 0x808152AC
    *(8 + r1) = r30; // stw @ 0x808152B0
    r31 = *(0 + r4); // lwz @ 0x808152B4
    if (==) goto 0x0x80815338;
    /* li r0, 0 */ // 0x808152C0
    *(0 + r4) = r0; // stw @ 0x808152C4
    if (==) goto 0x0x80815338;
    if (==) goto 0x0x80815330;
    /* lis r3, 0 */ // 0x808152D0
    r3 = r3 + 0; // 0x808152D4
    *(0 + r31) = r3; // stw @ 0x808152D8
    r30 = *(0 + r4); // lwz @ 0x808152DC
    if (==) goto 0x0x80815324;
    *(0 + r4) = r0; // stw @ 0x808152E8
    if (==) goto 0x0x80815324;
    if (==) goto 0x0x8081531c;
    *(0 + r30) = r3; // stw @ 0x808152F4
    r3 = *(0 + r4); // lwz @ 0x808152F8
    if (==) goto 0x0x80815310;
    *(0 + r4) = r0; // stw @ 0x80815304
    /* li r4, 1 */ // 0x80815308
    FUN_80815548(r4); // bl 0x80815548
    r3 = r30;
    /* li r4, 0 */ // 0x80815314
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x80815328
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x80815338
    r31 = *(0xc + r1); // lwz @ 0x8081533C
    r30 = *(8 + r1); // lwz @ 0x80815340
    return;
}