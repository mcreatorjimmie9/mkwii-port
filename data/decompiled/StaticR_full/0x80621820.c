/* Function at 0x80621820, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80621820(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80621830
    r30 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r3, 0 */ // 0x8062183C
    /* li r0, 2 */ // 0x80621840
    r3 = r3 + 0; // 0x80621844
    *(0xc + r30) = r3; // stw @ 0x80621848
    /* li r3, 8 */ // 0x8062184C
    *(0x30 + r30) = r0; // stb @ 0x80621850
    FUN_805E3430(r3, r3); // bl 0x805E3430
}