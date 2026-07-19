/* Function at 0x808335B0, size=84 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_808335B0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x10 + r1) = r28; // stw @ 0x808335C8
    r28 = r3;
    FUN_808319BC(); // bl 0x808319BC
    /* lis r3, 0 */ // 0x808335D4
    /* lis r30, 0 */ // 0x808335D8
    r3 = r3 + 0; // 0x808335DC
    /* lis r29, 0 */ // 0x808335E0
    r31 = r28 + 0x1ec; // 0x808335E4
    *(0 + r28) = r3; // stw @ 0x808335E8
    r3 = r31;
    r4 = r30 + 0; // 0x808335F0
    r5 = r29 + 0; // 0x808335F4
    /* li r6, 0xc */ // 0x808335F8
    /* li r7, 4 */ // 0x808335FC
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
}