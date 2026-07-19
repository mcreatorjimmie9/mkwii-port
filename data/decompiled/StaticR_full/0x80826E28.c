/* Function at 0x80826E28, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_80826E28(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r4, 0 */ // 0x80826E30
    *(0x24 + r1) = r0; // stw @ 0x80826E34
    /* stmw r27, 0xc(r1) */ // 0x80826E38
    r31 = r3;
    r29 = *(0x10 + r3); // lbz @ 0x80826E40
    r27 = *(0 + r4); // lwz @ 0x80826E44
    /* b 0x80826f00 */ // 0x80826E48
    r4 = *(0x14 + r31); // lwz @ 0x80826E4C
    r30 = r29 rlwinm 2; // rlwinm
    r3 = r27;
    /* lbzx r28, r4, r30 */ // 0x80826E58
    FUN_806E4428(r3); // bl 0x806E4428
    r0 = *(0x14 + r31); // lwz @ 0x80826E60
    r4 = r0 + r30; // 0x80826E64
    r0 = *(2 + r4); // lbz @ 0x80826E68
    if (<) goto 0x0x80826e84;
    r3 = r27;
    FUN_806E4370(r3); // bl 0x806E4370
    if (!=) goto 0x0x80826ebc;
    r0 = *(0x10 + r31); // lbz @ 0x80826E84
    /* li r4, 0 */ // 0x80826E88
    /* b 0x80826ea0 */ // 0x80826E8C
    r3 = *(0x14 + r31); // lwz @ 0x80826E90
    r0 = r0 rlwinm 2; // rlwinm
    r4 = r4 + 1; // 0x80826E98
    /* lbzx r0, r3, r0 */ // 0x80826E9C
    if (!=) goto 0x0x80826e90;
    r0 = *(0x1c + r31); // lwz @ 0x80826EA8
    if (>=) goto 0x0x80826f0c;
    *(0x1c + r31) = r4; // stw @ 0x80826EB4
    /* b 0x80826f0c */ // 0x80826EB8
    r3 = *(0x14 + r31); // lwz @ 0x80826EBC
    /* clrlwi r0, r29, 0x18 */ // 0x80826EC0
    r5 = *(0x11 + r31); // lbz @ 0x80826EC4
    /* mulli r4, r0, 0x24 */ // 0x80826EC8
    /* stbx r5, r3, r30 */ // 0x80826ECC
    r3 = r27;
    r5 = *(0x18 + r31); // lwz @ 0x80826ED4
    r0 = *(0x14 + r31); // lwz @ 0x80826ED8
    *(0x11 + r31) = r29; // stb @ 0x80826EDC
    r6 = r5 + r4; // 0x80826EE0
    r7 = r0 + r30; // 0x80826EE4
    *(0x10 + r31) = r28; // stb @ 0x80826EE8
    r4 = *(0x18 + r6); // lwz @ 0x80826EEC
    r5 = *(0x1c + r6); // lwz @ 0x80826EF0
    r7 = *(2 + r7); // lbz @ 0x80826EF4
    FUN_806E4364(); // bl 0x806E4364
    r29 = r28;
    /* clrlwi r0, r29, 0x18 */ // 0x80826F00
    if (!=) goto 0x0x80826e4c;
    r0 = *(0x24 + r1); // lwz @ 0x80826F10
    return;
}