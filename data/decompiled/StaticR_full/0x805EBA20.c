/* Function at 0x805EBA20, size=180 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r20 */
/* Calls: 3 function(s) */

int FUN_805EBA20(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r20 */
    /* stmw r20, 0x10(r1) */ // 0x805EBA2C
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r20 = r6;
    r30 = r7;
    r31 = r8;
    r21 = r9;
    r22 = r10;
    r0 = *(4 + r3); // lwz @ 0x805EBA50
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x805EBA54
    if (==) goto 0x0x805eba68;
    r3 = r30;
    r4 = r27;
    FUN_805F32EC(r3, r4); // bl 0x805F32EC
    /* lis r25, 0 */ // 0x805EBA68
    /* li r24, 0 */ // 0x805EBA6C
    r26 = r25 + 0; // 0x805EBA70
    r3 = r27;
    r4 = r28;
    r5 = r29;
    r6 = r20;
    r7 = r30;
    r8 = r21;
    r9 = r22;
    /* clrlwi r10, r24, 0x18 */ // 0x805EBA90
    FUN_805EBC30(r6, r7, r8, r9); // bl 0x805EBC30
    r0 = *(0x3c + r27); // lwz @ 0x805EBA98
    r23 = r3;
    /* li r3, 0 */ // 0x805EBAA0
    if (==) goto 0x0x805ebab8;
    if (==) goto 0x0x805ebac0;
    /* b 0x805ebac4 */ // 0x805EBAB4
    r3 = *(0 + r25); // lwz @ 0x805EBAB8
    /* b 0x805ebac4 */ // 0x805EBABC
    r3 = *(4 + r26); // lwz @ 0x805EBAC0
    r4 = *(0x10 + r3); // lwz @ 0x805EBAC4
    /* li r3, 0x14 */ // 0x805EBAC8
    /* li r5, 4 */ // 0x805EBACC
    FUN_805E3430(r3, r5); // bl 0x805E3430
}