/* Function at 0x8082B688, size=96 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8082B688(int r3, int r4)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0xa0 + r1) = r28; // stw @ 0x8082B6A0
    r28 = r3;
    r0 = *(0x7c + r3); // lwz @ 0x8082B6A8
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x8082B6AC
    if (==) goto 0x0x8082b6bc;
    r30 = r3 + 0x8c; // 0x8082B6B4
    /* b 0x8082b6c0 */ // 0x8082B6B8
    r30 = *(0x98 + r3); // lwz @ 0x8082B6BC
    r29 = *(0x9c + r3); // lwz @ 0x8082B6C0
    r3 = *(0x10 + r29); // lwz @ 0x8082B6C4
    r3 = *(0 + r3); // lwz @ 0x8082B6C8
    if (==) goto 0x0x8082b6e4;
    r3 = r3 + 0xc; // 0x8082B6D4
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x8082b6ec */ // 0x8082B6E0
}