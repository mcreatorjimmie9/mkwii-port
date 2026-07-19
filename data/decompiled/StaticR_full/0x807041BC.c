/* Function at 0x807041BC, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807041BC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807041C8
    r31 = r3;
    r3 = r4;
    /* li r4, 0x2800 */ // 0x807041D4
    *(0x18 + r31) = r5; // stw @ 0x807041D8
    /* lis r5, 0 */ // 0x807041DC
    r7 = r31;
    *(0x1c + r31) = r6; // stw @ 0x807041E4
    r6 = r5 + 0; // 0x807041E8
    /* li r5, 1 */ // 0x807041EC
    FUN_805E3430(r5, r7, r6, r5); // bl 0x805E3430
}