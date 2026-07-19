/* Function at 0x805A5968, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805A5968(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 0 */ // 0x805A5974
    *(0x18 + r1) = r30; // stw @ 0x805A597C
    *(0x14 + r1) = r29; // stw @ 0x805A5980
    r29 = r3;
    *(0 + r3) = r0; // stw @ 0x805A5988
    *(4 + r3) = r0; // sth @ 0x805A598C
    *(8 + r3) = r4; // stw @ 0x805A5990
    r0 = *(4 + r4); // lhz @ 0x805A5994
    if (==) goto 0x0x805a59b0;
    *(4 + r3) = r0; // sth @ 0x805A59A0
    r3 = r0 rlwinm 2; // rlwinm
    FUN_805E3430(); // bl 0x805E3430
    *(0 + r29) = r3; // stw @ 0x805A59AC
    r0 = *(4 + r29); // lhz @ 0x805A59B0
    if (==) goto 0x0x805a5a10;
    r3 = *(8 + r29); // lwz @ 0x805A59BC
    /* li r30, 0 */ // 0x805A59C0
    r31 = r3 + 8; // 0x805A59C4
    /* b 0x805a5a00 */ // 0x805A59C8
    /* li r3, 4 */ // 0x805A59CC
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805a59e0;
    *(0 + r3) = r31; // stw @ 0x805A59DC
    r4 = *(0 + r29); // lwz @ 0x805A59E0
    r0 = r30 rlwinm 2; // rlwinm
    r30 = r30 + 1; // 0x805A59E8
    /* stwx r3, r4, r0 */ // 0x805A59EC
    r0 = *(0 + r31); // lhz @ 0x805A59F0
    /* slwi r0, r0, 4 */ // 0x805A59F4
    r3 = r31 + r0; // 0x805A59F8
    r31 = r3 + 4; // 0x805A59FC
}