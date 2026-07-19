/* Function at 0x806ACEFC, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_806ACEFC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806ACF0C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806ACF14
    r30 = r3;
    if (==) goto 0x0x806acf90;
    /* li r4, -1 */ // 0x806ACF20
    r3 = r3 + 0xa88; // 0x806ACF24
    FUN_8066A1A0(r4, r3); // bl 0x8066A1A0
    /* addic. r3, r30, 0x914 */ // 0x806ACF2C
    if (==) goto 0x0x806acf3c;
    /* li r4, 0 */ // 0x806ACF34
    FUN_806A0540(r3, r4); // bl 0x806A0540
    /* addic. r3, r30, 0x6b0 */ // 0x806ACF3C
    if (==) goto 0x0x806acf4c;
    /* li r4, 0 */ // 0x806ACF44
    FUN_806498AC(r4, r4); // bl 0x806498AC
    r3 = r30 + 0x45c; // 0x806ACF4C
    /* li r4, -1 */ // 0x806ACF50
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x208; // 0x806ACF58
    /* li r4, -1 */ // 0x806ACF5C
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    /* addic. r3, r30, 0x94 */ // 0x806ACF64
    if (==) goto 0x0x806acf74;
    /* li r4, 0 */ // 0x806ACF6C
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30;
    /* li r4, 0 */ // 0x806ACF78
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806acf90;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806ACF94
    r30 = *(8 + r1); // lwz @ 0x806ACF98
    r0 = *(0x14 + r1); // lwz @ 0x806ACF9C
    return;
}