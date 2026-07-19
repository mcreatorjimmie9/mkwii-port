/* Function at 0x806F21D4, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806F21D4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806F21E4
    *(0x18 + r1) = r30; // stw @ 0x806F21E8
    r30 = r4;
    /* li r4, 0 */ // 0x806F21F0
    *(0x14 + r1) = r29; // stw @ 0x806F21F4
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x806F21FC
    FUN_806E9970(r4); // bl 0x806E9970
    if (==) goto 0x0x806f2220;
    r3 = *(0 + r31); // lwz @ 0x806F220C
    /* li r4, 1 */ // 0x806F2210
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f223c;
    /* lis r3, 0 */ // 0x806F2220
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F2228
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F2230
    /* lbzx r3, r29, r0 */ // 0x806F2234
    /* b 0x806f2268 */ // 0x806F2238
    /* lis r3, 0 */ // 0x806F223C
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F2244
    FUN_806E4438(r3, r4); // bl 0x806E4438
    if (==) goto 0x0x806f2264;
    /* slwi r0, r30, 3 */ // 0x806F2254
    r3 = r29 + r0; // 0x806F2258
    r3 = *(0x10 + r3); // lbz @ 0x806F225C
    /* b 0x806f2268 */ // 0x806F2260
    /* li r3, 0 */ // 0x806F2264
    r0 = *(0x24 + r1); // lwz @ 0x806F2268
    r31 = *(0x1c + r1); // lwz @ 0x806F226C
    r30 = *(0x18 + r1); // lwz @ 0x806F2270
    r29 = *(0x14 + r1); // lwz @ 0x806F2274
    return;
}