/* Function at 0x80655040, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80655040(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8065504C
    /* lis r31, 0 */ // 0x80655050
    r31 = r31 + 0; // 0x80655054
    FUN_805ABAFC(); // bl 0x805ABAFC
    r4 = r3;
    /* li r3, 0x5230 */ // 0x80655060
    r4 = *(0xc98 + r4); // lwz @ 0x80655064
    /* li r5, 4 */ // 0x80655068
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
}