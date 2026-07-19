/* Function at 0x807A9980, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_807A9980(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807A9988
    *(0xc + r1) = r31; // stw @ 0x807A9990
    *(8 + r1) = r30; // stw @ 0x807A9994
    r31 = *(0 + r4); // lwz @ 0x807A9998
    if (==) goto 0x0x807a9a1c;
    /* li r0, 0 */ // 0x807A99A4
    *(0 + r4) = r0; // stw @ 0x807A99A8
    if (==) goto 0x0x807a9a1c;
    if (==) goto 0x0x807a9a14;
    /* lis r3, 0 */ // 0x807A99B4
    r3 = r3 + 0; // 0x807A99B8
    *(0 + r31) = r3; // stw @ 0x807A99BC
    r30 = *(0 + r4); // lwz @ 0x807A99C0
    if (==) goto 0x0x807a9a08;
    *(0 + r4) = r0; // stw @ 0x807A99CC
    if (==) goto 0x0x807a9a08;
    if (==) goto 0x0x807a9a00;
    *(0 + r30) = r3; // stw @ 0x807A99D8
    r3 = *(0 + r4); // lwz @ 0x807A99DC
    if (==) goto 0x0x807a99f4;
    *(0 + r4) = r0; // stw @ 0x807A99E8
    /* li r4, 1 */ // 0x807A99EC
    FUN_807A9B70(r4); // bl 0x807A9B70
    r3 = r30;
    /* li r4, 0 */ // 0x807A99F8
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x807A9A0C
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x807A9A1C
    r31 = *(0xc + r1); // lwz @ 0x807A9A20
    r30 = *(8 + r1); // lwz @ 0x807A9A24
    return;
}