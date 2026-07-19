/* Function at 0x806CCC54, size=508 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806CCC54(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806CCC5C
    *(0x14 + r1) = r0; // stw @ 0x806CCC60
    *(0xc + r1) = r31; // stw @ 0x806CCC64
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x806CCC6C
    r4 = *(0 + r4); // lwz @ 0x806CCC70
    r0 = *(0 + r4); // lwz @ 0x806CCC74
    if (==) goto 0x0x806cce38;
    if (>=) goto 0x0x806cccdc;
    if (==) goto 0x0x806ccd3c;
    if (>=) goto 0x0x806cccc0;
    if (>=) goto 0x0x806cccac;
    if (>=) goto 0x0x806cce38;
    if (>=) goto 0x0x806ccd2c;
    /* b 0x806cce38 */ // 0x806CCCA8
    if (>=) goto 0x0x806ccd2c;
    if (>=) goto 0x0x806ccd60;
    /* b 0x806ccd2c */ // 0x806CCCBC
    if (==) goto 0x0x806ccd60;
    if (>=) goto 0x0x806ccd2c;
    if (==) goto 0x0x806ccd3c;
    if (>=) goto 0x0x806cce38;
    /* b 0x806ccd2c */ // 0x806CCCD8
    if (==) goto 0x0x806cce38;
    if (>=) goto 0x0x806ccd10;
    if (>=) goto 0x0x806ccd04;
    if (>=) goto 0x0x806ccd60;
    if (>=) goto 0x0x806ccd2c;
    /* b 0x806ccd60 */ // 0x806CCD00
    if (>=) goto 0x0x806ccd3c;
    /* b 0x806cce38 */ // 0x806CCD0C
    if (>=) goto 0x0x806ccd24;
    if (>=) goto 0x0x806cce38;
    /* b 0x806ccd2c */ // 0x806CCD20
    if (>=) goto 0x0x806cce38;
    if (!=) goto 0x0x806cce38;
    /* li r3, 0 */ // 0x806CCD34
    /* b 0x806cce3c */ // 0x806CCD38
    if (==) goto 0x0x806ccd50;
    if (==) goto 0x0x806ccd58;
    /* b 0x806cce38 */ // 0x806CCD4C
    /* li r3, 7 */ // 0x806CCD50
    /* b 0x806cce3c */ // 0x806CCD54
    /* li r3, 8 */ // 0x806CCD58
    /* b 0x806cce3c */ // 0x806CCD5C
    FUN_808CFA50(r3, r3); // bl 0x808CFA50
    /* clrlwi r0, r3, 0x18 */ // 0x806CCD64
    if (==) goto 0x0x806ccd8c;
    if (==) goto 0x0x806ccd9c;
    if (==) goto 0x0x806ccdc0;
    if (==) goto 0x0x806ccdf4;
    /* b 0x806cce38 */ // 0x806CCD88
    if (!=) goto 0x0x806cce38;
    /* li r3, 0 */ // 0x806CCD94
    /* b 0x806cce3c */ // 0x806CCD98
    if (==) goto 0x0x806ccdb0;
    if (==) goto 0x0x806ccdb8;
    /* b 0x806cce38 */ // 0x806CCDAC
    /* li r3, 1 */ // 0x806CCDB0
    /* b 0x806cce3c */ // 0x806CCDB4
    /* li r3, 2 */ // 0x806CCDB8
    /* b 0x806cce3c */ // 0x806CCDBC
    if (==) goto 0x0x806ccddc;
    if (==) goto 0x0x806ccde4;
    if (==) goto 0x0x806ccdec;
    /* b 0x806ccdf4 */ // 0x806CCDD8
    /* li r3, 3 */ // 0x806CCDDC
    /* b 0x806cce3c */ // 0x806CCDE0
    /* li r3, 4 */ // 0x806CCDE4
    /* b 0x806cce3c */ // 0x806CCDE8
    /* li r3, 5 */ // 0x806CCDEC
    /* b 0x806cce3c */ // 0x806CCDF0
    if (==) goto 0x0x806cce18;
    if (==) goto 0x0x806cce20;
    if (==) goto 0x0x806cce28;
    if (==) goto 0x0x806cce30;
    /* b 0x806cce38 */ // 0x806CCE14
    /* li r3, 3 */ // 0x806CCE18
    /* b 0x806cce3c */ // 0x806CCE1C
    /* li r3, 4 */ // 0x806CCE20
    /* b 0x806cce3c */ // 0x806CCE24
    /* li r3, 5 */ // 0x806CCE28
    /* b 0x806cce3c */ // 0x806CCE2C
    /* li r3, 6 */ // 0x806CCE30
    /* b 0x806cce3c */ // 0x806CCE34
    /* li r3, -1 */ // 0x806CCE38
    r0 = *(0x14 + r1); // lwz @ 0x806CCE3C
    r31 = *(0xc + r1); // lwz @ 0x806CCE40
    return;
}