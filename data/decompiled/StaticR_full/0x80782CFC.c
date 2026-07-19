/* Function at 0x80782CFC, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_80782CFC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x80782D04
    r5 = r5 + 0; // 0x80782D0C
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80782D18
    *(0x14 + r1) = r29; // stw @ 0x80782D1C
    *(0x10 + r1) = r28; // stw @ 0x80782D20
    FUN_8089F578(); // bl 0x8089F578
    /* lis r5, 0 */ // 0x80782D28
    /* li r28, 0 */ // 0x80782D2C
    r5 = r5 + 0; // 0x80782D30
    /* lis r29, 0 */ // 0x80782D34
    r4 = r5 + 0xec; // 0x80782D38
    /* li r6, -1 */ // 0x80782D3C
    r30 = r29 + 0; // 0x80782D40
    /* li r0, 3 */ // 0x80782D44
    *(0xb4 + r31) = r28; // sth @ 0x80782D48
    /* li r3, 6 */ // 0x80782D4C
    *(0xb8 + r31) = r6; // stw @ 0x80782D50
    *(0xbc + r31) = r28; // stw @ 0x80782D54
    *(0 + r31) = r5; // stw @ 0x80782D58
    *(0xb0 + r31) = r4; // stw @ 0x80782D5C
    *(0xcc + r31) = r31; // stw @ 0x80782D60
    *(0xc8 + r31) = r30; // stw @ 0x80782D64
    *(0xc0 + r31) = r0; // sth @ 0x80782D68
    FUN_805E3430(); // bl 0x805E3430
}