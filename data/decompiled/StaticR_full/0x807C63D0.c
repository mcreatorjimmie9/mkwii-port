/* Function at 0x807C63D0, size=208 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 2 function(s) */

int FUN_807C63D0(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* srwi r0, r4, 0x1f */ // 0x807C63DC
    /* stmw r22, 8(r1) */ // 0x807C63E0
    r23 = r3;
    r24 = r4;
    /* li r28, 0x63 */ // 0x807C63EC
    r29 = r23;
    /* xori r30, r0, 1 */ // 0x807C63F4
    /* li r27, 0 */ // 0x807C63F8
    /* li r26, 0 */ // 0x807C63FC
    /* lis r22, 0 */ // 0x807C6400
    /* lis r31, 0 */ // 0x807C6404
    /* b 0x807c647c */ // 0x807C6408
    r25 = *(0xe8 + r29); // lwz @ 0x807C6410
    if (==) goto 0x0x807c643c;
    r3 = r25;
    FUN_807C36A8(r3); // bl 0x807C36A8
    /* clrlwi r0, r3, 0x18 */ // 0x807C6420
    r3 = *(0 + r31); // lwz @ 0x807C6424
    /* mulli r0, r0, 0xf0 */ // 0x807C6428
    r3 = r3 + r0; // 0x807C642C
    r0 = *(0xf4 + r3); // lwz @ 0x807C6430
    if (!=) goto 0x0x807c6474;
    r0 = *(8 + r25); // lwz @ 0x807C643C
    if (!=) goto 0x0x807c6474;
    r3 = r25;
    FUN_807C36A8(r3); // bl 0x807C36A8
    r4 = *(0 + r22); // lwz @ 0x807C6450
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0xc + r4); // lwz @ 0x807C6458
    /* lwzx r3, r3, r0 */ // 0x807C645C
    r0 = *(0x20 + r3); // lbz @ 0x807C6460
    if (<=) goto 0x0x807c6474;
    r28 = r0;
    r27 = r25;
    r29 = r29 + 8; // 0x807C6474
    r26 = r26 + 1; // 0x807C6478
    r0 = *(0x178 + r23); // lwz @ 0x807C647C
    if (<) goto 0x0x807c640c;
    r3 = r27;
    r0 = *(0x34 + r1); // lwz @ 0x807C6490
    return;
}