/* Function at 0x805CA924, size=256 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805CA924(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* lis r8, -0x7fff */ // 0x805CA92C
    /* lis r7, 0 */ // 0x805CA930
    *(0x14 + r1) = r0; // stw @ 0x805CA934
    r8 = r8 + -0x7fff; // 0x805CA938
    r9 = *(0 + r7); // lwz @ 0x805CA93C
    /* lis r7, 1 */ // 0x805CA940
    r0 = *(0x104 + r3); // lha @ 0x805CA944
    r7 = r7 + -1; // 0x805CA948
    r9 = *(0x20 + r9); // lwz @ 0x805CA94C
    r10 = *(0x114 + r3); // lha @ 0x805CA954
    r0 = r8 * r9; // 0x805CA958
    /* srwi r0, r0, 0xf */ // 0x805CA95C
    r0 = r0 * r7; // 0x805CA960
    /* subf r0, r0, r9 */ // 0x805CA964
    /* clrlwi r0, r0, 0x10 */ // 0x805CA968
    r7 = r10 + r0; // 0x805CA96C
    r0 = r7 + 0x5a; // 0x805CA970
    /* clrlwi r11, r0, 0x10 */ // 0x805CA974
    if (>=) goto 0x0x805ca984;
    /* li r3, 0 */ // 0x805CA97C
    /* b 0x805caa14 */ // 0x805CA980
    /* li r0, 7 */ // 0x805CA984
    /* li r10, 0 */ // 0x805CA988
    /* li r8, 0 */ // 0x805CA98C
    /* mtctr r0 */ // 0x805CA990
    r9 = *(0x40 + r3); // lwz @ 0x805CA994
    r7 = r9 + r8; // 0x805CA998
    r0 = *(0x28 + r7); // lwz @ 0x805CA99C
    if (!=) goto 0x0x805caa04;
    /* slwi r10, r10, 3 */ // 0x805CA9A8
    r7 = r5;
    r9 = r9 + r10; // 0x805CA9B0
    r8 = r6;
    *(0x28 + r9) = r4; // stw @ 0x805CA9B8
    r0 = *(0x40 + r3); // lwz @ 0x805CA9BC
    r9 = r0 + r10; // 0x805CA9C0
    *(0x2c + r9) = r11; // sth @ 0x805CA9C4
    r0 = *(0x40 + r3); // lwz @ 0x805CA9C8
    r9 = r0 + r10; // 0x805CA9CC
    *(0x2e + r9) = r5; // stb @ 0x805CA9D0
    r5 = r4;
    r0 = *(0x40 + r3); // lwz @ 0x805CA9D8
    r4 = r0 + r10; // 0x805CA9DC
    *(0x2f + r4) = r6; // stb @ 0x805CA9E0
    r6 = r11;
    r9 = *(0x104 + r3); // lha @ 0x805CA9E8
    /* slwi r0, r9, 2 */ // 0x805CA9EC
    r4 = r3 + r0; // 0x805CA9F0
    r4 = *(0x44 + r4); // lwz @ 0x805CA9F4
    FUN_805C9F78(r6); // bl 0x805C9F78
    /* li r3, 1 */ // 0x805CA9FC
    /* b 0x805caa14 */ // 0x805CAA00
    r8 = r8 + 8; // 0x805CAA04
    if (counter-- != 0) goto 0x0x805ca994;
    /* li r3, 0 */ // 0x805CAA10
    r0 = *(0x14 + r1); // lwz @ 0x805CAA14
    return;
}