/* Function at 0x806F2330, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806F2330(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806F2340
    *(0x18 + r1) = r30; // stw @ 0x806F2344
    r30 = r4;
    /* li r4, 0 */ // 0x806F234C
    *(0x14 + r1) = r29; // stw @ 0x806F2350
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x806F2358
    FUN_806E9970(r4); // bl 0x806E9970
    if (==) goto 0x0x806f237c;
    r3 = *(0 + r31); // lwz @ 0x806F2368
    /* li r4, 1 */ // 0x806F236C
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f239c;
    /* lis r3, 0 */ // 0x806F237C
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F2384
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F238C
    r3 = r29 + r0; // 0x806F2390
    r0 = *(4 + r3); // lbz @ 0x806F2394
    /* b 0x806f23c8 */ // 0x806F2398
    /* lis r3, 0 */ // 0x806F239C
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F23A4
    FUN_806E4438(r3, r4); // bl 0x806E4438
    if (==) goto 0x0x806f23c4;
    /* slwi r0, r30, 3 */ // 0x806F23B4
    r3 = r29 + r0; // 0x806F23B8
    r0 = *(0x14 + r3); // lbz @ 0x806F23BC
    /* b 0x806f23c8 */ // 0x806F23C0
    /* li r0, 0 */ // 0x806F23C4
    /* li r3, 0 */ // 0x806F23CC
    if (<) goto 0x0x806f23dc;
    if (<=) goto 0x0x806f23ec;
    if (<) goto 0x0x806f23f0;
    if (>) goto 0x0x806f23f0;
    /* li r3, 1 */ // 0x806F23EC
    r0 = *(0x24 + r1); // lwz @ 0x806F23F0
    r31 = *(0x1c + r1); // lwz @ 0x806F23F4
    r30 = *(0x18 + r1); // lwz @ 0x806F23F8
    r29 = *(0x14 + r1); // lwz @ 0x806F23FC
    return;
}