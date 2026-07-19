/* Function at 0x807E7C74, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807E7C74(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807E7C84
    r31 = r31 + 0; // 0x807E7C88
    *(8 + r1) = r30; // stw @ 0x807E7C8C
    r30 = r3;
    r5 = r31 + 0x95; // 0x807E7C94
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807E7C9C
    /* li r3, 0x7c */ // 0x807E7CA0
    r4 = r4 + 0; // 0x807E7CA4
    *(0 + r30) = r4; // stw @ 0x807E7CA8
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}