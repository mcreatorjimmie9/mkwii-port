/* Function at 0x806F8AC4, size=352 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_806F8AC4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x806F8AD0
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r0 = *(0x41f4 + r3); // lwz @ 0x806F8AE0
    if (!=) goto 0x0x806f8c0c;
    /* lis r3, 0 */ // 0x806F8AEC
    /* li r30, 0 */ // 0x806F8AF0
    r3 = *(0 + r3); // lwz @ 0x806F8AF4
    /* addis r31, r3, 2 */ // 0x806F8AF8
    r0 = *(0x41f4 + r27); // lwz @ 0x806F8AFC
    if (!=) goto 0x0x806f8b44;
    /* addis r3, r27, 1 */ // 0x806F8B08
    r0 = *(0x58 + r27); // lwz @ 0x806F8B0C
    r3 = *(-0x7500 + r3); // lwz @ 0x806F8B10
    if (>) goto 0x0x806f8b44;
    r0 = *(0x55 + r27); // lbz @ 0x806F8B1C
    if (==) goto 0x0x806f8b34;
    if (==) goto 0x0x806f8b3c;
    /* b 0x806f8b44 */ // 0x806F8B30
    /* li r0, 1 */ // 0x806F8B34
    /* b 0x806f8b48 */ // 0x806F8B38
    /* li r0, 2 */ // 0x806F8B3C
    /* b 0x806f8b48 */ // 0x806F8B40
    /* li r0, 3 */ // 0x806F8B44
    if (==) goto 0x0x806f8b58;
    if (==) goto 0x0x806f8bf8;
    /* addis r3, r27, 1 */ // 0x806F8B58
    r4 = *(0x58 + r27); // lwz @ 0x806F8B5C
    r0 = *(-0x7500 + r3); // lwz @ 0x806F8B60
    /* subf r26, r30, r4 */ // 0x806F8B64
    if (<) goto 0x0x806f8c04;
    r3 = *(0x4ffc + r31); // lwz @ 0x806F8B70
    r4 = r26;
    /* addis r3, r3, 2 */ // 0x806F8B78
    r3 = r3 + 0x3308; // 0x806F8B7C
    FUN_805D76F0(r4, r3); // bl 0x805D76F0
    /* extsh r0, r3 */ // 0x806F8B84
    if (!=) goto 0x0x806f8b9c;
    *(0 + r28) = r26; // stw @ 0x806F8B90
    /* li r3, 1 */ // 0x806F8B94
    /* b 0x806f8c10 */ // 0x806F8B98
    if (==) goto 0x0x806f8bf8;
    /* clrlwi r0, r3, 0x18 */ // 0x806F8BA4
    r3 = *(0x4ffc + r31); // lwz @ 0x806F8BA8
    /* mulli r0, r0, 0x384 */ // 0x806F8BAC
    /* addis r3, r3, 2 */ // 0x806F8BB0
    r3 = r3 + 0x3308; // 0x806F8BB4
    r3 = r3 + r0; // 0x806F8BB8
    r0 = *(8 + r3); // lwz @ 0x806F8BBC
    if (<) goto 0x0x806f8bd0;
    r3 = r3 + 0xc; // 0x806F8BC8
    /* b 0x806f8bd4 */ // 0x806F8BCC
    /* li r3, 0 */ // 0x806F8BD0
    r0 = *(0x1a4 + r3); // lbz @ 0x806F8BD4
    if (!=) goto 0x0x806f8bec;
    r0 = *(0xc4 + r3); // lbz @ 0x806F8BE0
    if (==) goto 0x0x806f8bf8;
    *(0 + r28) = r26; // stw @ 0x806F8BEC
    /* li r3, 1 */ // 0x806F8BF0
    /* b 0x806f8c10 */ // 0x806F8BF4
    r30 = r30 + 1; // 0x806F8BF8
    if (<) goto 0x0x806f8afc;
    /* li r3, 0 */ // 0x806F8C04
    /* b 0x806f8c10 */ // 0x806F8C08
    /* li r3, 0 */ // 0x806F8C0C
    r0 = *(0x24 + r1); // lwz @ 0x806F8C14
    return;
}