/* Function at 0x808CFD38, size=280 bytes */
/* Stack frame: 0 bytes */

int FUN_808CFD38(int r3, int r5, int r6, int r7, int r8, int r9, int r10)
{
    r0 = *(4 + r3); // lhz @ 0x808CFD38
    if (<=) goto 0x0x808cfd54;
    /* li r5, 0x63 */ // 0x808CFD44
    /* li r6, 0x3b */ // 0x808CFD48
    /* li r7, 0x3e7 */ // 0x808CFD4C
    /* b 0x808cfd60 */ // 0x808CFD50
    r6 = *(6 + r3); // lbz @ 0x808CFD54
    /* clrlwi r5, r0, 0x18 */ // 0x808CFD58
    r7 = *(8 + r3); // lhz @ 0x808CFD5C
    /* lis r3, 0x6666 */ // 0x808CFD60
    /* li r9, 0x258a */ // 0x808CFD64
    r3 = r3 + 0x6667; // 0x808CFD68
    *(0x2c + r4) = r9; // stw @ 0x808CFD6C
    /* mulhw r10, r3, r5 */ // 0x808CFD70
    /* li r0, 0x258b */ // 0x808CFD74
    /* lis r8, 0x51ec */ // 0x808CFD78
    *(0x38 + r4) = r0; // stw @ 0x808CFD7C
    r8 = r8 + -0x7ae1; // 0x808CFD80
    r11 = r10 >> 2; // srawi
    r0 = r10 >> 2; // srawi
    /* srwi r12, r11, 0x1f */ // 0x808CFD8C
    /* srwi r10, r0, 0x1f */ // 0x808CFD90
    /* mulhw r9, r3, r6 */ // 0x808CFD94
    r11 = r11 + r12; // 0x808CFD98
    r0 = r0 + r10; // 0x808CFD9C
    *(0x24 + r4) = r10; // stw @ 0x808CFDA4
    r11 = r9 >> 2; // srawi
    r9 = r9 >> 2; // srawi
    /* mulhw r8, r8, r7 */ // 0x808CFDB0
    /* srwi r12, r11, 0x1f */ // 0x808CFDB4
    /* srwi r10, r9, 0x1f */ // 0x808CFDB8
    r11 = r11 + r12; // 0x808CFDBC
    r12 = r9 + r10; // 0x808CFDC0
    /* mulhw r10, r3, r7 */ // 0x808CFDC8
    r8 = r8 >> 5; // srawi
    *(0x30 + r4) = r9; // stw @ 0x808CFDD0
    /* srwi r9, r8, 0x1f */ // 0x808CFDD4
    r9 = r8 + r9; // 0x808CFDD8
    r8 = r10 >> 2; // srawi
    *(0x3c + r4) = r11; // stw @ 0x808CFDE4
    /* srwi r9, r8, 0x1f */ // 0x808CFDE8
    r11 = r8 + r9; // 0x808CFDEC
    /* mulhw r3, r3, r11 */ // 0x808CFDF0
    r9 = r3 >> 2; // srawi
    r3 = r10 >> 2; // srawi
    /* srwi r8, r3, 0x1f */ // 0x808CFDFC
    /* srwi r10, r9, 0x1f */ // 0x808CFE00
    r3 = r3 + r8; // 0x808CFE04
    /* mulli r8, r0, 0xa */ // 0x808CFE08
    r9 = r9 + r10; // 0x808CFE0C
    /* subf r8, r8, r5 */ // 0x808CFE10
    /* mulli r0, r12, 0xa */ // 0x808CFE14
    r8 = r8 + 0x2580; // 0x808CFE18
    *(0x28 + r4) = r8; // stw @ 0x808CFE1C
    /* mulli r5, r9, 0xa */ // 0x808CFE20
    /* subf r6, r0, r6 */ // 0x808CFE24
    /* mulli r0, r3, 0xa */ // 0x808CFE28
    r3 = r6 + 0x2580; // 0x808CFE2C
    /* subf r5, r5, r11 */ // 0x808CFE30
    *(0x34 + r4) = r3; // stw @ 0x808CFE34
    /* subf r3, r0, r7 */ // 0x808CFE38
    r5 = r5 + 0x2580; // 0x808CFE3C
    r0 = r3 + 0x2580; // 0x808CFE40
    *(0x40 + r4) = r5; // stw @ 0x808CFE44
    *(0x44 + r4) = r0; // stw @ 0x808CFE48
    return;
}