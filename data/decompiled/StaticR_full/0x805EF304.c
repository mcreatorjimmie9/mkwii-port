/* Function at 0x805EF304, size=80 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805EF304(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r27 */
    /* stmw r27, 0x5c(r1) */ // 0x805EF310
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r6 = *(0x10 + r3); // lwz @ 0x805EF320
    r0 = *(4 + r6); // lwz @ 0x805EF324
    if (!=) goto 0x0x805ef338;
    r31 = *(0 + r6); // lwz @ 0x805EF330
    /* b 0x805ef33c */ // 0x805EF334
    /* li r31, 0 */ // 0x805EF338
    /* li r30, 0 */ // 0x805EF33C
    /* b 0x805ef39c */ // 0x805EF340
    r4 = r31;
    r5 = r30;
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
}