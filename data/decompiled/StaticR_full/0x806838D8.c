/* Function at 0x806838D8, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806838D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806838E8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806838F0
    r30 = r3;
    if (==) goto 0x0x8068393c;
    /* li r4, -1 */ // 0x806838FC
    r3 = r3 + 0x4d0; // 0x80683900
    FUN_8066CEF8(r4, r3); // bl 0x8066CEF8
    r3 = r30 + 0x27c; // 0x80683908
    /* li r4, -1 */ // 0x8068390C
    FUN_806498AC(r4, r3, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x58; // 0x80683914
    /* li r4, -1 */ // 0x80683918
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x80683924
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8068393c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80683940
    r30 = *(8 + r1); // lwz @ 0x80683944
    r0 = *(0x14 + r1); // lwz @ 0x80683948
    return;
}