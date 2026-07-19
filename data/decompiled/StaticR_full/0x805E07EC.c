/* Function at 0x805E07EC, size=64 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_805E07EC(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x805E07F8
    /* lis r28, 0 */ // 0x805E07FC
    r29 = r28 + 0; // 0x805E0800
    /* lis r27, 0 */ // 0x805E0804
    /* li r31, 0 */ // 0x805E0808
    /* li r30, -1 */ // 0x805E080C
    r27 = r27 + 0; // 0x805E0810
    r25 = *(0xb8 + r29); // lwz @ 0x805E0814
    r24 = *(0xbc + r29); // lwz @ 0x805E0818
    r3 = r27 + 8; // 0x805E081C
    /* li r5, 1 */ // 0x805E0824
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}