/* Function at 0x805B2F1C, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B2F1C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x805B2F24
    /* lis r4, 0 */ // 0x805B2F28
    *(0x24 + r1) = r0; // stw @ 0x805B2F2C
    /* lis r5, 0 */ // 0x805B2F30
    r6 = r6 + 0; // 0x805B2F34
    r4 = r4 + 0; // 0x805B2F38
    *(0x1c + r1) = r31; // stw @ 0x805B2F3C
    r5 = r5 + 0; // 0x805B2F40
    /* li r7, 4 */ // 0x805B2F44
    *(0x18 + r1) = r30; // stw @ 0x805B2F48
    *(0x14 + r1) = r29; // stw @ 0x805B2F4C
    r29 = r3;
    *(0 + r3) = r6; // stw @ 0x805B2F54
    /* li r6, 0xec */ // 0x805B2F58
    r3 = r3 + 4; // 0x805B2F5C
    FUN_805E3430(r6, r3); // bl 0x805E3430
}