/* Function at 0x805D76F0, size=204 bytes */
/* Stack frame: 0 bytes */

int FUN_805D76F0(int r3, int r4, int r5, int r6)
{
    /* li r0, 2 */ // 0x805D76F0
    /* li r6, 0 */ // 0x805D76F4
    /* mtctr r0 */ // 0x805D76F8
    /* clrlwi r0, r6, 0x18 */ // 0x805D76FC
    /* mulli r5, r0, 0x384 */ // 0x805D7700
    r5 = r3 + r5; // 0x805D7704
    r5 = *(8 + r5); // lwz @ 0x805D7708
    if (!=) goto 0x0x805d771c;
    r3 = r0;
    return;
    r6 = r6 + 1; // 0x805D771C
    /* clrlwi r0, r6, 0x18 */ // 0x805D7720
    /* mulli r5, r0, 0x384 */ // 0x805D7724
    r5 = r3 + r5; // 0x805D7728
    r5 = *(8 + r5); // lwz @ 0x805D772C
    if (!=) goto 0x0x805d7740;
    r3 = r0;
    return;
    r6 = r6 + 1; // 0x805D7740
    /* clrlwi r0, r6, 0x18 */ // 0x805D7744
    /* mulli r5, r0, 0x384 */ // 0x805D7748
    r5 = r3 + r5; // 0x805D774C
    r5 = *(8 + r5); // lwz @ 0x805D7750
    if (!=) goto 0x0x805d7764;
    r3 = r0;
    return;
    r6 = r6 + 1; // 0x805D7764
    /* clrlwi r0, r6, 0x18 */ // 0x805D7768
    /* mulli r5, r0, 0x384 */ // 0x805D776C
    r5 = r3 + r5; // 0x805D7770
    r5 = *(8 + r5); // lwz @ 0x805D7774
    if (!=) goto 0x0x805d7788;
    r3 = r0;
    return;
    r6 = r6 + 1; // 0x805D7788
    /* clrlwi r0, r6, 0x18 */ // 0x805D778C
    /* mulli r5, r0, 0x384 */ // 0x805D7790
    r5 = r3 + r5; // 0x805D7794
    r5 = *(8 + r5); // lwz @ 0x805D7798
    if (!=) goto 0x0x805d77ac;
    r3 = r0;
    return;
    r6 = r6 + 1; // 0x805D77AC
    if (counter-- != 0) goto 0x0x805d76fc;
    /* li r3, -1 */ // 0x805D77B4
    return;
}