/* Function at 0x8068ACC8, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8068ACC8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8068ACD8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8068ACE0
    r30 = r3;
    if (==) goto 0x0x8068ad34;
    /* addic. r3, r3, 0x1440 */ // 0x8068ACEC
    if (==) goto 0x0x8068ad00;
    r3 = r3 + 0x18; // 0x8068ACF4
    /* li r4, 0 */ // 0x8068ACF8
    FUN_806A0540(r3, r4); // bl 0x806A0540
    /* lis r4, 0 */ // 0x8068AD00
    r3 = r30 + 0x174; // 0x8068AD04
    r4 = r4 + 0; // 0x8068AD08
    /* li r5, 0x254 */ // 0x8068AD0C
    /* li r6, 8 */ // 0x8068AD10
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x8068AD1C
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x8068ad34;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}