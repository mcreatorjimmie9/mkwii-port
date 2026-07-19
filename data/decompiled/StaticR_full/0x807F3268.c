/* Function at 0x807F3268, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807F3268(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x807F3270
    *(0x14 + r1) = r0; // stw @ 0x807F3274
    *(0xc + r1) = r31; // stw @ 0x807F3278
    r31 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807F3284
    /* lis r3, 0 */ // 0x807F3288
    r4 = r4 + 0; // 0x807F328C
    *(0 + r31) = r4; // stw @ 0x807F3290
    r3 = *(0 + r3); // lwz @ 0x807F3294
    r0 = *(0x25 + r3); // lbz @ 0x807F3298
    if (<=) goto 0x0x807f32cc;
    /* li r3, 0x7c */ // 0x807F32A4
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x807f32c4;
}