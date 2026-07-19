/* Function at 0x80800BDC, size=56 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80800BDC(int r3, int r4)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    r3 = r3 + 0xb8; // 0x80800BE4
    /* lis r0, 0x4330 */ // 0x80800BEC
    *(0x6c + r1) = r31; // stw @ 0x80800BF0
    /* lis r31, 0 */ // 0x80800BF4
    r31 = r31 + 0; // 0x80800BF8
    *(0x68 + r1) = r30; // stw @ 0x80800BFC
    r30 = r4;
    /* li r4, 0 */ // 0x80800C04
    *(0x58 + r1) = r0; // stw @ 0x80800C08
    *(0x60 + r1) = r0; // stw @ 0x80800C0C
    FUN_805E3430(r4); // bl 0x805E3430
}