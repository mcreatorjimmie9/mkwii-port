/* Function at 0x805E31D4, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805E31D4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x805E31DC
    /* li r0, 1 */ // 0x805E31E4
    *(0x1c + r1) = r31; // stw @ 0x805E31E8
    *(0x18 + r1) = r30; // stw @ 0x805E31EC
    *(0x14 + r1) = r29; // stw @ 0x805E31F0
    r29 = r3;
    *(0 + r4) = r0; // sth @ 0x805E31F8
    FUN_805ABAFC(); // bl 0x805ABAFC
    /* li r4, 8 */ // 0x805E3200
    r3 = r3 + 0xc94; // 0x805E3204
    FUN_805E3430(r4, r3); // bl 0x805E3430
}