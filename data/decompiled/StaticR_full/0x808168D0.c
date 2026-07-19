/* Function at 0x808168D0, size=348 bytes */
/* Stack frame: 0 bytes */

void FUN_808168D0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* lfs f3, 8(r4) */ // 0x808168D0
    /* li r0, 0 */ // 0x808168D4
    /* lfs f2, 0(r4) */ // 0x808168D8
    /* li r6, 0 */ // 0x808168DC
    /* lfs f0, 4(r4) */ // 0x808168E0
    /* fadds f4, f3, f1 */ // 0x808168E4
    r8 = *(0x420 + r3); // lwz @ 0x808168E8
    /* fsubs f5, f3, f1 */ // 0x808168EC
    /* fadds f6, f2, f1 */ // 0x808168F0
    *(0x438 + r3) = r0; // stw @ 0x808168F4
    /* fsubs f7, f2, f1 */ // 0x808168F8
    *(0x43c + r3) = r0; // stw @ 0x808168FC
    r9 = r8 + -1; // 0x80816900
    /* stfs f2, 0x440(r3) */ // 0x80816904
    /* stfs f0, 0x444(r3) */ // 0x80816908
    /* stfs f3, 0x448(r3) */ // 0x8081690C
    /* stfs f1, 0x44c(r3) */ // 0x80816910
    *(0x450 + r3) = r5; // stw @ 0x80816914
    r10 = r0 + r9; // 0x80816918
    r11 = r6 + r9; // 0x8081691C
    if (>) goto 0x0x80816944;
    r7 = *(0x10 + r3); // lwz @ 0x80816928
    /* slwi r4, r10, 3 */ // 0x8081692C
    r4 = r7 + r4; // 0x80816930
    /* lfs f0, -8(r4) */ // 0x80816934
    /* .byte 0xfc, 0x05, 0x00, 0x40 */ // 0x80816938
    if (<=) goto 0x0x80816944;
    r0 = r10;
    if (>) goto 0x0x80816968;
    r7 = *(0x14 + r3); // lwz @ 0x8081694C
    /* slwi r4, r11, 3 */ // 0x80816950
    /* lfsx f0, r7, r4 */ // 0x80816954
    /* .byte 0xfc, 0x04, 0x00, 0x40 */ // 0x80816958
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8081695C
    if (!=) goto 0x0x80816968;
    r6 = r11;
    if (==) goto 0x0x8081697c;
    r4 = r9 + 1; // 0x80816970
    r9 = r4 >> 1; // srawi
    /* b 0x80816918 */ // 0x80816978
    r8 = *(0x10 + r3); // lwz @ 0x8081697C
    /* slwi r7, r0, 3 */ // 0x80816980
    r4 = r6 + 1; // 0x80816984
    /* slwi r9, r6, 3 */ // 0x80816988
    r7 = r8 + r7; // 0x8081698C
    r7 = *(5 + r7); // lbz @ 0x80816990
    /* subf r4, r7, r4 */ // 0x80816994
    /* mtctr r4 */ // 0x80816998
    /* bltlr  */ // 0x808169A0
    r4 = *(0x14 + r3); // lwz @ 0x808169A4
    r7 = r4 + r9; // 0x808169A8
    r4 = *(4 + r7); // lbz @ 0x808169AC
    if (<) goto 0x0x80816a14;
    r4 = *(5 + r7); // lbz @ 0x808169B8
    r7 = *(0x18 + r3); // lwz @ 0x808169BC
    /* slwi r4, r4, 5 */ // 0x808169C0
    r10 = r7 + r4; // 0x808169C4
    /* lfs f0, 0x18(r10) */ // 0x808169C8
    /* .byte 0xfc, 0x00, 0x38, 0x40 */ // 0x808169CC
    if (<) goto 0x0x80816a1c;
    /* lfs f0, 0x1c(r10) */ // 0x808169D4
    /* .byte 0xfc, 0x00, 0x30, 0x40 */ // 0x808169D8
    if (>) goto 0x0x80816a1c;
    r7 = *(0xc + r10); // lwz @ 0x808169E0
    /* and. r4, r7, r5 */ // 0x808169E4
    if (==) goto 0x0x80816a1c;
    /* rlwinm. r4, r7, 0, 0x16, 0x16 */ // 0x808169EC
    if (!=) goto 0x0x80816a1c;
    r7 = *(0x438 + r3); // lwz @ 0x808169F4
    r8 = *(0x1c + r3); // lwz @ 0x808169F8
    /* slwi r4, r7, 2 */ // 0x808169FC
    r7 = r7 + 1; // 0x80816A00
    /* stwx r10, r8, r4 */ // 0x80816A04
    *(0x438 + r3) = r7; // stw @ 0x80816A0C
    /* beqlr  */ // 0x80816A10
    /* beqlr  */ // 0x80816A18
    r9 = r9 + -8; // 0x80816A1C
    r6 = r6 + -1; // 0x80816A20
    if (counter-- != 0) goto 0x0x808169a4;
    return;
}