/* Function at 0x805BECE0, size=412 bytes */
/* Stack frame: 0 bytes */

int FUN_805BECE0(int r3, int r7, int r8, int r9, int r10)
{
    /* li r0, 3 */ // 0x805BECE0
    /* li r8, 0 */ // 0x805BECE4
    /* li r9, 0 */ // 0x805BECE8
    /* li r10, 0 */ // 0x805BECEC
    /* li r11, 0 */ // 0x805BECF0
    /* mtctr r0 */ // 0x805BECF4
    /* clrlwi r0, r11, 0x18 */ // 0x805BECF8
    /* mulli r0, r0, 0xf0 */ // 0x805BECFC
    r7 = r3 + r0; // 0x805BED00
    r0 = *(0x18 + r7); // lwz @ 0x805BED04
    if (==) goto 0x0x805bed30;
    r8 = r8 + 1; // 0x805BED14
    if (!=) goto 0x0x805bed30;
    if (>=) goto 0x0x805bed2c;
    r0 = r9 + 1; // 0x805BED24
    /* clrlwi r9, r0, 0x18 */ // 0x805BED28
    /* clrlwi r0, r11, 0x18 */ // 0x805BED34
    /* mulli r0, r0, 0xf0 */ // 0x805BED38
    r7 = r3 + r0; // 0x805BED3C
    r0 = *(0x18 + r7); // lwz @ 0x805BED40
    if (==) goto 0x0x805bed6c;
    r8 = r8 + 1; // 0x805BED50
    if (!=) goto 0x0x805bed6c;
    if (>=) goto 0x0x805bed68;
    r0 = r9 + 1; // 0x805BED60
    /* clrlwi r9, r0, 0x18 */ // 0x805BED64
    /* clrlwi r0, r11, 0x18 */ // 0x805BED70
    /* mulli r0, r0, 0xf0 */ // 0x805BED74
    r7 = r3 + r0; // 0x805BED78
    r0 = *(0x18 + r7); // lwz @ 0x805BED7C
    if (==) goto 0x0x805beda8;
    r8 = r8 + 1; // 0x805BED8C
    if (!=) goto 0x0x805beda8;
    if (>=) goto 0x0x805beda4;
    r0 = r9 + 1; // 0x805BED9C
    /* clrlwi r9, r0, 0x18 */ // 0x805BEDA0
    /* clrlwi r0, r11, 0x18 */ // 0x805BEDAC
    /* mulli r0, r0, 0xf0 */ // 0x805BEDB0
    r7 = r3 + r0; // 0x805BEDB4
    r0 = *(0x18 + r7); // lwz @ 0x805BEDB8
    if (==) goto 0x0x805bede4;
    r8 = r8 + 1; // 0x805BEDC8
    if (!=) goto 0x0x805bede4;
    if (>=) goto 0x0x805bede0;
    r0 = r9 + 1; // 0x805BEDD8
    /* clrlwi r9, r0, 0x18 */ // 0x805BEDDC
    if (counter-- != 0) goto 0x0x805becf8;
    if (!=) goto 0x0x805bedf8;
    /* li r9, 1 */ // 0x805BEDF4
    if (!=) goto 0x0x805bee04;
    /* li r9, 4 */ // 0x805BEE00
    r7 = *(0xb54 + r3); // lwz @ 0x805BEE04
    if (!=) goto 0x0x805bee18;
    /* li r9, 1 */ // 0x805BEE10
    /* b 0x805bee34 */ // 0x805BEE14
    if (!=) goto 0x0x805bee28;
    /* li r9, 2 */ // 0x805BEE20
    /* b 0x805bee34 */ // 0x805BEE24
    if (!=) goto 0x0x805bee34;
    /* li r9, 4 */ // 0x805BEE30
    r0 = *(0xb50 + r3); // lwz @ 0x805BEE34
    if (!=) goto 0x0x805bee6c;
    if (!=) goto 0x0x805bee5c;
    /* clrlwi r0, r8, 0x18 */ // 0x805BEE48
    if (<=) goto 0x0x805bee6c;
    /* li r8, 3 */ // 0x805BEE54
    /* b 0x805bee6c */ // 0x805BEE58
    /* clrlwi r0, r8, 0x18 */ // 0x805BEE5C
    if (<=) goto 0x0x805bee6c;
    /* li r8, 6 */ // 0x805BEE68
    *(0 + r4) = r8; // stb @ 0x805BEE6C
    *(0 + r5) = r9; // stb @ 0x805BEE70
    *(0 + r6) = r10; // stb @ 0x805BEE74
    return;
}