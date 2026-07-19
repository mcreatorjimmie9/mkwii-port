/* Function at 0x80698C44, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_80698C44(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80698C5C
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80698C64
    r28 = r3;
    r0 = *(0xc + r3); // lwz @ 0x80698C6C
    if (==) goto 0x0x80698cb0;
    r3 = r0;
    FUN_80697D6C(r3); // bl 0x80697D6C
    r31 = r3;
    r3 = r29;
    FUN_80697D6C(r3, r3); // bl 0x80697D6C
    if (<=) goto 0x0x80698ca0;
    *(0xc + r28) = r29; // stw @ 0x80698C94
    *(0x18 + r28) = r30; // stw @ 0x80698C98
    /* b 0x80698cb0 */ // 0x80698C9C
    r3 = *(0xc + r28); // lwz @ 0x80698CA0
    FUN_80697D6C(); // bl 0x80697D6C
    r3 = r29;
    FUN_80697D6C(r3); // bl 0x80697D6C
    r0 = *(0x24 + r1); // lwz @ 0x80698CB0
    r31 = *(0x1c + r1); // lwz @ 0x80698CB4
    r30 = *(0x18 + r1); // lwz @ 0x80698CB8
    r29 = *(0x14 + r1); // lwz @ 0x80698CBC
    r28 = *(0x10 + r1); // lwz @ 0x80698CC0
    return;
}