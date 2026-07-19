/* Function at 0x80652AB4, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80652AB4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80652AC0
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r3, 0 */ // 0x80652ACC
    /* li r0, 0 */ // 0x80652AD0
    r3 = r3 + 0; // 0x80652AD4
    *(0 + r31) = r3; // stw @ 0x80652AD8
    r3 = r31;
    *(0x174 + r31) = r0; // stb @ 0x80652AE0
    r31 = *(0xc + r1); // lwz @ 0x80652AE4
    r0 = *(0x14 + r1); // lwz @ 0x80652AE8
    return;
}