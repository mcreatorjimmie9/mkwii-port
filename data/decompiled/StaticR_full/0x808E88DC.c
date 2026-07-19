/* Function at 0x808E88DC, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808E88DC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* addic. r31, r3, 0x6c4 */ // 0x808E88EC
    *(8 + r1) = r30; // stw @ 0x808E88F0
    r30 = r3;
    r5 = r31;
    if (==) goto 0x0x808e8904;
    r5 = r31 + 0x18; // 0x808E8900
    r3 = r30;
    /* li r6, 0 */ // 0x808E8908
    FUN_80671C2C(r5, r5, r3, r6); // bl 0x80671C2C
    r3 = *(0x654 + r30); // lwz @ 0x808E8910
    /* lis r4, 0 */ // 0x808E8914
    r4 = r4 + 0; // 0x808E8918
    r7 = *(0x6bc + r30); // lwz @ 0x808E891C
    r0 = r3 + 1; // 0x808E8920
    *(0x654 + r30) = r0; // stw @ 0x808E8924
    r3 = r31 + 0x18; // 0x808E8928
    r5 = r4 + 7; // 0x808E892C
    r6 = r4 + 0xf; // 0x808E8930
    /* li r8, 0 */ // 0x808E8934
    /* li r9, 0 */ // 0x808E8938
    FUN_80649914(r3, r5, r6, r8, r9); // bl 0x80649914
    if (==) goto 0x0x808e894c;
    r31 = r31 + 0x18; // 0x808E8948
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x808E8950
    r30 = *(8 + r1); // lwz @ 0x808E8954
    r0 = *(0x14 + r1); // lwz @ 0x808E8958
    return;
}