/* Function at 0x807088B4, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807088B4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807088C0
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r3, 0 */ // 0x807088CC
    /* lis r4, 0 */ // 0x807088D0
    r3 = r3 + 0; // 0x807088D4
    /* lis r5, 0 */ // 0x807088D8
    *(0 + r31) = r3; // stw @ 0x807088DC
    r3 = r31 + 0x174; // 0x807088E0
    r4 = r4 + 0; // 0x807088E4
    r5 = r5 + 0; // 0x807088E8
    /* li r6, 0x254 */ // 0x807088EC
    /* li r7, 5 */ // 0x807088F0
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
}