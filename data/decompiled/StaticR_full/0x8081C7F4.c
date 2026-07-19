/* Function at 0x8081C7F4, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8081C7F4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8081C808
    r29 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r30, 0 */ // 0x8081C814
    /* lis r31, 0 */ // 0x8081C818
    r3 = r29 + 0x2c; // 0x8081C81C
    /* li r6, 0xc */ // 0x8081C820
    r4 = r30 + 0; // 0x8081C824
    r5 = r31 + 0; // 0x8081C828
    /* li r7, 3 */ // 0x8081C82C
    FUN_805E3430(r3, r6, r4, r5, r7); // bl 0x805E3430
}