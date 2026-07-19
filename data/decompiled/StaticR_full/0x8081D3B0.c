/* Function at 0x8081D3B0, size=128 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_8081D3B0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* stmw r27, 0x1c(r1) */ // 0x8081D3BC
    r31 = r3;
    FUN_8081CEF0(); // bl 0x8081CEF0
    if (==) goto 0x0x8081d3fc;
    r27 = r31;
    /* li r28, 0 */ // 0x8081D3D4
    /* b 0x8081d3f0 */ // 0x8081D3D8
    r3 = *(0x20 + r27); // lwz @ 0x8081D3DC
    r4 = r31 + 0xb0; // 0x8081D3E0
    FUN_80829E48(r4); // bl 0x80829E48
    r27 = r27 + 4; // 0x8081D3E8
    r28 = r28 + 1; // 0x8081D3EC
    r0 = *(0x50 + r31); // lwz @ 0x8081D3F0
    if (<) goto 0x0x8081d3dc;
    r0 = *(0x1c + r31); // lwz @ 0x8081D3FC
    /* lis r4, 0 */ // 0x8081D400
    r4 = r4 + 0; // 0x8081D404
    /* mulli r0, r0, 0xc */ // 0x8081D40C
    r6 = r4 + r0; // 0x8081D410
    /* lwzx r5, r4, r0 */ // 0x8081D414
    r4 = *(4 + r6); // lwz @ 0x8081D418
    r0 = *(8 + r6); // lwz @ 0x8081D41C
    *(8 + r1) = r5; // stw @ 0x8081D420
    *(0xc + r1) = r4; // stw @ 0x8081D424
    *(0x10 + r1) = r0; // stw @ 0x8081D428
    FUN_805E3430(); // bl 0x805E3430
}