/* Function at 0x808D2D6C, size=64 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_808D2D6C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r26 */
    /* lis r5, 0 */ // 0x808D2D74
    /* lis r4, 0 */ // 0x808D2D78
    *(0xe4 + r1) = r0; // stw @ 0x808D2D7C
    /* li r6, 0 */ // 0x808D2D80
    /* stmw r26, 0xc8(r1) */ // 0x808D2D84
    r30 = r3;
    r31 = r5 + 0; // 0x808D2D8C
    r5 = r31 + 0x62; // 0x808D2D90
    r3 = *(0 + r4); // lwz @ 0x808D2D94
    /* li r4, 2 */ // 0x808D2D98
    FUN_805CFD60(r5, r4); // bl 0x805CFD60
    r28 = r3;
    /* li r3, 0x20 */ // 0x808D2DA4
    FUN_805E3430(r4, r3); // bl 0x805E3430
}