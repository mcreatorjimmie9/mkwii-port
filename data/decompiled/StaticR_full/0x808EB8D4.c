/* Function at 0x808EB8D4, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_808EB8D4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808EB8E4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808EB8EC
    r30 = r3;
    if (==) goto 0x0x808eb938;
    /* li r4, -1 */ // 0x808EB8F8
    r3 = r3 + 0x430; // 0x808EB8FC
    FUN_8066A1A0(r4, r3); // bl 0x8066A1A0
    if (==) goto 0x0x808eb928;
    /* addic. r3, r30, 0x54 */ // 0x808EB90C
    if (==) goto 0x0x808eb91c;
    /* li r4, 0 */ // 0x808EB914
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30;
    /* li r4, 0 */ // 0x808EB920
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808eb938;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808EB93C
    r30 = *(8 + r1); // lwz @ 0x808EB940
    r0 = *(0x14 + r1); // lwz @ 0x808EB944
    return;
}