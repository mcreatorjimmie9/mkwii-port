/* Function at 0x80647734, size=192 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80647734(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x8064773C
    *(0x14 + r1) = r0; // stw @ 0x80647740
    r3 = *(0 + r3); // lwz @ 0x80647744
    r3 = *(0 + r3); // lwz @ 0x80647748
    r0 = *(0 + r3); // lwz @ 0x8064774C
    if (==) goto 0x0x806477e0;
    if (>=) goto 0x0x80647788;
    if (>=) goto 0x0x80647778;
    if (>=) goto 0x0x806477e0;
    if (>=) goto 0x0x806477b4;
    /* b 0x806477e0 */ // 0x80647774
    if (==) goto 0x0x806477e0;
    if (>=) goto 0x0x806477b4;
    /* b 0x806477bc */ // 0x80647784
    if (==) goto 0x0x806477b4;
    if (>=) goto 0x0x806477a0;
    if (>=) goto 0x0x806477e0;
    /* b 0x806477b4 */ // 0x8064779C
    if (>=) goto 0x0x806477e0;
    if (>=) goto 0x0x806477b4;
    /* b 0x806477e0 */ // 0x806477B0
    /* li r3, 1 */ // 0x806477B4
    /* b 0x806477e4 */ // 0x806477B8
    FUN_808CFA50(r3); // bl 0x808CFA50
    /* clrlwi r4, r3, 0x18 */ // 0x806477C0
    /* li r3, 2 */ // 0x806477C4
    r0 = r4 + -2; // 0x806477C8
    /* orc r3, r4, r3 */ // 0x806477CC
    /* srwi r0, r0, 1 */ // 0x806477D0
    /* subf r0, r0, r3 */ // 0x806477D4
    /* srwi r3, r0, 0x1f */ // 0x806477D8
    /* b 0x806477e4 */ // 0x806477DC
    /* li r3, 0 */ // 0x806477E0
    r0 = *(0x14 + r1); // lwz @ 0x806477E4
    return;
}