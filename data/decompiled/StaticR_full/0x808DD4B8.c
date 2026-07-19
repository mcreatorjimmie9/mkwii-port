/* Function at 0x808DD4B8, size=68 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808DD4B8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0x14 */ // 0x808DD4C0
    *(0x7c + r1) = r31; // stw @ 0x808DD4C8
    r31 = r3;
    *(0x78 + r1) = r30; // stw @ 0x808DD4D4
    /* lis r30, 0 */ // 0x808DD4D8
    r30 = r30 + 0; // 0x808DD4DC
    r6 = r31 + 0x130; // 0x808DD4E0
    *(0x74 + r1) = r29; // stw @ 0x808DD4E4
    /* lis r29, 0 */ // 0x808DD4E8
    r29 = r29 + 0; // 0x808DD4EC
    r5 = r29 + 0xa; // 0x808DD4F0
    /* crclr cr1eq */ // 0x808DD4F4
    FUN_805E3430(r5); // bl 0x805E3430
}