/* Function at 0x806BFF04, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 7 function(s) */

int FUN_806BFF04(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r4, 0 */ // 0x806BFF0C
    *(0x14 + r1) = r29; // stw @ 0x806BFF1C
    *(0x10 + r1) = r28; // stw @ 0x806BFF20
    r28 = r3;
    r3 = r3 + 0x98; // 0x806BFF28
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    r3 = *(0x38 + r3); // lwz @ 0x806BFF30
    r0 = r3 + -1; // 0x806BFF34
    if (>) goto 0x0x806bffc0;
    r3 = r28 + 0x98; // 0x806BFF40
    /* li r4, 0 */ // 0x806BFF44
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x35 + r3); // lbz @ 0x806BFF4C
    if (!=) goto 0x0x806bffc0;
    r31 = r28;
    r30 = r28 + 0x174; // 0x806BFF5C
    /* li r29, 0 */ // 0x806BFF60
    r0 = *(0x3b4 + r31); // lwz @ 0x806BFF64
    if (<) goto 0x0x806bff90;
    r3 = r30;
    /* li r4, 1 */ // 0x806BFF74
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    if (!=) goto 0x0x806bff90;
    r3 = r30;
    /* li r4, 0 */ // 0x806BFF88
    FUN_80649F40(r3, r4); // bl 0x80649F40
    r29 = r29 + 1; // 0x806BFF90
    r30 = r30 + 0x254; // 0x806BFF94
    r31 = r31 + 0x254; // 0x806BFF9C
    if (<) goto 0x0x806bff64;
    r3 = r28 + 0x98; // 0x806BFFA4
    /* li r4, 0 */ // 0x806BFFA8
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806BFFB0
    /* li r4, 3 */ // 0x806BFFB4
    /* lfs f1, 0(r5) */ // 0x806BFFB8
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = r28 + 0x98; // 0x806BFFC0
    /* li r4, 0 */ // 0x806BFFC4
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806BFFCC
    /* cntlzw r0, r0 */ // 0x806BFFD0
    /* srwi r0, r0, 5 */ // 0x806BFFD4
    *(0x80 + r28) = r0; // stb @ 0x806BFFD8
    r31 = *(0x1c + r1); // lwz @ 0x806BFFDC
    r30 = *(0x18 + r1); // lwz @ 0x806BFFE0
    r29 = *(0x14 + r1); // lwz @ 0x806BFFE4
    r28 = *(0x10 + r1); // lwz @ 0x806BFFE8
    r0 = *(0x24 + r1); // lwz @ 0x806BFFEC
    return;
}