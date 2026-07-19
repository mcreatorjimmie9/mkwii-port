/* Function at 0x808BFF08, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808BFF08(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x808BFF1C
    r29 = r3;
    r4 = *(0xd98 + r3); // lwz @ 0x808BFF24
    if (<=) goto 0x0x808bff74;
    r0 = r4 + -0xa; // 0x808BFF30
    *(0xd98 + r3) = r0; // stw @ 0x808BFF34
    /* clrlwi r4, r0, 0x18 */ // 0x808BFF38
    FUN_808C015C(); // bl 0x808C015C
    /* li r30, 0 */ // 0x808BFF40
    /* li r31, 1 */ // 0x808BFF44
    r3 = *(0x6bc + r29); // lwz @ 0x808BFF48
    r0 = r31 << r30; // slw
    /* and. r0, r3, r0 */ // 0x808BFF50
    if (==) goto 0x0x808bff68;
    r3 = *(0x48 + r29); // lwz @ 0x808BFF58
    r4 = r30;
    r3 = *(0x24 + r3); // lwz @ 0x808BFF60
    FUN_80649F40(r4); // bl 0x80649F40
    r30 = r30 + 1; // 0x808BFF68
    if (<) goto 0x0x808bff48;
    r0 = *(0xd9c + r29); // lwz @ 0x808BFF74
    if (==) goto 0x0x808bff94;
    if (==) goto 0x0x808bffa4;
    if (==) goto 0x0x808bffac;
    /* b 0x808bffbc */ // 0x808BFF90
    /* lis r3, 0 */ // 0x808BFF94
    r3 = *(0 + r3); // lwz @ 0x808BFF98
    r6 = *(0x2d4 + r3); // lbz @ 0x808BFF9C
    /* b 0x808bffc0 */ // 0x808BFFA0
    /* li r6, 6 */ // 0x808BFFA4
    /* b 0x808bffc0 */ // 0x808BFFA8
    /* lis r3, 0 */ // 0x808BFFAC
    r3 = *(0 + r3); // lwz @ 0x808BFFB0
    r6 = *(0x2e8 + r3); // lbz @ 0x808BFFB4
    /* b 0x808bffc0 */ // 0x808BFFB8
    /* li r6, 0 */ // 0x808BFFBC
    r7 = *(0xd98 + r29); // lwz @ 0x808BFFC0
    r3 = r29 + 0x6c4; // 0x808BFFC4
    r0 = r7 + 0xa; // 0x808BFFC8
    /* neg r5, r7 */ // 0x808BFFCC
    r0 = r6 ^ r0; // 0x808BFFD0
    r4 = r0 >> 1; // srawi
    /* andc r5, r5, r7 */ // 0x808BFFD8
    r0 = r0 & r6; // 0x808BFFDC
    /* subf r0, r0, r4 */ // 0x808BFFE0
    /* srwi r4, r5, 0x1f */ // 0x808BFFE4
    /* srwi r5, r0, 0x1f */ // 0x808BFFE8
    FUN_8069946C(); // bl 0x8069946C
    r0 = *(0x24 + r1); // lwz @ 0x808BFFF0
    r31 = *(0x1c + r1); // lwz @ 0x808BFFF4
    r30 = *(0x18 + r1); // lwz @ 0x808BFFF8
    r29 = *(0x14 + r1); // lwz @ 0x808BFFFC
    return;
}