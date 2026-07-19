/* Function at 0x808C99BC, size=268 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808C99BC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x808C99CC
    *(8 + r1) = r30; // stw @ 0x808C99D0
    r30 = r3;
    r4 = *(0 + r31); // lwz @ 0x808C99D8
    r4 = *(0 + r4); // lwz @ 0x808C99DC
    r0 = *(0x38b + r4); // lbz @ 0x808C99E0
    if (==) goto 0x0x808c99f4;
    /* li r3, 0 */ // 0x808C99EC
    /* b 0x808c9ab0 */ // 0x808C99F0
    r0 = *(8 + r3); // lwz @ 0x808C99F4
    if (==) goto 0x0x808c9a08;
    /* li r3, 0 */ // 0x808C9A00
    /* b 0x808c9ab0 */ // 0x808C9A04
    /* lis r3, 0 */ // 0x808C9A08
    /* li r4, 4 */ // 0x808C9A0C
    r3 = *(0 + r3); // lwz @ 0x808C9A10
    FUN_805C5788(r3, r3, r4); // bl 0x805C5788
    if (==) goto 0x0x808c9a28;
    /* li r3, 1 */ // 0x808C9A20
    /* b 0x808c9ab0 */ // 0x808C9A24
    r3 = *(0 + r31); // lwz @ 0x808C9A28
    r3 = *(0 + r3); // lwz @ 0x808C9A2C
    r4 = *(0 + r3); // lwz @ 0x808C9A30
    if (==) goto 0x0x808c9a54;
    if (==) goto 0x0x808c9a54;
    if (==) goto 0x0x808c9a54;
    if (!=) goto 0x0x808c9a78;
    /* lis r3, 0 */ // 0x808C9A54
    r3 = *(0 + r3); // lwz @ 0x808C9A58
    r0 = *(8 + r3); // lwz @ 0x808C9A5C
    if (==) goto 0x0x808c9a78;
    /* li r0, 0x48 */ // 0x808C9A68
    *(0x44 + r30) = r0; // stw @ 0x808C9A6C
    /* li r3, 1 */ // 0x808C9A70
    /* b 0x808c9ab0 */ // 0x808C9A74
    if (==) goto 0x0x808c9a90;
    if (==) goto 0x0x808c9a90;
    if (!=) goto 0x0x808c9aac;
    /* lis r3, 0 */ // 0x808C9A90
    r3 = *(0 + r3); // lwz @ 0x808C9A94
    r3 = *(0xc + r3); // lwz @ 0x808C9A98
    r3 = *(0 + r3); // lwz @ 0x808C9A9C
    r0 = *(0x38 + r3); // lwz @ 0x808C9AA0
    r3 = r0 rlwinm 0x1f; // rlwinm
    /* b 0x808c9ab0 */ // 0x808C9AA8
    /* li r3, 0 */ // 0x808C9AAC
    r0 = *(0x14 + r1); // lwz @ 0x808C9AB0
    r31 = *(0xc + r1); // lwz @ 0x808C9AB4
    r30 = *(8 + r1); // lwz @ 0x808C9AB8
    return;
}