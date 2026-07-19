/* Function at 0x807AE624, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807AE624(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r30, 0 */ // 0x807AE638
    *(0x14 + r1) = r29; // stw @ 0x807AE63C
    r29 = r3;
    *(0 + r3) = r4; // stw @ 0x807AE644
    *(0x164 + r3) = r30; // stw @ 0x807AE648
    /* li r3, 0x20 */ // 0x807AE64C
    FUN_805E3430(r3); // bl 0x805E3430
}