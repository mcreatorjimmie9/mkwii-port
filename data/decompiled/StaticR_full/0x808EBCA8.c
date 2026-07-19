/* Function at 0x808EBCA8, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_808EBCA8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808EBCB8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808EBCC0
    r30 = r3;
    if (==) goto 0x0x808ebd18;
    /* li r4, -1 */ // 0x808EBCCC
    r3 = r3 + 0x6c8; // 0x808EBCD0
    FUN_8066CEF8(r4, r3); // bl 0x8066CEF8
    r3 = r30 + 0x430; // 0x808EBCD8
    /* li r4, -1 */ // 0x808EBCDC
    FUN_8066A1A0(r4, r3, r3, r4); // bl 0x8066A1A0
    if (==) goto 0x0x808ebd08;
    /* addic. r3, r30, 0x54 */ // 0x808EBCEC
    if (==) goto 0x0x808ebcfc;
    /* li r4, 0 */ // 0x808EBCF4
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30;
    /* li r4, 0 */ // 0x808EBD00
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808ebd18;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808EBD1C
    r30 = *(8 + r1); // lwz @ 0x808EBD20
    r0 = *(0x14 + r1); // lwz @ 0x808EBD24
    return;
}