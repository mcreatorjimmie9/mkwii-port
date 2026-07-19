/* Function at 0x8077647C, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8077647C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8077648C
    r5 = r31 + 0; // 0x80776490
    *(8 + r1) = r30; // stw @ 0x80776494
    r30 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807764A0
    /* li r3, 0x7c */ // 0x807764A4
    r4 = r4 + 0; // 0x807764A8
    *(0 + r30) = r4; // stw @ 0x807764AC
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}