/* Function at 0x8077902C, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_8077902C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x80779044
    *(0x10 + r1) = r28; // stw @ 0x80779048
    r0 = *(0xbc + r3); // lwz @ 0x8077904C
    if (<) goto 0x0x807790a8;
    /* li r5, -1 */ // 0x80779058
    /* li r6, 0 */ // 0x8077905C
    *(0xb8 + r3) = r0; // sth @ 0x80779060
    r0 = r0 rlwinm 1; // rlwinm
    r4 = *(0xc8 + r3); // lwz @ 0x80779068
    *(0xbc + r3) = r5; // stw @ 0x8077906C
    r5 = *(0xcc + r3); // lwz @ 0x80779070
    *(0xc0 + r3) = r6; // stw @ 0x80779074
    /* lhzx r0, r4, r0 */ // 0x80779078
    /* mulli r0, r0, 0x1c */ // 0x8077907C
    r30 = r5 + r0; // 0x80779080
    r3 = r30 + 4; // 0x80779084
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x807790d0;
    r3 = *(0xd0 + r31); // lwz @ 0x80779094
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x807790d0 */ // 0x807790A4
    r4 = *(0xc0 + r3); // lwz @ 0x807790A8
    r0 = *(0xb8 + r3); // lhz @ 0x807790AC
    r4 = r4 + 1; // 0x807790B0
    *(0xc0 + r3) = r4; // stw @ 0x807790B4
    r4 = *(0xc8 + r3); // lwz @ 0x807790B8
}