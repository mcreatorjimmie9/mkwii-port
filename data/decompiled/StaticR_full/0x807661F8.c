/* Function at 0x807661F8, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807661F8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8076620C
    r0 = *(0xb8 + r3); // lwz @ 0x80766210
    if (<) goto 0x0x8076626c;
    /* li r5, -1 */ // 0x8076621C
    /* li r6, 0 */ // 0x80766220
    *(0xb4 + r3) = r0; // sth @ 0x80766224
    r0 = r0 rlwinm 1; // rlwinm
    r4 = *(0xc4 + r3); // lwz @ 0x8076622C
    *(0xb8 + r3) = r5; // stw @ 0x80766230
    r5 = *(0xc8 + r3); // lwz @ 0x80766234
    *(0xbc + r3) = r6; // stw @ 0x80766238
    /* lhzx r0, r4, r0 */ // 0x8076623C
    /* mulli r0, r0, 0x1c */ // 0x80766240
    r30 = r5 + r0; // 0x80766244
    r3 = r30 + 4; // 0x80766248
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80766294;
    r3 = *(0xcc + r31); // lwz @ 0x80766258
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x80766294 */ // 0x80766268
    r4 = *(0xbc + r3); // lwz @ 0x8076626C
    r0 = *(0xb4 + r3); // lhz @ 0x80766270
    r4 = r4 + 1; // 0x80766274
    *(0xbc + r3) = r4; // stw @ 0x80766278
    r4 = *(0xc4 + r3); // lwz @ 0x8076627C
}