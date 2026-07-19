/* Function at 0x80653624, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80653624(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80653630
    r31 = r3;
    FUN_806724EC(); // bl 0x806724EC
    /* lis r3, 0 */ // 0x8065363C
    /* lis r4, 0 */ // 0x80653640
    r3 = r3 + 0; // 0x80653644
    /* lis r5, 0 */ // 0x80653648
    *(0 + r31) = r3; // stw @ 0x8065364C
    r3 = r31 + 0x44; // 0x80653650
    r4 = r4 + 0; // 0x80653654
    r5 = r5 + 0; // 0x80653658
    /* li r6, 0x1dc */ // 0x8065365C
    /* li r7, 4 */ // 0x80653660
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
}