/* Function at 0x80835400, size=68 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80835400(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80835408
    /* lis r6, 0 */ // 0x8083540C
    *(0x44 + r1) = r0; // stw @ 0x80835410
    r4 = r4 + 0; // 0x80835414
    r5 = r4 + 0xd; // 0x80835418
    r6 = r6 + 0; // 0x8083541C
    *(0x3c + r1) = r31; // stw @ 0x80835420
    /* li r7, 0 */ // 0x80835424
    /* li r8, 0 */ // 0x80835428
    *(0x38 + r1) = r30; // stw @ 0x8083542C
    *(0x34 + r1) = r29; // stw @ 0x80835430
    r29 = r3;
    FUN_8082AFF0(r7, r8); // bl 0x8082AFF0
    /* li r3, 0x4c */ // 0x8083543C
    FUN_805E3430(r3); // bl 0x805E3430
}