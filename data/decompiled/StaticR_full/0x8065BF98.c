/* Function at 0x8065BF98, size=248 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r26 */
/* Calls: 6 function(s) */

int FUN_8065BF98(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -240(r1) */
    /* saved r26 */
    /* stmw r26, 0xd8(r1) */ // 0x8065BFA4
    r31 = r3;
    r26 = r3 + 0x268; // 0x8065BFAC
    /* li r28, 0 */ // 0x8065BFB0
    r4 = *(0x19f4 + r3); // lwz @ 0x8065BFB4
    r29 = r4 + -1; // 0x8065BFB8
    *(0x19f4 + r3) = r29; // stw @ 0x8065BFBC
    /* slwi r0, r29, 2 */ // 0x8065BFC0
    r27 = r0 + r29; // 0x8065BFC4
    /* slwi r30, r27, 2 */ // 0x8065BFC8
    if (>=) goto 0x0x8065bffc;
    r4 = r31 + r30; // 0x8065BFD4
    r3 = r26;
    r4 = *(0x1978 + r4); // lwz @ 0x8065BFDC
    FUN_8065A904(r3); // bl 0x8065A904
    r28 = r28 + 1; // 0x8065BFE4
    r30 = r30 + 4; // 0x8065BFE8
    r26 = r26 + 0x264; // 0x8065BFF0
    r27 = r27 + 1; // 0x8065BFF4
    if (<) goto 0x0x8065bfcc;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x8065C004
    r0 = r29 + 1; // 0x8065C008
    *(8 + r1) = r0; // stw @ 0x8065C00C
    r3 = *(0 + r3); // lwz @ 0x8065C010
    r3 = *(0 + r3); // lwz @ 0x8065C014
    r3 = *(0x404 + r3); // lwz @ 0x8065C018
    FUN_80659444(); // bl 0x80659444
    /* lis r4, 0x6666 */ // 0x8065C020
    r0 = r3 + -1; // 0x8065C024
    r4 = r4 + 0x6667; // 0x8065C028
    r3 = r31 + 0x176c; // 0x8065C02C
    /* mulhw r0, r4, r0 */ // 0x8065C030
    /* li r4, 0x7d9 */ // 0x8065C038
    r0 = r0 >> 1; // srawi
    /* srwi r6, r0, 0x1f */ // 0x8065C040
    r6 = r0 + r6; // 0x8065C044
    r0 = r6 + 1; // 0x8065C048
    *(0xc + r1) = r0; // stw @ 0x8065C04C
    FUN_806A0A34(); // bl 0x806A0A34
    r3 = r31 + 0xbf8; // 0x8065C054
    /* li r4, 0 */ // 0x8065C058
    FUN_80649F40(r3, r4); // bl 0x80649F40
    r4 = *(0x19f4 + r31); // lwz @ 0x8065C060
    r3 = r31 + 0x1234; // 0x8065C064
    /* li r5, 1 */ // 0x8065C068
    /* neg r0, r4 */ // 0x8065C06C
    /* andc r0, r0, r4 */ // 0x8065C070
    /* srwi r4, r0, 0x1f */ // 0x8065C074
    FUN_8069946C(r3, r5); // bl 0x8069946C
    r0 = *(0xf4 + r1); // lwz @ 0x8065C080
    return;
}