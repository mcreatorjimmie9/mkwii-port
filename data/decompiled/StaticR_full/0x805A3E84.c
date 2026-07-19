/* Function at 0x805A3E84, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_805A3E84(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x805A3E8C
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805A3E9C
    /* li r30, 0 */ // 0x805A3EA0
    *(0x14 + r1) = r29; // stw @ 0x805A3EA4
    *(0x10 + r1) = r28; // stw @ 0x805A3EA8
    *(0 + r3) = r30; // stw @ 0x805A3EAC
    *(4 + r3) = r30; // sth @ 0x805A3EB0
    *(8 + r3) = r4; // stw @ 0x805A3EB4
    r5 = *(0 + r5); // lwz @ 0x805A3EB8
    r5 = *(4 + r5); // lwz @ 0x805A3EBC
    r0 = *(8 + r5); // lwz @ 0x805A3EC0
    if (<=) goto 0x0x805a3f34;
    r29 = *(4 + r4); // lhz @ 0x805A3ECC
    r30 = r4 + 8; // 0x805A3ED0
    if (==) goto 0x0x805a3eec;
    *(4 + r3) = r29; // sth @ 0x805A3EDC
    r3 = r29 rlwinm 2; // rlwinm
    FUN_805E3430(); // bl 0x805E3430
    *(0 + r31) = r3; // stw @ 0x805A3EE8
    /* li r28, 0 */ // 0x805A3EEC
    /* b 0x805a3f24 */ // 0x805A3EF0
    /* li r3, 8 */ // 0x805A3EF4
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805a3f14;
    /* clrlwi r0, r28, 0x10 */ // 0x805A3F04
    /* mulli r0, r0, 0x1c */ // 0x805A3F08
    r0 = r30 + r0; // 0x805A3F0C
    *(0 + r3) = r0; // stw @ 0x805A3F10
    r4 = *(0 + r31); // lwz @ 0x805A3F14
    r0 = r28 rlwinm 2; // rlwinm
    r28 = r28 + 1; // 0x805A3F1C
    /* stwx r3, r4, r0 */ // 0x805A3F20
    /* clrlwi r0, r28, 0x10 */ // 0x805A3F24
    if (<) goto 0x0x805a3ef4;
    /* b 0x805a3f70 */ // 0x805A3F30
    /* li r0, 1 */ // 0x805A3F34
    *(4 + r3) = r0; // sth @ 0x805A3F38
    r28 = r4 + 4; // 0x805A3F3C
}