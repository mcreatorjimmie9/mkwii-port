/* Function at 0x805AB3DC, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805AB3DC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x805AB3F0
    r29 = r3;
    FUN_805AAD20(); // bl 0x805AAD20
    r30 = r29;
    /* li r31, 0 */ // 0x805AB400
    r3 = *(0xc94 + r30); // lwz @ 0x805AB404
    if (==) goto 0x0x805ab414;
    FUN_805E3430(); // bl 0x805E3430
    r31 = r31 + 1; // 0x805AB414
    r30 = r30 + 4; // 0x805AB418
    if (<) goto 0x0x805ab404;
    r3 = *(0xc94 + r29); // lwz @ 0x805AB424
    if (==) goto 0x0x805ab43c;
    r0 = *(0x1c + r3); // lhz @ 0x805AB430
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1c + r3) = r0; // sth @ 0x805AB438
    r3 = *(0xc98 + r29); // lwz @ 0x805AB43C
    if (==) goto 0x0x805ab454;
    r0 = *(0x1c + r3); // lhz @ 0x805AB448
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1c + r3) = r0; // sth @ 0x805AB450
    r3 = *(0xc9c + r29); // lwz @ 0x805AB454
    if (==) goto 0x0x805ab46c;
    r0 = *(0x1c + r3); // lhz @ 0x805AB460
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1c + r3) = r0; // sth @ 0x805AB468
    /* lis r3, 0 */ // 0x805AB46C
    r4 = *(0x28 + r29); // lwz @ 0x805AB470
    r3 = r3 + 0; // 0x805AB474
    r3 = r3 + 0x37; // 0x805AB478
    /* crclr cr1eq */ // 0x805AB47C
    FUN_805E3430(r3, r3, r3); // bl 0x805E3430
}