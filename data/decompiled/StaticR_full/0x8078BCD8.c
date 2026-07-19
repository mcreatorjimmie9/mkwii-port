/* Function at 0x8078BCD8, size=468 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8078BCD8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x8078BCE0
    r5 = r4;
    *(0x24 + r1) = r0; // stw @ 0x8078BCE8
    *(0x1c + r1) = r31; // stw @ 0x8078BCEC
    *(0x18 + r1) = r30; // stw @ 0x8078BCF0
    r7 = *(0 + r6); // lwz @ 0x8078BCF4
    r0 = *(0x8a4 + r7); // lbz @ 0x8078BCF8
    if (!=) goto 0x0x8078bd0c;
    /* li r3, 0 */ // 0x8078BD04
    /* b 0x8078be94 */ // 0x8078BD08
    r0 = *(0x8a5 + r7); // lbz @ 0x8078BD0C
    if (!=) goto 0x0x8078bd20;
    /* li r3, 0 */ // 0x8078BD18
    /* b 0x8078be94 */ // 0x8078BD1C
    /* lis r6, 0 */ // 0x8078BD20
    r6 = *(0 + r6); // lwz @ 0x8078BD24
    r0 = *(0x70 + r6); // lbz @ 0x8078BD28
    if (==) goto 0x0x8078bd3c;
    /* li r3, 0 */ // 0x8078BD34
    /* b 0x8078be94 */ // 0x8078BD38
    /* lis r6, 0 */ // 0x8078BD3C
    r6 = *(0 + r6); // lwz @ 0x8078BD40
    r0 = *(8 + r6); // lwz @ 0x8078BD44
    if (<) goto 0x0x8078bd60;
    if (>) goto 0x0x8078bd60;
    /* li r3, 0 */ // 0x8078BD58
    /* b 0x8078be94 */ // 0x8078BD5C
    if (!=) goto 0x0x8078bd70;
    r31 = r3 + 0x18c; // 0x8078BD68
    /* b 0x8078bd74 */ // 0x8078BD6C
    r31 = r3 + 0x18; // 0x8078BD70
    r12 = *(0 + r7); // lwz @ 0x8078BD74
    r3 = r7;
    r4 = r31;
    r12 = *(0xb0 + r12); // lwz @ 0x8078BD80
    /* mtctr r12 */ // 0x8078BD84
    /* bctrl  */ // 0x8078BD88
    /* lis r5, 0 */ // 0x8078BD8C
    /* lis r4, 0 */ // 0x8078BD90
    r5 = *(0 + r5); // lbz @ 0x8078BD94
    r30 = r3;
    /* lfs f1, 0(r4) */ // 0x8078BD9C
    /* li r6, 0 */ // 0x8078BDA0
    if (==) goto 0x0x8078be5c;
    r0 = r5 + 0xf8; // 0x8078BDB0
    if (<=) goto 0x0x8078be2c;
    /* clrlwi r3, r0, 0x18 */ // 0x8078BDB8
    /* lis r4, 0 */ // 0x8078BDBC
    r0 = r3 + 7; // 0x8078BDC0
    r4 = *(0 + r4); // lwz @ 0x8078BDC4
    /* srwi r0, r0, 3 */ // 0x8078BDC8
    /* mtctr r0 */ // 0x8078BDCC
    if (<=) goto 0x0x8078be2c;
    /* clrlwi r0, r6, 0x18 */ // 0x8078BDD8
    r6 = r6 + 8; // 0x8078BDDC
    /* mulli r0, r0, 0x3c */ // 0x8078BDE0
    r3 = r4 + r0; // 0x8078BDE4
    /* lfs f0, 0x24(r3) */ // 0x8078BDE8
    /* lfs f2, 0x60(r3) */ // 0x8078BDEC
    /* fadds f1, f1, f0 */ // 0x8078BDF0
    /* lfs f6, 0x9c(r3) */ // 0x8078BDF4
    /* lfs f5, 0xd8(r3) */ // 0x8078BDF8
    /* lfs f4, 0x114(r3) */ // 0x8078BDFC
    /* fadds f1, f1, f2 */ // 0x8078BE00
    /* lfs f3, 0x150(r3) */ // 0x8078BE04
    /* lfs f2, 0x18c(r3) */ // 0x8078BE08
    /* lfs f0, 0x1c8(r3) */ // 0x8078BE0C
    /* fadds f1, f1, f6 */ // 0x8078BE10
    /* fadds f1, f1, f5 */ // 0x8078BE14
    /* fadds f1, f1, f4 */ // 0x8078BE18
    /* fadds f1, f1, f3 */ // 0x8078BE1C
    /* fadds f1, f1, f2 */ // 0x8078BE20
    /* fadds f1, f1, f0 */ // 0x8078BE24
    if (counter-- != 0) goto 0x0x8078bdd8;
    /* lis r3, 0 */ // 0x8078BE2C
    r4 = *(0 + r3); // lwz @ 0x8078BE30
    /* b 0x8078be50 */ // 0x8078BE34
    /* clrlwi r0, r6, 0x18 */ // 0x8078BE38
    r6 = r6 + 1; // 0x8078BE3C
    /* mulli r0, r0, 0x3c */ // 0x8078BE40
    r3 = r4 + r0; // 0x8078BE44
    /* lfs f0, 0x24(r3) */ // 0x8078BE48
    /* fadds f1, f1, f0 */ // 0x8078BE4C
    /* clrlwi r0, r6, 0x18 */ // 0x8078BE50
    if (<) goto 0x0x8078be38;
    /* lis r0, 0x4330 */ // 0x8078BE5C
    *(0xc + r1) = r5; // stw @ 0x8078BE60
    /* lis r4, 0 */ // 0x8078BE64
    r3 = *(0 + r31); // lwz @ 0x8078BE68
    *(8 + r1) = r0; // stw @ 0x8078BE6C
    /* lfd f2, 0(r4) */ // 0x8078BE70
    /* lfd f0, 8(r1) */ // 0x8078BE78
    /* fsubs f0, f0, f2 */ // 0x8078BE7C
    /* fdivs f1, f1, f0 */ // 0x8078BE80
    if (==) goto 0x0x8078be90;
    /* li r4, 0 */ // 0x8078BE88
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = r30;
    r0 = *(0x24 + r1); // lwz @ 0x8078BE94
    r31 = *(0x1c + r1); // lwz @ 0x8078BE98
    r30 = *(0x18 + r1); // lwz @ 0x8078BE9C
    return;
}