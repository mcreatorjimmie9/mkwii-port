/* Function at 0x8084C9A4, size=96 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_8084C9A4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r29, 0 */ // 0x8084C9BC
    r29 = r29 + 0; // 0x8084C9C0
    *(0x20 + r1) = r28; // stw @ 0x8084C9C4
    r28 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r3, 0 */ // 0x8084C9D0
    /* li r0, 0 */ // 0x8084C9D4
    r3 = r3 + 0; // 0x8084C9D8
    /* lis r30, 0 */ // 0x8084C9DC
    /* lis r31, 0 */ // 0x8084C9E0
    *(0x20 + r28) = r3; // stw @ 0x8084C9E4
    r3 = r28 + 0x358; // 0x8084C9E8
    r4 = r30 + 0; // 0x8084C9EC
    *(0x68 + r28) = r0; // stw @ 0x8084C9F0
    r5 = r31 + 0; // 0x8084C9F4
    /* li r6, 0xc */ // 0x8084C9F8
    /* li r7, 4 */ // 0x8084C9FC
    FUN_805E3430(r4, r5, r6, r7); // bl 0x805E3430
}