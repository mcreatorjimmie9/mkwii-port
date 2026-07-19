/* Function at 0x8085ECC8, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8085ECC8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8085ECDC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8085ECE4
    r29 = r3;
    if (==) goto 0x0x8085ed54;
    /* lis r31, 0 */ // 0x8085ECF0
    /* li r5, 0xc */ // 0x8085ECF4
    r4 = r31 + 0; // 0x8085ECF8
    /* li r6, 2 */ // 0x8085ECFC
    r3 = r3 + 0x43c; // 0x8085ED00
    FUN_805E3430(r5, r4, r6, r3); // bl 0x805E3430
    r3 = r29 + 0x424; // 0x8085ED08
    r4 = r31 + 0; // 0x8085ED0C
    /* li r5, 0xc */ // 0x8085ED10
    /* li r6, 2 */ // 0x8085ED14
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r29 + 0x40c; // 0x8085ED1C
    r4 = r31 + 0; // 0x8085ED20
    /* li r5, 0xc */ // 0x8085ED24
}