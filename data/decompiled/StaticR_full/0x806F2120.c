/* Function at 0x806F2120, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806F2120(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806F2130
    *(0x18 + r1) = r30; // stw @ 0x806F2134
    r30 = r4;
    /* li r4, 0 */ // 0x806F213C
    *(0x14 + r1) = r29; // stw @ 0x806F2140
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x806F2148
    FUN_806E9970(r4); // bl 0x806E9970
    if (==) goto 0x0x806f216c;
    r3 = *(0 + r31); // lwz @ 0x806F2158
    /* li r4, 1 */ // 0x806F215C
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f218c;
    /* lis r3, 0 */ // 0x806F216C
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F2174
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F217C
    r3 = r29 + r0; // 0x806F2180
    r3 = *(4 + r3); // lbz @ 0x806F2184
    /* b 0x806f21b8 */ // 0x806F2188
    /* lis r3, 0 */ // 0x806F218C
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F2194
    FUN_806E4438(r3, r4); // bl 0x806E4438
    if (==) goto 0x0x806f21b4;
    /* slwi r0, r30, 3 */ // 0x806F21A4
    r3 = r29 + r0; // 0x806F21A8
    r3 = *(0x14 + r3); // lbz @ 0x806F21AC
    /* b 0x806f21b8 */ // 0x806F21B0
    /* li r3, 0 */ // 0x806F21B4
    r0 = *(0x24 + r1); // lwz @ 0x806F21B8
    r31 = *(0x1c + r1); // lwz @ 0x806F21BC
    r30 = *(0x18 + r1); // lwz @ 0x806F21C0
    r29 = *(0x14 + r1); // lwz @ 0x806F21C4
    return;
}