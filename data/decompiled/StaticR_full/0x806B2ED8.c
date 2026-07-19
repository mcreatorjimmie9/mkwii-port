/* Function at 0x806B2ED8, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_806B2ED8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806B2EE8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806B2EF0
    r30 = r3;
    if (==) goto 0x0x806b2f6c;
    /* addic. r3, r3, 0xa2c */ // 0x806B2EFC
    if (==) goto 0x0x806b2f0c;
    /* li r4, 0 */ // 0x806B2F04
    FUN_806A0540(r4); // bl 0x806A0540
    r3 = r30 + 0x8b8; // 0x806B2F0C
    /* li r4, -1 */ // 0x806B2F10
    FUN_8066D2B4(r4, r3, r4); // bl 0x8066D2B4
    if (==) goto 0x0x806b2f5c;
    r3 = r30 + 0x73c; // 0x806B2F20
    /* li r4, -1 */ // 0x806B2F24
    FUN_8066CEF8(r3, r4); // bl 0x8066CEF8
    /* lis r4, 0 */ // 0x806B2F2C
    r3 = r30 + 0x294; // 0x806B2F30
    r4 = r4 + 0; // 0x806B2F34
    /* li r5, 0x254 */ // 0x806B2F38
    /* li r6, 2 */ // 0x806B2F3C
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30 + 0x4c; // 0x806B2F44
    /* li r4, -1 */ // 0x806B2F48
    FUN_8066A1A0(r5, r6, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806B2F54
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806b2f6c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
}