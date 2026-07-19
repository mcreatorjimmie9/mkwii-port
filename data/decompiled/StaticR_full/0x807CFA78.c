/* Function at 0x807CFA78, size=260 bytes */
/* Stack frame: 0 bytes */

int FUN_807CFA78(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    r5 = r3 + 1; // 0x807CFA78
    /* li r9, 1 */ // 0x807CFA7C
    /* cmpwi cr1, r5, 1 */
    /* li r10, 1 */ // 0x807CFA84
    if (<=) goto 0x0x807cfb74;
    r6 = r3 + -7; // 0x807CFA90
    if (<=) goto 0x0x807cfb54;
    /* li r7, 0 */ // 0x807CFA98
    /* li r8, 0 */ // 0x807CFA9C
    if (<) goto 0x0x807cfab8;
    /* lis r4, -0x8000 */ // 0x807CFAA4
    r0 = r4 + -2; // 0x807CFAA8
    if (>) goto 0x0x807cfab8;
    /* li r8, 1 */ // 0x807CFAB4
    if (==) goto 0x0x807cfaf4;
    r0 = r3 + 1; // 0x807CFAC0
    /* li r4, 1 */ // 0x807CFAC4
    r5 = r0 rlwinm 0; // rlwinm
    /* addis r0, r5, -0x8000 */ // 0x807CFACC
    if (!=) goto 0x0x807cfae8;
    r0 = r3 rlwinm 0; // rlwinm
    if (==) goto 0x0x807cfae8;
    /* li r4, 0 */ // 0x807CFAE4
    if (==) goto 0x0x807cfaf4;
    /* li r7, 1 */ // 0x807CFAF0
    if (==) goto 0x0x807cfb54;
    r0 = r6 + 6; // 0x807CFAFC
    /* srwi r0, r0, 3 */ // 0x807CFB00
    /* mtctr r0 */ // 0x807CFB04
    if (<=) goto 0x0x807cfb54;
    r9 = r9 * r10; // 0x807CFB10
    r9 = r9 * r0; // 0x807CFB28
    r9 = r9 * r8; // 0x807CFB38
    r9 = r9 * r7; // 0x807CFB3C
    r9 = r9 * r6; // 0x807CFB40
    r9 = r9 * r5; // 0x807CFB44
    r9 = r9 * r4; // 0x807CFB48
    r9 = r9 * r0; // 0x807CFB4C
    if (counter-- != 0) goto 0x0x807cfb10;
    r3 = r3 + 1; // 0x807CFB54
    /* subf r0, r10, r3 */ // 0x807CFB58
    /* mtctr r0 */ // 0x807CFB5C
    if (>=) goto 0x0x807cfb74;
    r9 = r9 * r10; // 0x807CFB68
    if (counter-- != 0) goto 0x0x807cfb68;
    r3 = r9;
    return;
}