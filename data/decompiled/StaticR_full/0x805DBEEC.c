/* Function at 0x805DBEEC, size=136 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805DBEEC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x805DBEF4
    r5 = r5 + 0; // 0x805DBEFC
    *(0x1c + r1) = r31; // stw @ 0x805DBF00
    /* lis r31, 0 */ // 0x805DBF04
    /* lfs f0, 0(r31) */ // 0x805DBF08
    *(0x18 + r1) = r30; // stw @ 0x805DBF0C
    r30 = r3;
    /* lfs f1, 0x20(r3) */ // 0x805DBF14
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805DBF18
    if (<=) goto 0x0x805dbfd4;
    /* fctiwz f0, f1 */ // 0x805DBF20
    r7 = *(0xb0 + r5); // lbz @ 0x805DBF24
    r6 = *(0xb1 + r5); // lbz @ 0x805DBF28
    /* stfd f0, 0x10(r1) */ // 0x805DBF30
    /* li r3, 4 */ // 0x805DBF34
    r5 = *(0xb2 + r5); // lbz @ 0x805DBF38
    r0 = *(0x14 + r1); // lwz @ 0x805DBF3C
    *(8 + r1) = r7; // stb @ 0x805DBF40
    *(9 + r1) = r6; // stb @ 0x805DBF44
    *(0xa + r1) = r5; // stb @ 0x805DBF48
    *(0xb + r1) = r0; // stb @ 0x805DBF4C
    r0 = *(8 + r1); // lwz @ 0x805DBF50
    *(0xc + r1) = r0; // stw @ 0x805DBF54
    FUN_805E3430(); // bl 0x805E3430
    /* li r3, 0x80 */ // 0x805DBF5C
    /* li r4, 0 */ // 0x805DBF60
    /* li r5, 4 */ // 0x805DBF64
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    /* lis r4, -0x33ff */ // 0x805DBF6C
    /* lfs f0, 0(r31) */ // 0x805DBF70
}