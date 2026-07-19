/* Function at 0x805BA490, size=216 bytes */
/* Stack frame: 288 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_805BA490(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -288(r1) */
    /* saved r27 */
    /* stmw r27, 0x10c(r1) */ // 0x805BA49C
    /* lis r30, 0 */ // 0x805BA4A0
    r27 = r3;
    r28 = r4;
    /* li r29, 0 */ // 0x805BA4AC
    r31 = r30 + 0; // 0x805BA4B0
    /* b 0x805ba558 */ // 0x805BA4B4
    r3 = *(0x18 + r27); // lwz @ 0x805BA4B8
    r0 = r29 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805BA4C0
    if (==) goto 0x0x805ba4e0;
    if (==) goto 0x0x805ba504;
    if (==) goto 0x0x805ba524;
    /* b 0x805ba554 */ // 0x805BA4DC
    r4 = *(0x10 + r27); // lwz @ 0x805BA4E0
    r6 = r28;
    r5 = r30 + 0; // 0x805BA4EC
    /* lwzx r7, r4, r0 */ // 0x805BA4F0
    /* li r4, 0x100 */ // 0x805BA4F4
    /* crclr cr1eq */ // 0x805BA4F8
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
    /* b 0x805ba53c */ // 0x805BA500
    r6 = *(0x10 + r27); // lwz @ 0x805BA504
    r5 = r31 + 5; // 0x805BA50C
    /* li r4, 0x100 */ // 0x805BA510
    /* lwzx r6, r6, r0 */ // 0x805BA514
    /* crclr cr1eq */ // 0x805BA518
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
    /* b 0x805ba53c */ // 0x805BA520
    r3 = *(0x14 + r27); // lwz @ 0x805BA524
    /* lwzx r0, r3, r0 */ // 0x805BA528
    if (==) goto 0x0x805ba53c;
    /* li r3, 1 */ // 0x805BA534
    /* b 0x805ba56c */ // 0x805BA538
    FUN_805E3430(r3, r3); // bl 0x805E3430
    if (==) goto 0x0x805ba554;
    /* li r3, 1 */ // 0x805BA54C
    /* b 0x805ba56c */ // 0x805BA550
    r29 = r29 + 1; // 0x805BA554
    r0 = *(8 + r27); // lhz @ 0x805BA558
    /* clrlwi r3, r29, 0x10 */ // 0x805BA55C
    if (<) goto 0x0x805ba4b8;
}