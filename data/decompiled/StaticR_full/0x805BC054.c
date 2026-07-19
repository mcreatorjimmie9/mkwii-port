/* Function at 0x805BC054, size=196 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_805BC054(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -176(r1) */
    /* saved r27 */
    /* stmw r27, 0x9c(r1) */ // 0x805BC060
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r3 = r27;
    /* li r5, 2 */ // 0x805BC07C
    FUN_805BAB90(r3, r4, r5); // bl 0x805BAB90
    r31 = r3;
    if (!=) goto 0x0x805bc0bc;
    r3 = r27;
    /* li r4, 0x30 */ // 0x805BC094
    FUN_805BB588(r3, r4); // bl 0x805BB588
    r31 = r3;
    if (!=) goto 0x0x805bc0bc;
    r3 = r27;
    /* li r5, 2 */ // 0x805BC0B0
    FUN_805BAB90(r3, r4, r5); // bl 0x805BAB90
    r31 = r3;
    if (!=) goto 0x0x805bc100;
    r4 = r28;
    r5 = r29;
    r6 = r30;
    FUN_805BB100(r4, r5, r6, r3); // bl 0x805BB100
    r31 = r3;
    FUN_805BAD70(r6, r3, r3); // bl 0x805BAD70
    if (==) goto 0x0x805bc0f4;
    /* li r31, 8 */ // 0x805BC0EC
    /* b 0x805bc100 */ // 0x805BC0F0
    if (!=) goto 0x0x805bc100;
    r31 = r3;
    r3 = r31;
    r0 = *(0xb4 + r1); // lwz @ 0x805BC108
    return;
}