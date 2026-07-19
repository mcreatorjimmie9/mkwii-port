/* Function at 0x805C3054, size=236 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805C3054(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x805C3068
    r3 = *(0x10 + r3); // lwz @ 0x805C306C
    r12 = *(0 + r3); // lwz @ 0x805C3070
    r12 = *(0x20 + r12); // lwz @ 0x805C3074
    /* mtctr r12 */ // 0x805C3078
    /* bctrl  */ // 0x805C307C
    /* lis r3, 0 */ // 0x805C3080
    r3 = *(0 + r3); // lwz @ 0x805C3084
    FUN_805B41AC(r3); // bl 0x805B41AC
    /* lis r4, 0 */ // 0x805C308C
    /* li r3, 0 */ // 0x805C3090
    r4 = *(0 + r4); // lwz @ 0x805C3094
    r0 = *(0xb70 + r4); // lwz @ 0x805C3098
    if (<) goto 0x0x805c30b0;
    if (>) goto 0x0x805c30b0;
    /* li r3, 1 */ // 0x805C30AC
    if (==) goto 0x0x805c30d4;
    /* lis r30, 0 */ // 0x805C30B8
    r3 = *(0 + r30); // lwz @ 0x805C30BC
    FUN_805B31D8(r3); // bl 0x805B31D8
    r3 = *(0 + r30); // lwz @ 0x805C30C4
    /* li r0, 1 */ // 0x805C30C8
    *(0x4156 + r3) = r0; // stb @ 0x805C30CC
    /* b 0x805c30e4 */ // 0x805C30D0
    /* lis r3, 0 */ // 0x805C30D4
    /* li r0, 0 */ // 0x805C30D8
    r3 = *(0 + r3); // lwz @ 0x805C30DC
    *(0x4156 + r3) = r0; // stb @ 0x805C30E0
    /* li r0, 1 */ // 0x805C30E4
    *(0x28 + r31) = r0; // stw @ 0x805C30E8
    /* lis r4, 0 */ // 0x805C30EC
    r3 = *(0 + r4); // lwz @ 0x805C30F0
    r3 = *(0xb74 + r3); // lwz @ 0x805C30F4
    if (<) goto 0x0x805c3120;
    if (>) goto 0x0x805c3120;
    r3 = *(0x14 + r31); // lwz @ 0x805C3108
    *(0x41 + r3) = r0; // stb @ 0x805C310C
    r3 = *(0 + r4); // lwz @ 0x805C3110
    FUN_805C14D8(); // bl 0x805C14D8
    /* li r0, 2 */ // 0x805C3118
    *(0x28 + r31) = r0; // stw @ 0x805C311C
    /* li r0, 0 */ // 0x805C3120
    *(0x20 + r31) = r0; // stw @ 0x805C3124
    r31 = *(0xc + r1); // lwz @ 0x805C3128
    r30 = *(8 + r1); // lwz @ 0x805C312C
    r0 = *(0x14 + r1); // lwz @ 0x805C3130
    return;
}