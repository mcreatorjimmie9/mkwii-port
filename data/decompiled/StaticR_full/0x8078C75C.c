/* Function at 0x8078C75C, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8078C75C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 0 */ // 0x8078C768
    r31 = r3 + 0x74; // 0x8078C770
    *(0x18 + r1) = r30; // stw @ 0x8078C774
    /* lis r30, 0 */ // 0x8078C778
    r30 = r30 + 0; // 0x8078C77C
    *(0x14 + r1) = r29; // stw @ 0x8078C780
    r29 = r3 + 4; // 0x8078C784
    *(0x10 + r1) = r28; // stw @ 0x8078C788
    r28 = r3;
    *(0 + r3) = r0; // stw @ 0x8078C790
    r3 = r29;
    FUN_805E3430(r3); // bl 0x805E3430
}