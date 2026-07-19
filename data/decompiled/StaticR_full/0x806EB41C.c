/* Function at 0x806EB41C, size=76 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

int FUN_806EB41C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* stmw r23, 0xc(r1) */ // 0x806EB428
    /* li r31, 0 */ // 0x806EB42C
    r23 = r3;
    r24 = r3 + 4; // 0x806EB434
    /* li r28, 0 */ // 0x806EB438
    /* li r30, 0x10 */ // 0x806EB43C
    *(0 + r3) = r31; // stb @ 0x806EB440
    *(0 + r24) = r31; // stw @ 0x806EB444
    r3 = r24 + 4; // 0x806EB448
    /* li r4, 0 */ // 0x806EB44C
    /* li r5, 0x15 */ // 0x806EB450
    *(0x19 + r24) = r31; // stb @ 0x806EB454
    *(0x1a + r24) = r30; // stb @ 0x806EB458
    *(0x1b + r24) = r31; // stb @ 0x806EB45C
    *(0x1c + r24) = r31; // stb @ 0x806EB460
    FUN_805E3430(r5); // bl 0x805E3430
}