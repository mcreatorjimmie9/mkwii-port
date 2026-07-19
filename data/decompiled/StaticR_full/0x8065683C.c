/* Function at 0x8065683C, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8065683C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, -1 */ // 0x80656848
    *(0x1c + r1) = r31; // stw @ 0x8065684C
    /* li r31, 0 */ // 0x80656850
    *(0x18 + r1) = r30; // stw @ 0x80656854
    r30 = r3;
    *(4 + r3) = r0; // stw @ 0x8065685C
    *(8 + r3) = r0; // stw @ 0x80656860
    *(0xc + r3) = r31; // stw @ 0x80656864
    FUN_805E3430(); // bl 0x805E3430
}