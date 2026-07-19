/* Function at 0x80793244, size=224 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80793244(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r6, 0 */ // 0x80793250
    *(0x14 + r1) = r0; // stw @ 0x80793254
    r7 = r3;
    *(0xc + r1) = r31; // stw @ 0x8079325C
    r9 = *(0x84 + r3); // lwz @ 0x80793260
    /* mtctr r9 */ // 0x80793264
    if (<=) goto 0x0x807932ac;
    r8 = *(0x80 + r7); // lwz @ 0x80793270
    if (==) goto 0x0x80793284;
    r0 = *(0x90 + r8); // lwz @ 0x8079327C
    /* b 0x80793288 */ // 0x80793280
    /* li r0, -1 */ // 0x80793284
    if (!=) goto 0x0x807932a0;
    /* slwi r0, r6, 2 */ // 0x80793290
    r4 = r3 + r0; // 0x80793294
    r31 = r4 + 0x80; // 0x80793298
    /* b 0x807932b0 */ // 0x8079329C
    r7 = r7 + 4; // 0x807932A0
    r6 = r6 + 1; // 0x807932A4
    if (counter-- != 0) goto 0x0x80793270;
    /* li r31, 0 */ // 0x807932AC
    if (!=) goto 0x0x807932f8;
    r6 = r3;
    /* li r4, 0 */ // 0x807932BC
    /* mtctr r9 */ // 0x807932C0
    if (<=) goto 0x0x807932f4;
    r0 = *(0x80 + r6); // lwz @ 0x807932CC
    if (!=) goto 0x0x807932e8;
    /* slwi r0, r4, 2 */ // 0x807932D8
    r4 = r3 + r0; // 0x807932DC
    r31 = r4 + 0x80; // 0x807932E0
    /* b 0x807932f8 */ // 0x807932E4
    r6 = r6 + 4; // 0x807932E8
    r4 = r4 + 1; // 0x807932EC
    if (counter-- != 0) goto 0x0x807932cc;
    /* li r31, 0 */ // 0x807932F4
    if (==) goto 0x0x80793314;
    r4 = r31;
    /* li r6, 0 */ // 0x80793304
    FUN_805E3430(r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x80793318 */ // 0x80793310
    /* li r3, 0 */ // 0x80793314
    r0 = *(0x14 + r1); // lwz @ 0x80793318
    r31 = *(0xc + r1); // lwz @ 0x8079331C
}