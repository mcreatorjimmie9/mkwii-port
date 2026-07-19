/* Function at 0x80808E28, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80808E28(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80808E38
    r31 = r31 + 0; // 0x80808E3C
    *(0x18 + r1) = r30; // stw @ 0x80808E40
    r30 = r5;
    r5 = r31 + 0x129; // 0x80808E48
    *(0x14 + r1) = r29; // stw @ 0x80808E4C
    r29 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x80808E58
    *(0xb0 + r29) = r30; // stw @ 0x80808E5C
    r4 = r4 + 0; // 0x80808E60
    /* li r3, 0x7c */ // 0x80808E64
    *(0 + r29) = r4; // stw @ 0x80808E68
    FUN_805E3430(r4, r4, r3); // bl 0x805E3430
}