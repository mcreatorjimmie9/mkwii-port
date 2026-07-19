/* Function at 0x80829988, size=244 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80829988(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x80829998
    *(0x18 + r1) = r30; // stw @ 0x8082999C
    /* li r30, 0 */ // 0x808299A0
    *(0x14 + r1) = r29; // stw @ 0x808299A4
    r29 = r3;
    r0 = *(0x7c + r3); // lwz @ 0x808299AC
    r0 = r0 rlwinm 0; // rlwinm
    *(0x7c + r3) = r0; // stw @ 0x808299B4
    r0 = *(0x9c + r29); // lwz @ 0x808299B8
    if (==) goto 0x0x80829a04;
    r3 = r0 + r31; // 0x808299C4
    /* li r0, 1 */ // 0x808299C8
    r3 = *(0x14 + r3); // lwz @ 0x808299CC
    r4 = *(4 + r3); // lwz @ 0x808299D0
    if (==) goto 0x0x808299e8;
    if (==) goto 0x0x808299e8;
    /* li r0, 0 */ // 0x808299E4
    if (==) goto 0x0x808299f8;
    r3 = *(0 + r3); // lwz @ 0x808299F0
    /* b 0x808299fc */ // 0x808299F4
    /* li r3, 0 */ // 0x808299F8
    /* li r4, 2 */ // 0x808299FC
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r0 = *(0xa8 + r29); // lwz @ 0x80829A04
    if (==) goto 0x0x80829a50;
    r3 = r0 + r31; // 0x80829A10
    /* li r0, 1 */ // 0x80829A14
    r3 = *(0x14 + r3); // lwz @ 0x80829A18
    r4 = *(4 + r3); // lwz @ 0x80829A1C
    if (==) goto 0x0x80829a34;
    if (==) goto 0x0x80829a34;
    /* li r0, 0 */ // 0x80829A30
    if (==) goto 0x0x80829a44;
    r3 = *(0 + r3); // lwz @ 0x80829A3C
    /* b 0x80829a48 */ // 0x80829A40
    /* li r3, 0 */ // 0x80829A44
    /* li r4, 2 */ // 0x80829A48
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r30 = r30 + 1; // 0x80829A50
    r31 = r31 + 4; // 0x80829A54
    if (<) goto 0x0x808299b8;
    r0 = *(0x24 + r1); // lwz @ 0x80829A60
    r31 = *(0x1c + r1); // lwz @ 0x80829A64
    r30 = *(0x18 + r1); // lwz @ 0x80829A68
    r29 = *(0x14 + r1); // lwz @ 0x80829A6C
    return;
}