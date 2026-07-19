/* Function at 0x808F6D40, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_808F6D40(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x808F6D4C
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
    FUN_808F8DD8(); // bl 0x808F8DD8
    /* lis r4, 0 */ // 0x808F6D68
    *(0x2c + r27) = r31; // stw @ 0x808F6D6C
    r4 = r4 + 0; // 0x808F6D70
    r3 = r27;
    *(0 + r27) = r4; // stw @ 0x808F6D78
    r4 = r28;
    r5 = r29;
    r6 = r30;
    FUN_808F8EAC(r3, r4, r5, r6); // bl 0x808F8EAC
    r3 = r27;
    r0 = *(0x24 + r1); // lwz @ 0x808F6D94
    return;
}