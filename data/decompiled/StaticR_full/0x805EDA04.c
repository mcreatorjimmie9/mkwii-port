/* Function at 0x805EDA04, size=220 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805EDA04(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805EDA18
    r30 = r3;
    r0 = *(0x28 + r3); // lwz @ 0x805EDA20
    if (!=) goto 0x0x805edaec;
    r0 = *(4 + r3); // lwz @ 0x805EDA2C
    /* rlwinm. r0, r0, 0, 0x14, 0x14 */ // 0x805EDA30
    if (==) goto 0x0x805eda94;
    r0 = *(0x3c + r3); // lwz @ 0x805EDA38
    /* li r3, 0 */ // 0x805EDA3C
    if (==) goto 0x0x805eda54;
    if (==) goto 0x0x805eda60;
    /* b 0x805eda6c */ // 0x805EDA50
    /* lis r3, 0 */ // 0x805EDA54
    r3 = *(0 + r3); // lwz @ 0x805EDA58
    /* b 0x805eda6c */ // 0x805EDA5C
    /* lis r3, 0 */ // 0x805EDA60
    r3 = r3 + 0; // 0x805EDA64
    r3 = *(4 + r3); // lwz @ 0x805EDA68
    r4 = *(0x10 + r3); // lwz @ 0x805EDA6C
    /* li r3, 0x44 */ // 0x805EDA70
    /* li r5, 4 */ // 0x805EDA74
    FUN_805E3430(r3, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805edae8;
    r4 = r30;
    /* li r5, 2 */ // 0x805EDA88
    FUN_805E7A18(r4, r5); // bl 0x805E7A18
    /* b 0x805edae8 */ // 0x805EDA90
    r0 = *(0x3c + r3); // lwz @ 0x805EDA94
    /* li r3, 0 */ // 0x805EDA98
    if (==) goto 0x0x805edab0;
    if (==) goto 0x0x805edabc;
    /* b 0x805edac8 */ // 0x805EDAAC
    /* lis r3, 0 */ // 0x805EDAB0
    r3 = *(0 + r3); // lwz @ 0x805EDAB4
    /* b 0x805edac8 */ // 0x805EDAB8
    /* lis r3, 0 */ // 0x805EDABC
    r3 = r3 + 0; // 0x805EDAC0
    r3 = *(4 + r3); // lwz @ 0x805EDAC4
    r4 = *(0x10 + r3); // lwz @ 0x805EDAC8
    /* li r3, 0x3c */ // 0x805EDACC
    /* li r5, 4 */ // 0x805EDAD0
    FUN_805E3430(r3, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805edae8;
}