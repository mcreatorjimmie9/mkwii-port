/* Function at 0x806EF8F8, size=528 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806EF8F8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x806EF90C
    /* lis r30, 0 */ // 0x806EF910
    r3 = *(0 + r30); // lwz @ 0x806EF914
    FUN_806E6B18(); // bl 0x806E6B18
    if (!=) goto 0x0x806ef92c;
    /* li r3, 0 */ // 0x806EF924
    /* b 0x806ef974 */ // 0x806EF928
    r5 = *(8 + r31); // lwz @ 0x806EF92C
    if (==) goto 0x0x806ef970;
    r3 = *(0 + r30); // lwz @ 0x806EF938
    /* li r4, 1 */ // 0x806EF93C
    r0 = *(0x291c + r3); // lwz @ 0x806EF940
    /* mulli r0, r0, 0x58 */ // 0x806EF944
    r3 = r3 + r0; // 0x806EF948
    r0 = *(0x59 + r3); // lbz @ 0x806EF94C
    r3 = *(0x48 + r3); // lwz @ 0x806EF950
    r0 = r4 << r0; // slw
    r0 = r5 | r0; // 0x806EF958
    r0 = r3 & r0; // 0x806EF95C
    /* subf r0, r3, r0 */ // 0x806EF960
    /* cntlzw r0, r0 */ // 0x806EF964
    /* srwi r3, r0, 5 */ // 0x806EF968
    /* b 0x806ef974 */ // 0x806EF96C
    /* li r3, 0 */ // 0x806EF970
    if (==) goto 0x0x806efaf0;
    /* li r0, 3 */ // 0x806EF97C
    /* li r3, 0 */ // 0x806EF980
    /* mtctr r0 */ // 0x806EF984
    /* clrlwi r0, r3, 0x18 */ // 0x806EF988
    /* mulli r0, r0, 0x30 */ // 0x806EF98C
    r4 = r31 + r0; // 0x806EF990
    r5 = *(0x34 + r4); // lwz @ 0x806EF994
    if (>) goto 0x0x806ef9a8;
    r0 = r5;
    /* b 0x806ef9ac */ // 0x806EF9A4
    /* li r0, -1 */ // 0x806EF9A8
    if (==) goto 0x0x806ef9d8;
    r0 = *(0x20 + r4); // lwz @ 0x806EF9B4
    if (==) goto 0x0x806ef9d8;
    if (>) goto 0x0x806ef9d0;
    r4 = *(0x34 + r4); // lwz @ 0x806EF9C8
    /* b 0x806efae0 */ // 0x806EF9CC
    /* li r4, -1 */ // 0x806EF9D0
    /* b 0x806efae0 */ // 0x806EF9D4
    r3 = r3 + 1; // 0x806EF9D8
    /* clrlwi r0, r3, 0x18 */ // 0x806EF9DC
    /* mulli r0, r0, 0x30 */ // 0x806EF9E0
    r4 = r31 + r0; // 0x806EF9E4
    r5 = *(0x34 + r4); // lwz @ 0x806EF9E8
    if (>) goto 0x0x806ef9fc;
    r0 = r5;
    /* b 0x806efa00 */ // 0x806EF9F8
    /* li r0, -1 */ // 0x806EF9FC
    if (==) goto 0x0x806efa2c;
    r0 = *(0x20 + r4); // lwz @ 0x806EFA08
    if (==) goto 0x0x806efa2c;
    if (>) goto 0x0x806efa24;
    r4 = *(0x34 + r4); // lwz @ 0x806EFA1C
    /* b 0x806efae0 */ // 0x806EFA20
    /* li r4, -1 */ // 0x806EFA24
    /* b 0x806efae0 */ // 0x806EFA28
    r3 = r3 + 1; // 0x806EFA2C
    /* clrlwi r0, r3, 0x18 */ // 0x806EFA30
    /* mulli r0, r0, 0x30 */ // 0x806EFA34
    r4 = r31 + r0; // 0x806EFA38
    r5 = *(0x34 + r4); // lwz @ 0x806EFA3C
    if (>) goto 0x0x806efa50;
    r0 = r5;
    /* b 0x806efa54 */ // 0x806EFA4C
    /* li r0, -1 */ // 0x806EFA50
    if (==) goto 0x0x806efa80;
    r0 = *(0x20 + r4); // lwz @ 0x806EFA5C
    if (==) goto 0x0x806efa80;
    if (>) goto 0x0x806efa78;
    r4 = *(0x34 + r4); // lwz @ 0x806EFA70
    /* b 0x806efae0 */ // 0x806EFA74
    /* li r4, -1 */ // 0x806EFA78
    /* b 0x806efae0 */ // 0x806EFA7C
    r3 = r3 + 1; // 0x806EFA80
    /* clrlwi r0, r3, 0x18 */ // 0x806EFA84
    /* mulli r0, r0, 0x30 */ // 0x806EFA88
    r4 = r31 + r0; // 0x806EFA8C
    r5 = *(0x34 + r4); // lwz @ 0x806EFA90
    if (>) goto 0x0x806efaa4;
    r0 = r5;
    /* b 0x806efaa8 */ // 0x806EFAA0
    /* li r0, -1 */ // 0x806EFAA4
    if (==) goto 0x0x806efad4;
    r0 = *(0x20 + r4); // lwz @ 0x806EFAB0
    if (==) goto 0x0x806efad4;
    if (>) goto 0x0x806efacc;
    r4 = *(0x34 + r4); // lwz @ 0x806EFAC4
    /* b 0x806efae0 */ // 0x806EFAC8
    /* li r4, -1 */ // 0x806EFACC
    /* b 0x806efae0 */ // 0x806EFAD0
    r3 = r3 + 1; // 0x806EFAD4
    if (counter-- != 0) goto 0x0x806ef988;
    /* li r4, -1 */ // 0x806EFADC
    /* subfic r3, r4, -1 */ // 0x806EFAE0
    r0 = r4 + 1; // 0x806EFAE4
    r0 = r3 | r0; // 0x806EFAE8
    /* srwi r3, r0, 0x1f */ // 0x806EFAEC
    r0 = *(0x14 + r1); // lwz @ 0x806EFAF0
    r31 = *(0xc + r1); // lwz @ 0x806EFAF4
    r30 = *(8 + r1); // lwz @ 0x806EFAF8
    return;
}