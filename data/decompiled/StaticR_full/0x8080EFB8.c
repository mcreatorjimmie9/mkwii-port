/* Function at 0x8080EFB8, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8080EFB8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8080EFC8
    *(8 + r1) = r30; // stw @ 0x8080EFCC
    r30 = r3;
    *(4 + r3) = r4; // stw @ 0x8080EFD4
    if (==) goto 0x0x8080f010;
    /* mulli r3, r4, 0xc */ // 0x8080EFDC
    r31 = r4;
    r3 = r3 + 0x10; // 0x8080EFE4
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x8080EFEC
    /* lis r5, 0 */ // 0x8080EFF0
    r7 = r31;
    /* li r6, 0xc */ // 0x8080EFF8
}