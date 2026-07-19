/* Function at 0x8065BE68, size=304 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r26 */
/* Calls: 7 function(s) */

int FUN_8065BE68(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -240(r1) */
    /* saved r26 */
    /* stmw r26, 0xd8(r1) */ // 0x8065BE74
    r31 = r3;
    r26 = r3 + 0x268; // 0x8065BE7C
    /* li r28, 0 */ // 0x8065BE80
    r4 = *(0x19f4 + r3); // lwz @ 0x8065BE84
    r29 = r4 + 1; // 0x8065BE88
    *(0x19f4 + r3) = r29; // stw @ 0x8065BE8C
    /* slwi r0, r29, 2 */ // 0x8065BE90
    r27 = r0 + r29; // 0x8065BE94
    /* slwi r30, r27, 2 */ // 0x8065BE98
    if (>=) goto 0x0x8065becc;
    r4 = r31 + r30; // 0x8065BEA4
    r3 = r26;
    r4 = *(0x1978 + r4); // lwz @ 0x8065BEAC
    FUN_8065A904(r3); // bl 0x8065A904
    r28 = r28 + 1; // 0x8065BEB4
    r30 = r30 + 4; // 0x8065BEB8
    r26 = r26 + 0x264; // 0x8065BEC0
    r27 = r27 + 1; // 0x8065BEC4
    if (<) goto 0x0x8065be9c;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r30, 0 */ // 0x8065BED4
    r0 = r29 + 1; // 0x8065BED8
    *(8 + r1) = r0; // stw @ 0x8065BEDC
    r3 = *(0 + r30); // lwz @ 0x8065BEE0
    r3 = *(0 + r3); // lwz @ 0x8065BEE4
    r3 = *(0x404 + r3); // lwz @ 0x8065BEE8
    FUN_80659444(); // bl 0x80659444
    /* lis r4, 0x6666 */ // 0x8065BEF0
    r0 = r3 + -1; // 0x8065BEF4
    r4 = r4 + 0x6667; // 0x8065BEF8
    r3 = r31 + 0x176c; // 0x8065BEFC
    /* mulhw r0, r4, r0 */ // 0x8065BF00
    /* li r4, 0x7d9 */ // 0x8065BF08
    r0 = r0 >> 1; // srawi
    /* srwi r6, r0, 0x1f */ // 0x8065BF10
    r6 = r0 + r6; // 0x8065BF14
    r0 = r6 + 1; // 0x8065BF18
    *(0xc + r1) = r0; // stw @ 0x8065BF1C
    FUN_806A0A34(); // bl 0x806A0A34
    r3 = r31 + 0x268; // 0x8065BF24
    /* li r4, 0 */ // 0x8065BF28
    FUN_80649F40(r3, r4); // bl 0x80649F40
    r3 = *(0x19f4 + r31); // lwz @ 0x8065BF30
    /* li r28, 0 */ // 0x8065BF34
    r3 = r3 + 1; // 0x8065BF38
    /* slwi r0, r3, 2 */ // 0x8065BF3C
    r0 = r0 + r3; // 0x8065BF40
    if (>=) goto 0x0x8065bf74;
    r4 = *(0 + r30); // lwz @ 0x8065BF4C
    /* slwi r0, r0, 2 */ // 0x8065BF50
    r3 = r31 + r0; // 0x8065BF54
    r5 = *(0 + r4); // lwz @ 0x8065BF58
    r4 = *(0x1978 + r3); // lwz @ 0x8065BF5C
    r3 = *(0x404 + r5); // lwz @ 0x8065BF60
    FUN_8065984C(); // bl 0x8065984C
    if (==) goto 0x0x8065bf74;
    /* li r28, 1 */ // 0x8065BF70
    r5 = r28;
    r3 = r31 + 0x1234; // 0x8065BF78
    /* li r4, 1 */ // 0x8065BF7C
    FUN_8069946C(r5, r3, r4); // bl 0x8069946C
    r0 = *(0xf4 + r1); // lwz @ 0x8065BF88
    return;
}