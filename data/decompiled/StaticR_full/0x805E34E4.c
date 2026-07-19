/* Function at 0x805E34E4, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805E34E4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x805E34EC
    r4 = r4 + 0; // 0x805E34F4
    *(0xc + r1) = r31; // stw @ 0x805E34F8
    /* li r31, 0 */ // 0x805E34FC
    *(8 + r1) = r30; // stw @ 0x805E3500
    r30 = r3;
    *(0 + r3) = r4; // stw @ 0x805E3508
    *(0xc + r3) = r31; // stw @ 0x805E350C
    *(8 + r3) = r31; // stw @ 0x805E3510
    *(0x14 + r3) = r31; // stw @ 0x805E3514
    *(0x10 + r3) = r31; // stw @ 0x805E3518
    FUN_805E3430(); // bl 0x805E3430
}