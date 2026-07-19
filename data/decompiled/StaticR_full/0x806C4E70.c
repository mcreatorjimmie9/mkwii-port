/* Function at 0x806C4E70, size=68 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806C4E70(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -240(r1) */
    /* saved r31 */
    *(0xec + r1) = r31; // stw @ 0x806C4E7C
    r31 = r3;
    FUN_805ABFC4(r3); // bl 0x805ABFC4
    r3 = r31 + 0x404; // 0x806C4E8C
    /* li r5, 0 */ // 0x806C4E94
    FUN_80660C30(r3, r3, r4, r5); // bl 0x80660C30
    /* lis r4, 0 */ // 0x806C4E9C
    r4 = r4 + 0; // 0x806C4EA4
    /* li r5, 0xc */ // 0x806C4EA8
    /* li r6, 5 */ // 0x806C4EAC
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
}