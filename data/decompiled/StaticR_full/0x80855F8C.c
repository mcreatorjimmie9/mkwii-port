/* Function at 0x80855F8C, size=116 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r22 */
/* Calls: 1 function(s) */

int FUN_80855F8C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -192(r1) */
    /* saved r22 */
    /* stmw r22, 0x98(r1) */ // 0x80855F98
    r29 = r3;
    r30 = r4;
    r0 = *(0x100 + r3); // lwz @ 0x80855FA4
    if (==) goto 0x0x80856188;
    r31 = *(0x6c + r3); // lwz @ 0x80855FB0
    /* lis r5, 0 */ // 0x80855FB4
    r9 = *(0 + r4); // lbz @ 0x80855FB8
    r8 = *(1 + r4); // lbz @ 0x80855FC0
    r7 = *(2 + r4); // lbz @ 0x80855FC4
    r6 = *(3 + r4); // lbz @ 0x80855FC8
    r0 = *(0xc + r31); // lwz @ 0x80855FCC
    *(0x24 + r1) = r9; // stb @ 0x80855FD0
    r4 = *(0 + r5); // lwz @ 0x80855FD4
    *(0x25 + r1) = r8; // stb @ 0x80855FD8
    *(0x26 + r1) = r7; // stb @ 0x80855FDC
    *(0x27 + r1) = r6; // stb @ 0x80855FE0
    *(0x18 + r1) = r0; // stw @ 0x80855FE4
    FUN_805E3430(); // bl 0x805E3430
    r23 = r3;
    if (==) goto 0x0x80856098;
    r26 = *(0x24 + r1); // lwz @ 0x80855FF8
    /* li r22, 0 */ // 0x80855FFC
}