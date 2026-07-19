/* Function at 0x8069F2D0, size=76 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_8069F2D0(int r3, int r4, int r5, int r7, int r8, int r9)
{
    /* Stack frame: -176(r1) */
    /* saved r26 */
    /* stfd f31, 0xa8(r1) */ // 0x8069F2DC
    /* fmr f31, f1 */ // 0x8069F2E0
    /* stmw r26, 0x90(r1) */ // 0x8069F2E4
    /* mulli r31, r4, 0x44 */ // 0x8069F2E8
    /* lis r4, 0 */ // 0x8069F2EC
    r26 = r3;
    r27 = r5;
    r28 = r7;
    r29 = r8;
    r4 = r4 + 0; // 0x8069F300
    r9 = *(0xc + r3); // lwz @ 0x8069F304
    r30 = *(0 + r3); // lwz @ 0x8069F308
    r5 = r9 + 0x28; // 0x8069F310
    /* crclr cr1eq */ // 0x8069F314
    FUN_805E3430(r3, r5); // bl 0x805E3430
}