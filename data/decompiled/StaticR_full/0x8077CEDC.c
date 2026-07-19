/* Function at 0x8077CEDC, size=544 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8077CEDC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8077CEF0
    *(0x14 + r1) = r29; // stw @ 0x8077CEF4
    r0 = *(0x184 + r3); // lbz @ 0x8077CEF8
    if (==) goto 0x0x8077d0e0;
    r8 = *(0xd0 + r3); // lbz @ 0x8077CF04
    /* li r9, 1 */ // 0x8077CF08
    /* li r4, 0 */ // 0x8077CF0C
    /* cmpwi cr1, r8, 0 */
    if (<=) goto 0x0x8077d040;
    r6 = r8 + -8; // 0x8077CF1C
    if (<=) goto 0x0x8077d00c;
    /* li r7, 0 */ // 0x8077CF24
    if (<) goto 0x0x8077cf40;
    /* lis r5, -0x8000 */ // 0x8077CF2C
    r0 = r5 + -2; // 0x8077CF30
    if (>) goto 0x0x8077cf40;
    /* li r7, 1 */ // 0x8077CF3C
    if (==) goto 0x0x8077d00c;
    r0 = r6 + 7; // 0x8077CF48
    /* srwi r0, r0, 3 */ // 0x8077CF4C
    /* mtctr r0 */ // 0x8077CF50
    if (<=) goto 0x0x8077d00c;
    r0 = *(0x17c + r3); // lwz @ 0x8077CF5C
    /* lbzx r5, r4, r0 */ // 0x8077CF60
    r12 = r0 + r4; // 0x8077CF64
    r0 = *(1 + r12); // lbz @ 0x8077CF68
    r4 = r4 + 8; // 0x8077CF6C
    r6 = r9 & r5; // 0x8077CF70
    r9 = *(2 + r12); // lbz @ 0x8077CF74
    /* neg r5, r6 */ // 0x8077CF78
    r8 = *(3 + r12); // lbz @ 0x8077CF7C
    r5 = r5 | r6; // 0x8077CF80
    r7 = *(4 + r12); // lbz @ 0x8077CF84
    /* srwi r5, r5, 0x1f */ // 0x8077CF88
    r6 = *(5 + r12); // lbz @ 0x8077CF8C
    r11 = r5 & r0; // 0x8077CF90
    r5 = *(6 + r12); // lbz @ 0x8077CF94
    /* neg r10, r11 */ // 0x8077CF98
    r0 = *(7 + r12); // lbz @ 0x8077CF9C
    r10 = r10 | r11; // 0x8077CFA0
    /* srwi r10, r10, 0x1f */ // 0x8077CFA4
    r10 = r10 & r9; // 0x8077CFA8
    /* neg r9, r10 */ // 0x8077CFAC
    r9 = r9 | r10; // 0x8077CFB0
    /* srwi r9, r9, 0x1f */ // 0x8077CFB4
    r9 = r9 & r8; // 0x8077CFB8
    /* neg r8, r9 */ // 0x8077CFBC
    r8 = r8 | r9; // 0x8077CFC0
    /* srwi r8, r8, 0x1f */ // 0x8077CFC4
    r8 = r8 & r7; // 0x8077CFC8
    /* neg r7, r8 */ // 0x8077CFCC
    r7 = r7 | r8; // 0x8077CFD0
    /* srwi r7, r7, 0x1f */ // 0x8077CFD4
    r7 = r7 & r6; // 0x8077CFD8
    /* neg r6, r7 */ // 0x8077CFDC
    r6 = r6 | r7; // 0x8077CFE0
    /* srwi r6, r6, 0x1f */ // 0x8077CFE4
    r6 = r6 & r5; // 0x8077CFE8
    /* neg r5, r6 */ // 0x8077CFEC
    r5 = r5 | r6; // 0x8077CFF0
    /* srwi r5, r5, 0x1f */ // 0x8077CFF4
    r5 = r5 & r0; // 0x8077CFF8
    /* neg r0, r5 */ // 0x8077CFFC
    r0 = r0 | r5; // 0x8077D000
    /* srwi r9, r0, 0x1f */ // 0x8077D004
    if (counter-- != 0) goto 0x0x8077cf5c;
    r5 = *(0xd0 + r3); // lbz @ 0x8077D00C
    /* subf r0, r4, r5 */ // 0x8077D010
    /* mtctr r0 */ // 0x8077D014
    if (>=) goto 0x0x8077d040;
    r5 = *(0x17c + r3); // lwz @ 0x8077D020
    /* lbzx r0, r5, r4 */ // 0x8077D024
    r4 = r4 + 1; // 0x8077D028
    r5 = r9 & r0; // 0x8077D02C
    /* neg r0, r5 */ // 0x8077D030
    r0 = r0 | r5; // 0x8077D034
    /* srwi r9, r0, 0x1f */ // 0x8077D038
    if (counter-- != 0) goto 0x0x8077d020;
    if (==) goto 0x0x8077d050;
    /* li r0, 0 */ // 0x8077D048
    *(0x184 + r3) = r0; // stb @ 0x8077D04C
    /* li r29, 0 */ // 0x8077D050
    /* li r30, 0 */ // 0x8077D054
    /* b 0x8077d0d4 */ // 0x8077D058
    r3 = *(0x17c + r31); // lwz @ 0x8077D05C
    /* lbzx r0, r3, r29 */ // 0x8077D060
    if (!=) goto 0x0x8077d080;
    r3 = *(0xe4 + r31); // lwz @ 0x8077D06C
    /* clrlwi r4, r29, 0x18 */ // 0x8077D070
    FUN_8077468C(); // bl 0x8077468C
    r4 = *(0x17c + r31); // lwz @ 0x8077D078
    /* stbx r3, r4, r29 */ // 0x8077D07C
    r3 = *(0x17c + r31); // lwz @ 0x8077D080
    /* li r4, 0 */ // 0x8077D084
    /* lbzx r0, r3, r29 */ // 0x8077D088
    if (==) goto 0x0x8077d0a8;
    r3 = *(0x180 + r31); // lwz @ 0x8077D094
    /* lbzx r0, r3, r29 */ // 0x8077D098
    if (!=) goto 0x0x8077d0a8;
    /* li r4, 1 */ // 0x8077D0A4
    if (==) goto 0x0x8077d0bc;
    r3 = *(0xe0 + r31); // lwz @ 0x8077D0B0
    /* lwzx r3, r3, r30 */ // 0x8077D0B4
    FUN_80750B20(r4); // bl 0x80750B20
    r4 = *(0x17c + r31); // lwz @ 0x8077D0BC
    r30 = r30 + 4; // 0x8077D0C0
    r3 = *(0x180 + r31); // lwz @ 0x8077D0C4
    /* lbzx r0, r4, r29 */ // 0x8077D0C8
    /* stbx r0, r3, r29 */ // 0x8077D0CC
    r29 = r29 + 1; // 0x8077D0D0
    r0 = *(0xd0 + r31); // lbz @ 0x8077D0D4
    if (<) goto 0x0x8077d05c;
    r0 = *(0x24 + r1); // lwz @ 0x8077D0E0
    r31 = *(0x1c + r1); // lwz @ 0x8077D0E4
    r30 = *(0x18 + r1); // lwz @ 0x8077D0E8
    r29 = *(0x14 + r1); // lwz @ 0x8077D0EC
    return;
}