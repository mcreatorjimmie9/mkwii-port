/* Function at 0x806648E8, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806648E8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* srwi r6, r4, 0x18 */ // 0x806648F0
    /* li r4, 7 */ // 0x806648F4
    *(0x24 + r1) = r0; // stw @ 0x806648F8
    *(0x1c + r1) = r31; // stw @ 0x806648FC
    /* lis r31, 0 */ // 0x80664900
    r31 = r31 + 0; // 0x80664904
    *(0x18 + r1) = r30; // stw @ 0x80664908
    r30 = r3;
    r5 = r31 + 0x204; // 0x80664914
    /* crclr cr1eq */ // 0x80664918
    FUN_805E3430(r3, r5); // bl 0x805E3430
}