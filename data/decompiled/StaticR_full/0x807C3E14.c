/* Function at 0x807C3E14, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_807C3E14(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x807C3E20
    /* lis r30, 0 */ // 0x807C3E24
    r27 = r3;
    r3 = *(0 + r30); // lwz @ 0x807C3E2C
    FUN_805C2BFC(); // bl 0x805C2BFC
    r29 = r27;
    /* clrlwi r31, r3, 0x18 */ // 0x807C3E38
    /* li r28, 0 */ // 0x807C3E3C
    /* b 0x807c3e80 */ // 0x807C3E40
    r3 = *(0xc + r29); // lwz @ 0x807C3E44
    r3 = *(4 + r3); // lwz @ 0x807C3E48
    r3 = *(0 + r3); // lwz @ 0x807C3E4C
    FUN_8061E2D8(); // bl 0x8061E2D8
    r4 = *(0 + r30); // lwz @ 0x807C3E54
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0xc + r4); // lwz @ 0x807C3E5C
    /* lwzx r3, r3, r0 */ // 0x807C3E60
    r0 = *(0x26 + r3); // lbz @ 0x807C3E64
    if (==) goto 0x0x807c3e78;
    /* li r3, 0 */ // 0x807C3E70
    /* b 0x807c3e90 */ // 0x807C3E74
    r29 = r29 + 4; // 0x807C3E78
    r28 = r28 + 1; // 0x807C3E7C
    r0 = *(4 + r27); // lwz @ 0x807C3E80
    if (<) goto 0x0x807c3e44;
    /* li r3, 1 */ // 0x807C3E8C
    r0 = *(0x24 + r1); // lwz @ 0x807C3E94
    return;
}