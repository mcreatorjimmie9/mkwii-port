/* Function at 0x808BFDB0, size=344 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808BFDB0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808BFDC4
    *(0x14 + r1) = r29; // stw @ 0x808BFDC8
    r0 = *(0xd9c + r3); // lwz @ 0x808BFDCC
    if (==) goto 0x0x808bfdec;
    if (==) goto 0x0x808bfdfc;
    if (==) goto 0x0x808bfe04;
    /* b 0x808bfe14 */ // 0x808BFDE8
    /* lis r4, 0 */ // 0x808BFDEC
    r4 = *(0 + r4); // lwz @ 0x808BFDF0
    r5 = *(0x2d4 + r4); // lbz @ 0x808BFDF4
    /* b 0x808bfe18 */ // 0x808BFDF8
    /* li r5, 6 */ // 0x808BFDFC
    /* b 0x808bfe18 */ // 0x808BFE00
    /* lis r4, 0 */ // 0x808BFE04
    r4 = *(0 + r4); // lwz @ 0x808BFE08
    r5 = *(0x2e8 + r4); // lbz @ 0x808BFE0C
    /* b 0x808bfe18 */ // 0x808BFE10
    /* li r5, 0 */ // 0x808BFE14
    r4 = *(0xd98 + r3); // lwz @ 0x808BFE18
    r0 = r4 + 0xa; // 0x808BFE1C
    if (>=) goto 0x0x808bfe70;
    *(0xd98 + r3) = r0; // stw @ 0x808BFE28
    /* li r29, 0 */ // 0x808BFE2C
    /* li r30, 1 */ // 0x808BFE30
    r3 = *(0x6bc + r31); // lwz @ 0x808BFE34
    r0 = r30 << r29; // slw
    /* and. r0, r3, r0 */ // 0x808BFE3C
    if (==) goto 0x0x808bfe54;
    r3 = *(0x48 + r31); // lwz @ 0x808BFE44
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x808BFE4C
    FUN_80649F40(r4); // bl 0x80649F40
    r29 = r29 + 1; // 0x808BFE54
    if (<) goto 0x0x808bfe34;
    r0 = *(0xd98 + r31); // lwz @ 0x808BFE60
    r3 = r31;
    /* clrlwi r4, r0, 0x18 */ // 0x808BFE68
    FUN_808C015C(r3); // bl 0x808C015C
    r0 = *(0xd9c + r31); // lwz @ 0x808BFE70
    if (==) goto 0x0x808bfe90;
    if (==) goto 0x0x808bfea0;
    if (==) goto 0x0x808bfea8;
    /* b 0x808bfeb8 */ // 0x808BFE8C
    /* lis r3, 0 */ // 0x808BFE90
    r3 = *(0 + r3); // lwz @ 0x808BFE94
    r6 = *(0x2d4 + r3); // lbz @ 0x808BFE98
    /* b 0x808bfebc */ // 0x808BFE9C
    /* li r6, 6 */ // 0x808BFEA0
    /* b 0x808bfebc */ // 0x808BFEA4
    /* lis r3, 0 */ // 0x808BFEA8
    r3 = *(0 + r3); // lwz @ 0x808BFEAC
    r6 = *(0x2e8 + r3); // lbz @ 0x808BFEB0
    /* b 0x808bfebc */ // 0x808BFEB4
    /* li r6, 0 */ // 0x808BFEB8
    r7 = *(0xd98 + r31); // lwz @ 0x808BFEBC
    r3 = r31 + 0x6c4; // 0x808BFEC0
    r0 = r7 + 0xa; // 0x808BFEC4
    /* neg r5, r7 */ // 0x808BFEC8
    r0 = r6 ^ r0; // 0x808BFECC
    r4 = r0 >> 1; // srawi
    /* andc r5, r5, r7 */ // 0x808BFED4
    r0 = r0 & r6; // 0x808BFED8
    /* subf r0, r0, r4 */ // 0x808BFEDC
    /* srwi r4, r5, 0x1f */ // 0x808BFEE0
    /* srwi r5, r0, 0x1f */ // 0x808BFEE4
    FUN_8069946C(); // bl 0x8069946C
    r0 = *(0x24 + r1); // lwz @ 0x808BFEEC
    r31 = *(0x1c + r1); // lwz @ 0x808BFEF0
    r30 = *(0x18 + r1); // lwz @ 0x808BFEF4
    r29 = *(0x14 + r1); // lwz @ 0x808BFEF8
    return;
}