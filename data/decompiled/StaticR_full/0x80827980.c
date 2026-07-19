/* Function at 0x80827980, size=68 bytes */
/* Stack frame: 0 bytes */

int FUN_80827980(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* lis r6, 0 */ // 0x80827980
    r8 = *(0 + r5); // lhz @ 0x80827984
    r0 = *(0 + r6); // lwz @ 0x80827988
    r9 = r4;
    r7 = r5;
    /* clrlwi r0, r0, 0x10 */ // 0x80827994
    /* subf r0, r8, r0 */ // 0x80827998
    /* extsh r6, r0 */ // 0x8082799C
    if (<=) goto 0x0x808279ac;
    /* li r6, 0x200 */ // 0x808279A8
    /* lis r5, 0 */ // 0x808279AC
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x808279B4
    r5 = r9;
    /* li r8, 0 */ // 0x808279BC
    /* b 0x80827140 */ // 0x808279C0
}