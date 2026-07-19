/* Function at 0x80833790, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80833790(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x808337A4
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808337AC
    r29 = r3;
    if (==) goto 0x0x808337f4;
    /* lis r31, 0 */ // 0x808337B8
    /* li r5, 0xc */ // 0x808337BC
    r4 = r31 + 0; // 0x808337C0
    /* li r6, 4 */ // 0x808337C4
    r3 = r3 + 0x30; // 0x808337C8
    FUN_805E3430(r5, r4, r6, r3); // bl 0x805E3430
    r3 = r29;
    r4 = r31 + 0; // 0x808337D4
    /* li r5, 0xc */ // 0x808337D8
    /* li r6, 4 */ // 0x808337DC
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    if (<=) goto 0x0x808337f4;
    r3 = r29;
}