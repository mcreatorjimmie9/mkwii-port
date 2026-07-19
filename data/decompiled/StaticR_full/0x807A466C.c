/* Function at 0x807A466C, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_807A466C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807A4674
    *(0xc + r1) = r31; // stw @ 0x807A467C
    *(8 + r1) = r30; // stw @ 0x807A4680
    r31 = *(0 + r4); // lwz @ 0x807A4684
    if (==) goto 0x0x807a4708;
    /* li r0, 0 */ // 0x807A4690
    *(0 + r4) = r0; // stw @ 0x807A4694
    if (==) goto 0x0x807a4708;
    if (==) goto 0x0x807a4700;
    /* lis r3, 0 */ // 0x807A46A0
    r3 = r3 + 0; // 0x807A46A4
    *(0 + r31) = r3; // stw @ 0x807A46A8
    r30 = *(0 + r4); // lwz @ 0x807A46AC
    if (==) goto 0x0x807a46f4;
    *(0 + r4) = r0; // stw @ 0x807A46B8
    if (==) goto 0x0x807a46f4;
    if (==) goto 0x0x807a46ec;
    *(0 + r30) = r3; // stw @ 0x807A46C4
    r3 = *(0 + r4); // lwz @ 0x807A46C8
    if (==) goto 0x0x807a46e0;
    *(0 + r4) = r0; // stw @ 0x807A46D4
    /* li r4, 1 */ // 0x807A46D8
    FUN_807A4778(r4); // bl 0x807A4778
    r3 = r30;
    /* li r4, 0 */ // 0x807A46E4
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x807A46F8
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x807A4708
    r31 = *(0xc + r1); // lwz @ 0x807A470C
    r30 = *(8 + r1); // lwz @ 0x807A4710
    return;
}