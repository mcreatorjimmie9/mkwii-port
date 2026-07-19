/* Function at 0x805D0E30, size=60 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_805D0E30(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x805D0E3C
    r28 = r3;
    r29 = r4;
    r26 = r5;
    FUN_805ABAFC(); // bl 0x805ABAFC
    /* slwi r31, r26, 2 */ // 0x805D0E50
    /* lis r5, 0xd */ // 0x805D0E54
    r3 = r3 + r31; // 0x805D0E58
    r4 = *(0xc94 + r3); // lwz @ 0x805D0E5C
    r3 = r5 + -0x8000; // 0x805D0E60
    /* li r5, 0 */ // 0x805D0E64
    FUN_805E3430(r5, r3, r5); // bl 0x805E3430
}