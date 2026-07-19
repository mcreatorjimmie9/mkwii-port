/* Function at 0x807831C4, size=140 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807831C4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r6, 0 */ // 0x807831CC
    *(0x5c + r1) = r31; // stw @ 0x807831D4
    r31 = r3;
    *(0x58 + r1) = r30; // stw @ 0x807831DC
    r0 = *(0xb8 + r3); // lwz @ 0x807831E0
    *(0x40c + r3) = r6; // stb @ 0x807831E4
    if (<) goto 0x0x8078323c;
    /* li r5, -1 */ // 0x807831F0
    *(0xb4 + r3) = r0; // sth @ 0x807831F4
    r4 = *(0xc4 + r3); // lwz @ 0x807831F8
    r0 = r0 rlwinm 1; // rlwinm
    *(0xb8 + r3) = r5; // stw @ 0x80783200
    r5 = *(0xc8 + r3); // lwz @ 0x80783204
    *(0xbc + r3) = r6; // stw @ 0x80783208
    /* lhzx r0, r4, r0 */ // 0x8078320C
    /* mulli r0, r0, 0x1c */ // 0x80783210
    r30 = r5 + r0; // 0x80783214
    r3 = r30 + 4; // 0x80783218
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80783264;
    r3 = *(0xcc + r31); // lwz @ 0x80783228
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x80783264 */ // 0x80783238
    r4 = *(0xbc + r3); // lwz @ 0x8078323C
    r0 = *(0xb4 + r3); // lhz @ 0x80783240
    r4 = r4 + 1; // 0x80783244
    *(0xbc + r3) = r4; // stw @ 0x80783248
    r4 = *(0xc4 + r3); // lwz @ 0x8078324C
}