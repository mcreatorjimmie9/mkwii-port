/* Function at 0x806F497C, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_806F497C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806F4984
    *(0x18 + r1) = r30; // stw @ 0x806F4990
    *(0x14 + r1) = r29; // stw @ 0x806F4994
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806F499C
    FUN_806E6B18(); // bl 0x806E6B18
    if (==) goto 0x0x806f49c4;
    r0 = *(0 + r29); // lbz @ 0x806F49AC
    if (!=) goto 0x0x806f4a1c;
    r3 = r29;
    FUN_806F4808(r3); // bl 0x806F4808
    /* b 0x806f4a1c */ // 0x806F49C0
    r0 = *(0 + r29); // lbz @ 0x806F49C4
    if (==) goto 0x0x806f4a1c;
    /* li r0, 0 */ // 0x806F49D0
    *(0 + r29) = r0; // stb @ 0x806F49D4
    r3 = r29 + 8; // 0x806F49D8
    /* li r4, 0 */ // 0x806F49DC
    *(0x9e0 + r29) = r0; // stw @ 0x806F49E0
    /* li r5, 0xc0 */ // 0x806F49E4
    *(0x9e4 + r29) = r0; // stw @ 0x806F49E8
    *(0x9e8 + r29) = r0; // stw @ 0x806F49EC
    FUN_805E3430(r4, r5); // bl 0x805E3430
    r30 = r29 + 0xc8; // 0x806F49F4
    /* li r31, 0 */ // 0x806F49F8
    r3 = r30;
    /* li r4, 0 */ // 0x806F4A00
    /* li r5, 0xc0 */ // 0x806F4A04
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    r31 = r31 + 1; // 0x806F4A0C
    r30 = r30 + 0xc0; // 0x806F4A10
    if (<) goto 0x0x806f49fc;
    r0 = *(0 + r29); // lbz @ 0x806F4A1C
    if (==) goto 0x0x806f4a5c;
    r3 = r29;
    FUN_806F4E78(r3); // bl 0x806F4E78
    r0 = *(0x9dc + r29); // lwz @ 0x806F4A30
}