/* Function at 0x8080AB24, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8080AB24(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8080AB34
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x8080AB3C
    r30 = r3;
    *(4 + r3) = r4; // stw @ 0x8080AB44
    if (!=) goto 0x0x8080ab54;
    /* lis r4, 0 */ // 0x8080AB4C
    r31 = *(0 + r4); // lwz @ 0x8080AB50
    r0 = *(4 + r3); // lwz @ 0x8080AB54
    r4 = r31;
    /* li r5, 4 */ // 0x8080AB5C
    /* slwi r3, r0, 2 */ // 0x8080AB60
    FUN_805E3430(r4, r5); // bl 0x805E3430
}