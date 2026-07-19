/* Function at 0x805D8910, size=312 bytes */
/* Stack frame: 0 bytes */

int FUN_805D8910(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    r7 = *(8 + r5); // lwz @ 0x805D8910
    r0 = r7 + -2; // 0x805D8914
    if (>) goto 0x0x805d8928;
    /* li r7, 0 */ // 0x805D8920
    /* b 0x805d894c */ // 0x805D8924
    /* lis r6, 0 */ // 0x805D8928
    /* slwi r0, r7, 2 */ // 0x805D892C
    r6 = r6 + 0; // 0x805D8930
    /* mulli r7, r4, 0x42 */ // 0x805D8934
    /* lwzx r0, r6, r0 */ // 0x805D8938
    r0 = r7 + r0; // 0x805D893C
    /* mulli r6, r0, 0x2800 */ // 0x805D8940
    /* addis r7, r6, 3 */ // 0x805D8944
    r7 = r7 + -0x8000; // 0x805D8948
    /* lis r6, 1 */ // 0x805D894C
    *(0x20 + r3) = r7; // stw @ 0x805D8950
    r0 = r6 + -0x6c10; // 0x805D8954
    /* li r8, 0 */ // 0x805D8958
    r0 = r4 * r0; // 0x805D895C
    *(0x28 + r3) = r5; // stw @ 0x805D8960
    /* li r6, 1 */ // 0x805D8964
    r4 = r3 + r0; // 0x805D8968
    r7 = r4 + 0x38; // 0x805D896C
    /* b 0x805d8a14 */ // 0x805D8970
    r0 = *(8 + r5); // lwz @ 0x805D8974
    /* li r9, 0 */ // 0x805D8978
    if (<) goto 0x0x805d898c;
    if (<=) goto 0x0x805d8a00;
    if (==) goto 0x0x805d89a8;
    if (==) goto 0x0x805d89c8;
    if (==) goto 0x0x805d89e8;
    /* b 0x805d8a04 */ // 0x805D89A4
    /* addis r4, r7, 1 */ // 0x805D89A8
    /* clrlwi r0, r8, 0x18 */ // 0x805D89AC
    r4 = *(-0x6da0 + r4); // lwz @ 0x805D89B0
    r0 = r6 << r0; // slw
    /* and. r0, r4, r0 */ // 0x805D89B8
    if (==) goto 0x0x805d8a04;
    /* li r9, 1 */ // 0x805D89C0
    /* b 0x805d8a04 */ // 0x805D89C4
    /* addis r4, r7, 1 */ // 0x805D89C8
    /* clrlwi r0, r8, 0x18 */ // 0x805D89CC
    r4 = *(-0x6d9c + r4); // lwz @ 0x805D89D0
    r0 = r6 << r0; // slw
    /* and. r0, r4, r0 */ // 0x805D89D8
    if (==) goto 0x0x805d8a04;
    /* li r9, 1 */ // 0x805D89E0
    /* b 0x805d8a04 */ // 0x805D89E4
    /* addis r4, r7, 1 */ // 0x805D89E8
    r0 = *(-0x6d98 + r4); // lbz @ 0x805D89EC
    if (==) goto 0x0x805d8a04;
    /* li r9, 1 */ // 0x805D89F8
    /* b 0x805d8a04 */ // 0x805D89FC
    /* li r9, 1 */ // 0x805D8A00
    r4 = *(0x10 + r5); // lwz @ 0x805D8A04
    /* clrlwi r0, r8, 0x10 */ // 0x805D8A08
    r8 = r8 + 1; // 0x805D8A0C
    /* stbx r9, r4, r0 */ // 0x805D8A10
    r0 = *(4 + r5); // lhz @ 0x805D8A14
    /* clrlwi r4, r8, 0x10 */ // 0x805D8A18
    if (<) goto 0x0x805d8974;
    /* addis r5, r3, 2 */ // 0x805D8A24
    /* li r0, 1 */ // 0x805D8A28
    /* lis r4, 0 */ // 0x805D8A2C
    *(0x5000 + r5) = r0; // stb @ 0x805D8A30
    r3 = *(0x1c + r3); // lwz @ 0x805D8A34
    r4 = r4 + 0; // 0x805D8A38
    /* li r5, 0 */ // 0x805D8A3C
    /* li r6, 0 */ // 0x805D8A40
    /* b 0x805e3430 */ // 0x805D8A44
}