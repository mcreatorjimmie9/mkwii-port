/* Function at 0x805A904C, size=148 bytes */
/* Stack frame: 288 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805A904C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -288(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(0x118 + r1) = r30; // stw @ 0x805A9060
    r30 = r3;
    r0 = *(0x20 + r3); // lwz @ 0x805A9068
    if (==) goto 0x0x805a907c;
    /* li r3, 0 */ // 0x805A9074
    /* b 0x805a911c */ // 0x805A9078
    r0 = *(0 + r4); // lbz @ 0x805A907C
    if (!=) goto 0x0x805a90ac;
    /* lis r5, 0 */ // 0x805A9088
    r6 = r4;
    r5 = r5 + 0; // 0x805A9090
    r5 = r5 + 0xc; // 0x805A9098
    /* li r4, 0x100 */ // 0x805A909C
    /* crclr cr1eq */ // 0x805A90A0
    FUN_805E3430(r5, r3, r5, r4); // bl 0x805E3430
    /* b 0x805a90cc */ // 0x805A90A8
    /* lis r5, 0 */ // 0x805A90AC
    r6 = r4;
    r5 = r5 + 0; // 0x805A90B4
    r5 = r5 + 0xf; // 0x805A90BC
    /* li r4, 0x100 */ // 0x805A90C0
    /* crclr cr1eq */ // 0x805A90C4
    FUN_805E3430(r5, r3, r5, r4); // bl 0x805E3430
    /* li r0, 0 */ // 0x805A90CC
    *(0x10f + r1) = r0; // stb @ 0x805A90D0
    *(8 + r1) = r0; // stw @ 0x805A90D8
    *(0xc + r1) = r0; // stw @ 0x805A90DC
}