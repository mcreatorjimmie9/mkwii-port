/* Function at 0x805BA798, size=176 bytes */
/* Stack frame: 288 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_805BA798(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -288(r1) */
    /* saved r27 */
    /* lis r6, 0 */ // 0x805BA7A0
    *(0x124 + r1) = r0; // stw @ 0x805BA7A4
    /* stmw r27, 0x10c(r1) */ // 0x805BA7A8
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r31 = r6 + 0; // 0x805BA7B8
    /* li r30, 0 */ // 0x805BA7BC
    /* b 0x805ba848 */ // 0x805BA7C0
    r3 = *(0x18 + r27); // lwz @ 0x805BA7C4
    r0 = r30 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805BA7CC
    if (==) goto 0x0x805ba7e4;
    if (==) goto 0x0x805ba808;
    /* b 0x805ba844 */ // 0x805BA7E0
    r4 = *(0x10 + r27); // lwz @ 0x805BA7E4
    r6 = r28;
    r5 = r31 + 0x10; // 0x805BA7F0
    /* lwzx r7, r4, r0 */ // 0x805BA7F4
    /* li r4, 0x100 */ // 0x805BA7F8
    /* crclr cr1eq */ // 0x805BA7FC
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
    /* b 0x805ba824 */ // 0x805BA804
    r6 = *(0x10 + r27); // lwz @ 0x805BA808
    r5 = r31 + 0x15; // 0x805BA810
    /* li r4, 0x100 */ // 0x805BA814
    /* lwzx r6, r6, r0 */ // 0x805BA818
    /* crclr cr1eq */ // 0x805BA81C
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
    /* clrlwi r0, r30, 0x10 */ // 0x805BA824
    r3 = *(4 + r27); // lwz @ 0x805BA828
    /* mulli r0, r0, 0x24 */ // 0x805BA82C
    r5 = r29;
    /* li r6, 8 */ // 0x805BA838
    r3 = r3 + r0; // 0x805BA83C
    FUN_805A8D1C(r5, r4, r6); // bl 0x805A8D1C
    r30 = r30 + 1; // 0x805BA844
}