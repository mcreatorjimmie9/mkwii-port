/* Function at 0x80810868, size=60 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_80810868(int r3, int r4, int r5)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x70 + r1) = r28; // stw @ 0x80810880
    r28 = r3;
    FUN_808A0278(); // bl 0x808A0278
    FUN_805ABAFC(); // bl 0x805ABAFC
    /* lis r30, 1 */ // 0x80810890
    r4 = *(0xc98 + r3); // lwz @ 0x80810894
    r3 = r30 + 0x2000; // 0x80810898
    /* li r5, 0x20 */ // 0x8081089C
    FUN_805E3430(r3, r5); // bl 0x805E3430
}