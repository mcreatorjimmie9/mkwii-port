/* Function at 0x808238DC, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808238DC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x808238E8
    *(0xc + r1) = r31; // stw @ 0x808238EC
    r31 = r3;
    if (==) goto 0x0x80823900;
    /* li r0, 1 */ // 0x808238F8
    *(0x244 + r3) = r0; // stb @ 0x808238FC
    r0 = *(0x1a + r3); // lbz @ 0x80823900
    if (==) goto 0x0x80823914;
    if (==) goto 0x0x80823970;
    r0 = *(0x8c + r3); // lwz @ 0x80823914
    if (==) goto 0x0x8082392c;
    /* li r4, 0 */ // 0x80823920
    r3 = r3 + 0x88; // 0x80823924
    FUN_80842034(r4, r3); // bl 0x80842034
    r0 = *(0x58 + r31); // lwz @ 0x8082392C
    if (==) goto 0x0x80823940;
    r3 = r31 + 0x54; // 0x80823938
    FUN_8083FC18(r3); // bl 0x8083FC18
    r0 = *(0x78 + r31); // lwz @ 0x80823940
    if (==) goto 0x0x8082395c;
    if (!=) goto 0x0x8082395c;
    /* li r0, 0x14 */ // 0x80823954
    *(0x78 + r31) = r0; // stw @ 0x80823958
    r0 = *(0xc8 + r31); // lwz @ 0x8082395C
    if (==) goto 0x0x80823970;
    r3 = r31 + 0xb4; // 0x80823968
    FUN_8081FCD8(r3); // bl 0x8081FCD8
    r0 = *(0x14 + r1); // lwz @ 0x80823970
    r31 = *(0xc + r1); // lwz @ 0x80823974
    return;
}