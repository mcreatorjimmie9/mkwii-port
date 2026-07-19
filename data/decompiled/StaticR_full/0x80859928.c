/* Function at 0x80859928, size=88 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_80859928(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x80859940
    *(0x10 + r1) = r28; // stw @ 0x80859944
    FUN_8086EA18(); // bl 0x8086EA18
    /* lis r3, 0 */ // 0x8085994C
    /* lis r29, 0 */ // 0x80859950
    r3 = r3 + 0; // 0x80859954
    /* lis r30, 0 */ // 0x80859958
    r0 = r3 + 8; // 0x8085995C
    *(0xc + r31) = r3; // stw @ 0x80859960
    r3 = r31 + 0x3f4; // 0x80859964
    r4 = r29 + 0; // 0x80859968
    *(8 + r31) = r0; // stw @ 0x8085996C
    r5 = r30 + 0; // 0x80859970
    /* li r6, 0xc */ // 0x80859974
    /* li r7, 2 */ // 0x80859978
    FUN_805E3430(r4, r5, r6, r7); // bl 0x805E3430
}