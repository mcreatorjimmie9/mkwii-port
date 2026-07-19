/* Function at 0x806F4E78, size=192 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 2 function(s) */

int FUN_806F4E78(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* stmw r23, 0xc(r1) */ // 0x806F4E84
    r29 = r3 + 0xc8; // 0x806F4E88
    r25 = r3;
    /* li r26, 0 */ // 0x806F4E90
    r28 = r29;
    /* lis r24, 0 */ // 0x806F4E98
    /* lis r30, 0 */ // 0x806F4E9C
    /* li r31, 1 */ // 0x806F4EA0
    r5 = *(0 + r30); // lwz @ 0x806F4EA4
    /* clrlwi r0, r26, 0x18 */ // 0x806F4EA8
    r27 = r31 << r0; // slw
    r0 = *(0x291c + r5); // lwz @ 0x806F4EB0
    /* mulli r0, r0, 0x58 */ // 0x806F4EB4
    r3 = r5 + r0; // 0x806F4EB8
    r0 = *(0x48 + r3); // lwz @ 0x806F4EBC
    /* and. r0, r27, r0 */ // 0x806F4EC0
    if (==) goto 0x0x806f4f4c;
    r0 = *(0x59 + r3); // lbz @ 0x806F4EC8
    if (==) goto 0x0x806f4f4c;
    r0 = r26 rlwinm 5; // rlwinm
    r3 = r26 rlwinm 2; // rlwinm
    r4 = r5 + r0; // 0x806F4EDC
    r0 = *(0x27b0 + r4); // lwz @ 0x806F4EE0
    /* mulli r0, r0, 0x30 */ // 0x806F4EE4
    r0 = r5 + r0; // 0x806F4EE8
    r3 = r3 + r0; // 0x806F4EEC
    r3 = *(0x150 + r3); // lwz @ 0x806F4EF0
    r23 = *(0x14 + r3); // lwz @ 0x806F4EF4
    r5 = *(8 + r23); // lwz @ 0x806F4EF8
    if (==) goto 0x0x806f4f4c;
    r4 = *(0 + r23); // lwz @ 0x806F4F04
    r3 = r29;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = *(0x9e4 + r25); // lwz @ 0x806F4F10
    /* and. r0, r3, r27 */ // 0x806F4F14
    if (!=) goto 0x0x806f4f44;
    r0 = r3 | r27; // 0x806F4F1C
    *(0x9e4 + r25) = r0; // stw @ 0x806F4F20
    r4 = r28;
    r3 = r25 + 0x9c8; // 0x806F4F28
    /* clrlwi r5, r26, 0x10 */ // 0x806F4F2C
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = *(0 + r24); // lwz @ 0x806F4F34
}