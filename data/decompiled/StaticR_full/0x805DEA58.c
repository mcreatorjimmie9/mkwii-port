/* Function at 0x805DEA58, size=168 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805DEA58(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x805DEA68
    *(0x28 + r1) = r30; // stw @ 0x805DEA6C
    /* lis r30, 0 */ // 0x805DEA70
    *(0x24 + r1) = r29; // stw @ 0x805DEA74
    /* lis r29, 0 */ // 0x805DEA78
    r29 = r29 + 0; // 0x805DEA7C
    *(0x20 + r1) = r28; // stw @ 0x805DEA80
    *(8 + r1) = r3; // stw @ 0x805DEA84
    r28 = *(0xbc + r29); // lwz @ 0x805DEA88
    *(0xc + r1) = r31; // stw @ 0x805DEA8C
    FUN_805DEB04(r3); // bl 0x805DEB04
    r0 = *(0xc0 + r29); // lwz @ 0x805DEA98
    r5 = *(0x50 + r29); // lwz @ 0x805DEA9C
    r4 = r31 + r0; // 0x805DEAA0
    r3 = r4 u/ r5; // 0x805DEAA4
    r0 = r5 + -1; // 0x805DEAA8
    r3 = r3 * r5; // 0x805DEAAC
    /* subf r3, r3, r4 */ // 0x805DEAB0
    if (!=) goto 0x0x805deae8;
    r0 = *(0xa6 + r29); // lbz @ 0x805DEABC
    /* clrlwi. r0, r0, 0x1f */ // 0x805DEAC0
    if (==) goto 0x0x805deadc;
    r3 = *(8 + r1); // lwz @ 0x805DEAC8
    r0 = *(0xb4 + r29); // lwz @ 0x805DEACC
    r28 = *(0 + r3); // lwz @ 0x805DEAD0
    *(8 + r1) = r0; // stw @ 0x805DEAD4
    /* b 0x805deafc */ // 0x805DEAD8
    r3 = r30 + 0; // 0x805DEADC
    FUN_805E3430(r3); // bl 0x805E3430
    /* b 0x805deafc */ // 0x805DEAE4
    r3 = *(8 + r1); // lwz @ 0x805DEAE8
    r4 = *(0 + r3); // lwz @ 0x805DEAEC
    r0 = r3 + r28; // 0x805DEAF0
    *(8 + r1) = r0; // stw @ 0x805DEAF4
    r28 = r4;
    r31 = r31 + 1; // 0x805DEAFC
}