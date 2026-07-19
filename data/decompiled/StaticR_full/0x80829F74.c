/* Function at 0x80829F74, size=268 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80829F74(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x80829F84
    *(0x18 + r1) = r30; // stw @ 0x80829F88
    /* li r30, 0 */ // 0x80829F8C
    *(0x14 + r1) = r29; // stw @ 0x80829F90
    r29 = r3;
    r0 = *(0x7c + r3); // lwz @ 0x80829F98
    r0 = r0 | 8; // 0x80829F9C
    *(0x7c + r3) = r0; // stw @ 0x80829FA0
    r0 = *(0x9c + r29); // lwz @ 0x80829FA4
    if (==) goto 0x0x80829ff0;
    r3 = r0 + r31; // 0x80829FB0
    /* li r0, 1 */ // 0x80829FB4
    r3 = *(0x14 + r3); // lwz @ 0x80829FB8
    r4 = *(4 + r3); // lwz @ 0x80829FBC
    if (==) goto 0x0x80829fd4;
    if (==) goto 0x0x80829fd4;
    /* li r0, 0 */ // 0x80829FD0
    if (==) goto 0x0x80829fe4;
    r3 = *(0 + r3); // lwz @ 0x80829FDC
    /* b 0x80829fe8 */ // 0x80829FE0
    /* li r3, 0 */ // 0x80829FE4
    /* li r4, 2 */ // 0x80829FE8
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r0 = *(0xa8 + r29); // lwz @ 0x80829FF0
    if (==) goto 0x0x8082a03c;
    r3 = r0 + r31; // 0x80829FFC
    /* li r0, 1 */ // 0x8082A000
    r3 = *(0x14 + r3); // lwz @ 0x8082A004
    r4 = *(4 + r3); // lwz @ 0x8082A008
    if (==) goto 0x0x8082a020;
    if (==) goto 0x0x8082a020;
    /* li r0, 0 */ // 0x8082A01C
    if (==) goto 0x0x8082a030;
    r3 = *(0 + r3); // lwz @ 0x8082A028
    /* b 0x8082a034 */ // 0x8082A02C
    /* li r3, 0 */ // 0x8082A030
    /* li r4, 2 */ // 0x8082A034
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r30 = r30 + 1; // 0x8082A03C
    r31 = r31 + 4; // 0x8082A040
    if (<) goto 0x0x80829fa4;
    /* lfs f2, 0x44(r29) */ // 0x8082A04C
    /* lfs f1, 0x48(r29) */ // 0x8082A050
    /* lfs f0, 0x4c(r29) */ // 0x8082A054
    /* stfs f2, 0x8c(r29) */ // 0x8082A058
    /* stfs f1, 0x90(r29) */ // 0x8082A05C
    /* stfs f0, 0x94(r29) */ // 0x8082A060
    r31 = *(0x1c + r1); // lwz @ 0x8082A064
    r30 = *(0x18 + r1); // lwz @ 0x8082A068
    r29 = *(0x14 + r1); // lwz @ 0x8082A06C
    r0 = *(0x24 + r1); // lwz @ 0x8082A070
    return;
}