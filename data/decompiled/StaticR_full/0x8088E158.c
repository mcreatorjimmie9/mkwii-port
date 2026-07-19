/* Function at 0x8088E158, size=84 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8088E158(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 0 */ // 0x8088E160
    /* lis r31, 0 */ // 0x8088E16C
    r31 = r31 + 0; // 0x8088E170
    *(0x38 + r1) = r30; // stw @ 0x8088E174
    r30 = r4;
    *(0x34 + r1) = r29; // stw @ 0x8088E17C
    r29 = r3;
    FUN_8089B9C4(); // bl 0x8089B9C4
    /* lis r5, 0 */ // 0x8088E188
    /* addis r4, r29, 1 */ // 0x8088E18C
    /* li r0, 0 */ // 0x8088E190
    *(-0x222c + r4) = r0; // stw @ 0x8088E194
    r5 = r5 + 0; // 0x8088E198
    /* li r3, 0x68 */ // 0x8088E19C
    *(0 + r29) = r5; // stw @ 0x8088E1A0
    *(-0xda0 + r4) = r0; // stw @ 0x8088E1A4
    FUN_805E3430(r5, r3); // bl 0x805E3430
}