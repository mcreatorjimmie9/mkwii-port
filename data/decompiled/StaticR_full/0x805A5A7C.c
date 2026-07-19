/* Function at 0x805A5A7C, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_805A5A7C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r5, 0 */ // 0x805A5A84
    *(0x24 + r1) = r0; // stw @ 0x805A5A88
    /* li r0, 0 */ // 0x805A5A8C
    r5 = r5 + 0; // 0x805A5A90
    /* stmw r27, 0xc(r1) */ // 0x805A5A94
    r28 = r3;
    *(0 + r3) = r0; // stw @ 0x805A5A9C
    *(4 + r3) = r0; // sth @ 0x805A5AA0
    *(8 + r3) = r5; // stw @ 0x805A5AA4
    *(0x10 + r3) = r0; // stw @ 0x805A5AA8
    *(0xc + r3) = r4; // stw @ 0x805A5AAC
    r30 = *(4 + r4); // lhz @ 0x805A5AB0
    if (==) goto 0x0x805a5acc;
    *(4 + r3) = r30; // sth @ 0x805A5ABC
    r3 = r30 rlwinm 2; // rlwinm
    FUN_805E3430(); // bl 0x805E3430
    *(0 + r28) = r3; // stw @ 0x805A5AC8
    /* li r29, 0 */ // 0x805A5ACC
    /* lis r31, 0 */ // 0x805A5AD0
    /* b 0x805a5b88 */ // 0x805A5AD4
    r3 = *(0 + r31); // lwz @ 0x805A5AD8
    r3 = *(4 + r3); // lwz @ 0x805A5ADC
    r0 = *(8 + r3); // lwz @ 0x805A5AE0
    if (<) goto 0x0x805a5b04;
    /* clrlwi r0, r29, 0x10 */ // 0x805A5AEC
    r3 = *(0xc + r28); // lwz @ 0x805A5AF0
    /* mulli r0, r0, 0x30 */ // 0x805A5AF4
    r3 = r3 + r0; // 0x805A5AF8
    r27 = r3 + 8; // 0x805A5AFC
    /* b 0x805a5b20 */ // 0x805A5B00
    /* clrlwi r0, r29, 0x10 */ // 0x805A5B04
    r4 = *(0xc + r28); // lwz @ 0x805A5B08
    /* mulli r3, r0, 0x30 */ // 0x805A5B0C
    r0 = r29 rlwinm 2; // rlwinm
    r3 = r4 + r3; // 0x805A5B14
    r3 = r3 + 8; // 0x805A5B18
    /* subf r27, r0, r3 */ // 0x805A5B1C
    r0 = *(0 + r27); // lbz @ 0x805A5B20
    if (==) goto 0x0x805a5b38;
    if (==) goto 0x0x805a5b60;
    /* b 0x805a5b84 */ // 0x805A5B34
    /* li r3, 0x48 */ // 0x805A5B38
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805a5b50;
    r4 = r27;
    FUN_805A5E4C(r3, r4); // bl 0x805A5E4C
    r4 = *(0 + r28); // lwz @ 0x805A5B50
    r0 = r29 rlwinm 2; // rlwinm
    /* stwx r3, r4, r0 */ // 0x805A5B58
}