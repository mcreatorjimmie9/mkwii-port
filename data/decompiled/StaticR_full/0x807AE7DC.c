/* Function at 0x807AE7DC, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807AE7DC(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x807AE7EC
    *(0x18 + r1) = r30; // stw @ 0x807AE7F0
    r30 = r3 + 0x28; // 0x807AE7F4
    *(0x14 + r1) = r29; // stw @ 0x807AE7F8
    r29 = r3;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
}