/* Function at 0x807D1F8C, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_807D1F8C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* slwi r0, r4, 2 */ // 0x807D1F98
    /* stmw r27, 0xc(r1) */ // 0x807D1F9C
    r31 = r3 + r0; // 0x807D1FA0
    /* li r28, 0 */ // 0x807D1FA4
    /* li r27, 0 */ // 0x807D1FA8
    /* li r30, 0 */ // 0x807D1FAC
    r3 = *(0xc0 + r31); // lwz @ 0x807D1FB0
    r29 = *(0x18 + r3); // lwz @ 0x807D1FB4
    /* b 0x807d1fdc */ // 0x807D1FB8
    r3 = *(0xc0 + r31); // lwz @ 0x807D1FBC
    /* lwzx r3, r3, r30 */ // 0x807D1FC0
    FUN_807B5F00(); // bl 0x807B5F00
    if (==) goto 0x0x807d1fd4;
    r28 = r28 + 1; // 0x807D1FD0
    r30 = r30 + 4; // 0x807D1FD4
    r27 = r27 + 1; // 0x807D1FD8
    if (<) goto 0x0x807d1fbc;
    r3 = r28;
    r0 = *(0x24 + r1); // lwz @ 0x807D1FEC
    return;
}