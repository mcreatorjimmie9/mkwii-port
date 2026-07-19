/* Function at 0x80873DF8, size=260 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80873DF8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80873E00
    *(0xc + r1) = r31; // stw @ 0x80873E08
    *(8 + r1) = r30; // stw @ 0x80873E0C
    r30 = r3;
    r3 = *(0 + r4); // lwz @ 0x80873E14
    r3 = *(0 + r3); // lwz @ 0x80873E18
    r0 = *(0 + r3); // lwz @ 0x80873E1C
    if (==) goto 0x0x80873e38;
    if (==) goto 0x0x80873e38;
    if (!=) goto 0x0x80873e68;
    /* lis r3, 0 */ // 0x80873E38
    r4 = *(0 + r3); // lwz @ 0x80873E3C
    r0 = *(0x1760 + r4); // lwz @ 0x80873E40
    if (!=) goto 0x0x80873e68;
    r0 = *(0x1780 + r4); // lwz @ 0x80873E4C
    r3 = r30;
    r4 = *(0x175c + r4); // lwz @ 0x80873E54
    /* li r6, 0 */ // 0x80873E58
    /* clrlwi r5, r0, 0x1f */ // 0x80873E5C
    FUN_805E4A80(r3, r6); // bl 0x805E4A80
    /* b 0x80873ee4 */ // 0x80873E64
    r3 = r30;
    /* li r31, 0 */ // 0x80873E6C
    /* li r4, 0 */ // 0x80873E70
    /* li r5, 0 */ // 0x80873E74
    /* li r6, 0 */ // 0x80873E78
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x80873edc;
    r3 = r30;
    /* li r4, 1 */ // 0x80873E8C
    /* li r5, 0 */ // 0x80873E90
    /* li r6, 0 */ // 0x80873E94
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x80873edc;
    r3 = r30;
    /* li r4, 2 */ // 0x80873EA8
    /* li r5, 0 */ // 0x80873EAC
    /* li r6, 0 */ // 0x80873EB0
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x80873edc;
    r3 = r30;
    /* li r4, 2 */ // 0x80873EC4
    /* li r5, 1 */ // 0x80873EC8
    /* li r6, 0 */ // 0x80873ECC
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (==) goto 0x0x80873ee0;
    /* li r31, 1 */ // 0x80873EDC
    r3 = r31;
    r0 = *(0x14 + r1); // lwz @ 0x80873EE4
    r31 = *(0xc + r1); // lwz @ 0x80873EE8
    r30 = *(8 + r1); // lwz @ 0x80873EEC
    return;
}