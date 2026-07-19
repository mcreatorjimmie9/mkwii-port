/* Function at 0x8080EF3C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8080EF3C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8080EF4C
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x8080EF54
    r30 = r3;
    *(4 + r3) = r4; // stw @ 0x8080EF5C
    if (!=) goto 0x0x8080ef6c;
    /* lis r4, 0 */ // 0x8080EF64
    r31 = *(0 + r4); // lwz @ 0x8080EF68
    r0 = *(4 + r3); // lwz @ 0x8080EF6C
    r4 = r31;
    /* li r5, 4 */ // 0x8080EF74
    /* slwi r3, r0, 2 */ // 0x8080EF78
    FUN_805E3430(r4, r5); // bl 0x805E3430
}